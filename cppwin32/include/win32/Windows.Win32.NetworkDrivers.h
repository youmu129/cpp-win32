// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkDrivers_H
#define WIN32_Windows_Win32_NetworkDrivers_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.NetworkDrivers.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetworkDrivers
{
#pragma region methods
    inline uint32_t GetCurrentThreadCompartmentId()
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentThreadCompartmentId();
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::NTSTATUS SetCurrentThreadCompartmentId(uint32_t CompartmentId)
    {
        auto win32_impl_result = WIN32_IMPL_SetCurrentThreadCompartmentId(CompartmentId);
        return win32_impl_result;
    }
    inline uint32_t GetSessionCompartmentId(uint32_t SessionId)
    {
        auto win32_impl_result = WIN32_IMPL_GetSessionCompartmentId(SessionId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::NTSTATUS SetSessionCompartmentId(uint32_t SessionId, uint32_t CompartmentId)
    {
        auto win32_impl_result = WIN32_IMPL_SetSessionCompartmentId(SessionId, CompartmentId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::NTSTATUS GetNetworkInformation(::win32::guid* NetworkGuid, uint32_t* CompartmentId, uint32_t* SiteId, uint16_t* NetworkName, uint32_t Length)
    {
        auto win32_impl_result = WIN32_IMPL_GetNetworkInformation(NetworkGuid, CompartmentId, SiteId, NetworkName, Length);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::NTSTATUS SetNetworkInformation(::win32::guid* NetworkGuid, uint32_t CompartmentId, uint16_t* NetworkName)
    {
        auto win32_impl_result = WIN32_IMPL_SetNetworkInformation(NetworkGuid, CompartmentId, NetworkName);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
