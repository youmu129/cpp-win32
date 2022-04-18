#ifndef WIN32_ALLOCATOR_HPP
#define WIN32_ALLOCATOR_HPP

#include "debug.hpp"
#include "win32/Windows.Win32.SystemServices.h"
#include "win32/Windows.Win32.WindowsProgramming.h"

#include <type_traits>

namespace win32::_impl
{
    using namespace win32::Windows::Win32::SystemServices;
    using namespace win32::Windows::Win32::WindowsProgramming;
}

namespace win32
{
    inline void check_heap(_impl::HeapHandle heap)
    {
        if (heap.Value == 0)
        {
            throw_last_win32();
        }
    }

    template<bool IsUnique>
    class Heap
    {
    public:
        Heap() noexcept
        {
            heap_.Value = _impl::GetProcessHeap().Value;
            check_heap(heap_);
        }

        Heap(uint32_t flOptions, size_t dwInitialSize, size_t dwMaximumSize) noexcept
        {
            heap_ = _impl::HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
            check_heap(heap_);
        }

        ~Heap() noexcept
        {
            if constexpr (IsUnique)
            {
                if (heap_.Value != 0)
                {
                    _impl::BOOL ret = _impl::HeapDestroy(heap_);
                    check_bool(ret);
                    heap_.Value = 0;
                }
            }
        }

        void* Allocate(size_t nBytes) noexcept
        {
            return _impl::HeapAlloc(heap_, 0, nBytes);
        }

        void Free(void* p) noexcept
        {
            if (p != nullptr)
            {
                BOOL ret = _impl::HeapFree(heap_, 0, p);
                check_bool(ret);
            }
        }

        void* Reallocate(void* p, size_t nBytes) noexcept
        {
            if (p == nullptr)
            {
                return Allocate(nBytes);
            }

            if (nBytes == 0)
            {
                Free(p);
                return nullptr;
            }

            return _impl::HeapReAlloc(heap_, 0, p, nBytes);
        }

        size_t GetSize(void* p) noexcept
        {
            return _impl::HeapSize(heap_, 0, p);
        }

    private:
        _impl::HeapHandle heap_;
    };

    // 模板推导指南
    Heap() -> Heap<false>;
    Heap(uint32_t, size_t, size_t) -> Heap<true>;

    using DefaultProcessHeap = Heap<false>;
    using ProcessHeap = Heap<true>;

    class LocalHeap
    {
    public:
        void* Allocate(size_t nBytes) noexcept
        {
            return reinterpret_cast<void*>(_impl::LocalAlloc(0, nBytes));
        }

        void Free(void* p) noexcept
        {
            check_expr(_impl::LocalFree(reinterpret_cast<intptr_t>(p)) == 0);
        }

        void* Reallocate(void* p, size_t nBytes) noexcept
        {
            if (p == nullptr)
            {
                return Allocate(nBytes);
            }

            if (nBytes == 0)
            {
                Free(p);
                return nullptr;
            }

            return reinterpret_cast<void*>(_impl::LocalReAlloc(reinterpret_cast<intptr_t>(p), nBytes, 0));
        }

        size_t GetSize(void* p) noexcept
        {
            return _impl::LocalSize(reinterpret_cast<intptr_t>(p));
        }
    };

    class GlobalHeap
    {
    public:
        void* Allocate(size_t nBytes) noexcept
        {
            return reinterpret_cast<void*>(_impl::GlobalAlloc(0, nBytes));
        }

        void Free(void* p) noexcept
        {
            check_expr(_impl::GlobalFree(reinterpret_cast<intptr_t>(p)) == 0);
        }

        void* Reallocate(void* p, size_t nBytes) noexcept
        {
            if (p == nullptr)
            {
                return Allocate(nBytes);
            }

            if (nBytes == 0)
            {
                Free(p);
                return nullptr;
            }

            return reinterpret_cast<void*>(_impl::GlobalReAlloc(reinterpret_cast<intptr_t>(p), nBytes, 0));
        }

        size_t GetSize(void* p) noexcept
        {
            return _impl::GlobalSize(reinterpret_cast<intptr_t>(p));
        }
    };


}

#endif // WIN32_ALLOCATOR_HPP
