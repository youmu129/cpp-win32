#ifndef WIN32_DEBUG_HPP
#define WIN32_DEBUG_HPP

#include "win32/Windows.Win32.Debug.h"
#include "win32/Windows.Win32.SystemServices.h"

namespace win32::_impl
{
    using namespace win32::Windows::Win32::Debug;
    using namespace win32::Windows::Win32::SystemServices;
}

namespace win32
{
    inline constexpr bool is_true(_impl::BOOL value) noexcept
    {
        return value.Value != _impl::FALSE;
    }

    struct error_code
    {
        uint32_t code;

        error_code(uint32_t code) : code(code) {}

        bool operator==(uint32_t const& other_code)
        {
            return code == other_code;
        }

        bool operator!=(uint32_t const& other_code) 
        {
            return code != other_code;
        }

    };

    struct win32_error
    {
        error_code code;
        

        win32_error(error_code code) : code(code) {}
    };

    void throw_win32(error_code code)
    {
        if (code == _impl::ERROR_SUCCESS)
        {
            return;
        }

        throw win32_error{code};
    }

    inline void check_bool(_impl::BOOL value)
    {
        if (!is_true(value))
        {
            error_code code = _impl::GetLastError();
            if (code != _impl::ERROR_SUCCESS)
            {
                throw_win32(code);
            } 
        }
    }
}

#endif // WIN32_DEBUG_HPP
