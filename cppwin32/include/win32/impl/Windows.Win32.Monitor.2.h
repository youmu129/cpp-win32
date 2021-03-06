// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Monitor_2_H
#define WIN32_Windows_Win32_Monitor_2_H
#include "win32/impl/Windows.Win32.Monitor.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_GetNumberOfPhysicalMonitorsFromHMONITOR(intptr_t hMonitor, uint32_t* pdwNumberOfPhysicalMonitors) noexcept;
    int32_t __stdcall WIN32_IMPL_GetNumberOfPhysicalMonitorsFromIDirect3DDevice9(win32::Windows::Win32::Direct2D::IDirect3DDevice9* pDirect3DDevice9, uint32_t* pdwNumberOfPhysicalMonitors) noexcept;
    int32_t __stdcall WIN32_IMPL_GetPhysicalMonitorsFromHMONITOR(intptr_t hMonitor, uint32_t dwPhysicalMonitorArraySize, win32::Windows::Win32::Monitor::PHYSICAL_MONITOR* pPhysicalMonitorArray) noexcept;
    int32_t __stdcall WIN32_IMPL_GetPhysicalMonitorsFromIDirect3DDevice9(win32::Windows::Win32::Direct2D::IDirect3DDevice9* pDirect3DDevice9, uint32_t dwPhysicalMonitorArraySize, win32::Windows::Win32::Monitor::PHYSICAL_MONITOR* pPhysicalMonitorArray) noexcept;
    int32_t __stdcall WIN32_IMPL_DestroyPhysicalMonitor(win32::Windows::Win32::SystemServices::HANDLE hMonitor) noexcept;
    int32_t __stdcall WIN32_IMPL_DestroyPhysicalMonitors(uint32_t dwPhysicalMonitorArraySize, win32::Windows::Win32::Monitor::PHYSICAL_MONITOR* pPhysicalMonitorArray) noexcept;
    int32_t __stdcall WIN32_IMPL_GetVCPFeatureAndVCPFeatureReply(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint8_t bVCPCode, win32::Windows::Win32::Monitor::MC_VCP_CODE_TYPE* pvct, uint32_t* pdwCurrentValue, uint32_t* pdwMaximumValue) noexcept;
    int32_t __stdcall WIN32_IMPL_SetVCPFeature(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint8_t bVCPCode, uint32_t dwNewValue) noexcept;
    int32_t __stdcall WIN32_IMPL_SaveCurrentSettings(win32::Windows::Win32::SystemServices::HANDLE hMonitor) noexcept;
    int32_t __stdcall WIN32_IMPL_GetCapabilitiesStringLength(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint32_t* pdwCapabilitiesStringLengthInCharacters) noexcept;
    int32_t __stdcall WIN32_IMPL_CapabilitiesRequestAndCapabilitiesReply(win32::Windows::Win32::SystemServices::HANDLE hMonitor, int8_t* pszASCIICapabilitiesString, uint32_t dwCapabilitiesStringLengthInCharacters) noexcept;
    int32_t __stdcall WIN32_IMPL_GetTimingReport(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_TIMING_REPORT* pmtrMonitorTimingReport) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorCapabilities(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint32_t* pdwMonitorCapabilities, uint32_t* pdwSupportedColorTemperatures) noexcept;
    int32_t __stdcall WIN32_IMPL_SaveCurrentMonitorSettings(win32::Windows::Win32::SystemServices::HANDLE hMonitor) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorTechnologyType(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_DISPLAY_TECHNOLOGY_TYPE* pdtyDisplayTechnologyType) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorBrightness(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint32_t* pdwMinimumBrightness, uint32_t* pdwCurrentBrightness, uint32_t* pdwMaximumBrightness) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorContrast(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint32_t* pdwMinimumContrast, uint32_t* pdwCurrentContrast, uint32_t* pdwMaximumContrast) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorColorTemperature(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_COLOR_TEMPERATURE* pctCurrentColorTemperature) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorRedGreenOrBlueDrive(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_DRIVE_TYPE dtDriveType, uint32_t* pdwMinimumDrive, uint32_t* pdwCurrentDrive, uint32_t* pdwMaximumDrive) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorRedGreenOrBlueGain(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_GAIN_TYPE gtGainType, uint32_t* pdwMinimumGain, uint32_t* pdwCurrentGain, uint32_t* pdwMaximumGain) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorBrightness(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint32_t dwNewBrightness) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorContrast(win32::Windows::Win32::SystemServices::HANDLE hMonitor, uint32_t dwNewContrast) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorColorTemperature(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_COLOR_TEMPERATURE ctCurrentColorTemperature) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorRedGreenOrBlueDrive(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_DRIVE_TYPE dtDriveType, uint32_t dwNewDrive) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorRedGreenOrBlueGain(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_GAIN_TYPE gtGainType, uint32_t dwNewGain) noexcept;
    int32_t __stdcall WIN32_IMPL_DegaussMonitor(win32::Windows::Win32::SystemServices::HANDLE hMonitor) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorDisplayAreaSize(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_SIZE_TYPE stSizeType, uint32_t* pdwMinimumWidthOrHeight, uint32_t* pdwCurrentWidthOrHeight, uint32_t* pdwMaximumWidthOrHeight) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMonitorDisplayAreaPosition(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_POSITION_TYPE ptPositionType, uint32_t* pdwMinimumPosition, uint32_t* pdwCurrentPosition, uint32_t* pdwMaximumPosition) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorDisplayAreaSize(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_SIZE_TYPE stSizeType, uint32_t dwNewDisplayAreaWidthOrHeight) noexcept;
    int32_t __stdcall WIN32_IMPL_SetMonitorDisplayAreaPosition(win32::Windows::Win32::SystemServices::HANDLE hMonitor, win32::Windows::Win32::Monitor::MC_POSITION_TYPE ptPositionType, uint32_t dwNewPosition) noexcept;
    int32_t __stdcall WIN32_IMPL_RestoreMonitorFactoryColorDefaults(win32::Windows::Win32::SystemServices::HANDLE hMonitor) noexcept;
    int32_t __stdcall WIN32_IMPL_RestoreMonitorFactoryDefaults(win32::Windows::Win32::SystemServices::HANDLE hMonitor) noexcept;
}
WIN32_IMPL_LINK(GetNumberOfPhysicalMonitorsFromHMONITOR, 8)
WIN32_IMPL_LINK(GetNumberOfPhysicalMonitorsFromIDirect3DDevice9, 8)
WIN32_IMPL_LINK(GetPhysicalMonitorsFromHMONITOR, 12)
WIN32_IMPL_LINK(GetPhysicalMonitorsFromIDirect3DDevice9, 12)
WIN32_IMPL_LINK(DestroyPhysicalMonitor, 4)
WIN32_IMPL_LINK(DestroyPhysicalMonitors, 8)
WIN32_IMPL_LINK(GetVCPFeatureAndVCPFeatureReply, 20)
WIN32_IMPL_LINK(SetVCPFeature, 12)
WIN32_IMPL_LINK(SaveCurrentSettings, 4)
WIN32_IMPL_LINK(GetCapabilitiesStringLength, 8)
WIN32_IMPL_LINK(CapabilitiesRequestAndCapabilitiesReply, 12)
WIN32_IMPL_LINK(GetTimingReport, 8)
WIN32_IMPL_LINK(GetMonitorCapabilities, 12)
WIN32_IMPL_LINK(SaveCurrentMonitorSettings, 4)
WIN32_IMPL_LINK(GetMonitorTechnologyType, 8)
WIN32_IMPL_LINK(GetMonitorBrightness, 16)
WIN32_IMPL_LINK(GetMonitorContrast, 16)
WIN32_IMPL_LINK(GetMonitorColorTemperature, 8)
WIN32_IMPL_LINK(GetMonitorRedGreenOrBlueDrive, 20)
WIN32_IMPL_LINK(GetMonitorRedGreenOrBlueGain, 20)
WIN32_IMPL_LINK(SetMonitorBrightness, 8)
WIN32_IMPL_LINK(SetMonitorContrast, 8)
WIN32_IMPL_LINK(SetMonitorColorTemperature, 8)
WIN32_IMPL_LINK(SetMonitorRedGreenOrBlueDrive, 12)
WIN32_IMPL_LINK(SetMonitorRedGreenOrBlueGain, 12)
WIN32_IMPL_LINK(DegaussMonitor, 4)
WIN32_IMPL_LINK(GetMonitorDisplayAreaSize, 20)
WIN32_IMPL_LINK(GetMonitorDisplayAreaPosition, 20)
WIN32_IMPL_LINK(SetMonitorDisplayAreaSize, 12)
WIN32_IMPL_LINK(SetMonitorDisplayAreaPosition, 12)
WIN32_IMPL_LINK(RestoreMonitorFactoryColorDefaults, 4)
WIN32_IMPL_LINK(RestoreMonitorFactoryDefaults, 4)

#pragma endregion abi_methods

#endif
