// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_SerialController_2_H
#define WIN32_Windows_Win32_SerialController_2_H
#include "win32/impl/Windows.Win32.SerialController.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_ComDBOpen(win32::Windows::Win32::SerialController::HCOMDB__** PHComDB) noexcept;
    int32_t __stdcall WIN32_IMPL_ComDBClose(win32::Windows::Win32::SerialController::HCOMDB__* HComDB) noexcept;
    int32_t __stdcall WIN32_IMPL_ComDBGetCurrentPortUsage(win32::Windows::Win32::SerialController::HCOMDB__* HComDB, uint8_t* Buffer, uint32_t BufferSize, uint32_t ReportType, uint32_t* MaxPortsReported) noexcept;
    int32_t __stdcall WIN32_IMPL_ComDBClaimNextFreePort(win32::Windows::Win32::SerialController::HCOMDB__* HComDB, uint32_t* ComNumber) noexcept;
    int32_t __stdcall WIN32_IMPL_ComDBClaimPort(win32::Windows::Win32::SerialController::HCOMDB__* HComDB, uint32_t ComNumber, win32::Windows::Win32::SystemServices::BOOL ForceClaim, int32_t* Forced) noexcept;
    int32_t __stdcall WIN32_IMPL_ComDBReleasePort(win32::Windows::Win32::SerialController::HCOMDB__* HComDB, uint32_t ComNumber) noexcept;
    int32_t __stdcall WIN32_IMPL_ComDBResizeDatabase(win32::Windows::Win32::SerialController::HCOMDB__* HComDB, uint32_t NewSize) noexcept;
}
WIN32_IMPL_LINK(ComDBOpen, 4)
WIN32_IMPL_LINK(ComDBClose, 4)
WIN32_IMPL_LINK(ComDBGetCurrentPortUsage, 20)
WIN32_IMPL_LINK(ComDBClaimNextFreePort, 8)
WIN32_IMPL_LINK(ComDBClaimPort, 16)
WIN32_IMPL_LINK(ComDBReleasePort, 8)
WIN32_IMPL_LINK(ComDBResizeDatabase, 8)

#pragma endregion abi_methods

#endif