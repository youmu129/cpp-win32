#ifndef WIN32_APP_HPP
#define WIN32_APP_HPP

#include "win32/Windows.Win32.Com.h"

namespace win32::_impl
{
    using namespace win32::Windows::Win32::Com;
}

namespace win32
{
    template <bool EnableMultiThread = false>
    struct ScopedComContext
    {
        ScopedComContext()
        {
            hresult ret = _impl::CoInitializeEx(
                nullptr, 
                static_cast<uint32_t>(EnableMultiThread ? _impl::COINIT::COINIT_APARTMENTTHREADED : _impl::COINIT::COINIT_MULTITHREADED) | 
                    static_cast<uint32_t>(_impl::COINIT::COINIT_DISABLE_OLE1DDE));
            check_hresult(ret);
        }

        ~ScopedComContext()
        {
            _impl::CoUninitialize();
        }
    };

    template <typename T>
    struct Application
    {

    protected:
        ApplicationT()
        {
            
        }
        
    private:

    };
}

#endif // WIN32_APP_HPP_
