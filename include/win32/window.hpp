#ifndef WIN32_WINDOW_HPP
#define WIN32_WINDOW_HPP

#include "win32/Windows.Win32.SystemServices.h"
#include "win32/Windows.Win32.WindowsAndMessaging.h"

namespace win32::_impl
{
    using namespace win32::Windows::Win32::SystemServices;
    using namespace win32::Windows::Win32::WindowsAndMessaging;
}

namespace win32
{

    template <typename T>
    class Window
    {
    public:
        Window() 
        {
        }

        ~Window()
        {
        }

        void Destory()
        {
            if (hwnd_.Value != 0)
            {
                _impl::BOOL ret = _impl::DestroyWindow(hwnd_);
                check_bool
            }
        }

        _impl::HWND hwnd() { return hwnd_; }

    private:
        _impl::HWND hwnd_;
    };
}

#endif // WIN32_WINDOW_HPP
