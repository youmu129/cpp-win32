// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DeviceAccess_H
#define WIN32_Windows_Win32_DeviceAccess_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.DeviceAccess.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::DeviceAccess
{
#pragma region methods
    inline int32_t CreateDeviceAccessInstance(uint16_t* deviceInterfacePath, uint32_t desiredAccess, Windows::Win32::DeviceAccess::ICreateDeviceAccessAsync** createAsync)
    {
        auto win32_impl_result = WIN32_IMPL_CreateDeviceAccessInstance(deviceInterfacePath, desiredAccess, createAsync);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif