// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Recovery_2_H
#define WIN32_Windows_Win32_Recovery_2_H
#include "win32/impl/Windows.Win32.Recovery.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_RegisterApplicationRecoveryCallback(win32::Windows::Win32::WindowsProgramming::APPLICATION_RECOVERY_CALLBACK* pRecoveyCallback, void* pvParameter, uint32_t dwPingInterval, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_UnregisterApplicationRecoveryCallback() noexcept;
    int32_t __stdcall WIN32_IMPL_RegisterApplicationRestart(uint16_t* pwzCommandline, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_UnregisterApplicationRestart() noexcept;
    int32_t __stdcall WIN32_IMPL_GetApplicationRecoveryCallback(win32::Windows::Win32::SystemServices::HANDLE hProcess, win32::Windows::Win32::WindowsProgramming::APPLICATION_RECOVERY_CALLBACK** pRecoveryCallback, void** ppvParameter, uint32_t* pdwPingInterval, uint32_t* pdwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_GetApplicationRestartSettings(win32::Windows::Win32::SystemServices::HANDLE hProcess, uint16_t* pwzCommandline, uint32_t* pcchSize, uint32_t* pdwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_ApplicationRecoveryInProgress(int32_t* pbCancelled) noexcept;
    void __stdcall WIN32_IMPL_ApplicationRecoveryFinished(win32::Windows::Win32::SystemServices::BOOL bSuccess) noexcept;
}
WIN32_IMPL_LINK(RegisterApplicationRecoveryCallback, 16)
WIN32_IMPL_LINK(UnregisterApplicationRecoveryCallback, 0)
WIN32_IMPL_LINK(RegisterApplicationRestart, 8)
WIN32_IMPL_LINK(UnregisterApplicationRestart, 0)
WIN32_IMPL_LINK(GetApplicationRecoveryCallback, 20)
WIN32_IMPL_LINK(GetApplicationRestartSettings, 16)
WIN32_IMPL_LINK(ApplicationRecoveryInProgress, 4)
WIN32_IMPL_LINK(ApplicationRecoveryFinished, 4)

#pragma endregion abi_methods

#endif
