// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_OfflineFiles_2_H
#define WIN32_Windows_Win32_OfflineFiles_2_H
#include "win32/impl/Windows.Win32.OfflineFiles.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall WIN32_IMPL_OfflineFilesEnable(win32::Windows::Win32::SystemServices::BOOL bEnable, int32_t* pbRebootRequired) noexcept;
    uint32_t __stdcall WIN32_IMPL_OfflineFilesStart() noexcept;
    uint32_t __stdcall WIN32_IMPL_OfflineFilesQueryStatus(int32_t* pbActive, int32_t* pbEnabled) noexcept;
    uint32_t __stdcall WIN32_IMPL_OfflineFilesQueryStatusEx(int32_t* pbActive, int32_t* pbEnabled, int32_t* pbAvailable) noexcept;
}
WIN32_IMPL_LINK(OfflineFilesEnable, 8)
WIN32_IMPL_LINK(OfflineFilesStart, 0)
WIN32_IMPL_LINK(OfflineFilesQueryStatus, 8)
WIN32_IMPL_LINK(OfflineFilesQueryStatusEx, 12)

#pragma endregion abi_methods

#endif
