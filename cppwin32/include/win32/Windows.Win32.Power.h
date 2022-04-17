// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Power_H
#define WIN32_Windows_Win32_Power_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Power.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Power
{
#pragma region methods
    inline uint32_t PowerWriteACValueIndex(Windows::Win32::WindowsProgramming::HKEY RootPowerKey, ::win32::guid* SchemeGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t AcValueIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerWriteACValueIndex(RootPowerKey, SchemeGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, AcValueIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerWriteDCValueIndex(Windows::Win32::WindowsProgramming::HKEY RootPowerKey, ::win32::guid* SchemeGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t DcValueIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerWriteDCValueIndex(RootPowerKey, SchemeGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, DcValueIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerReadACValueIndex(Windows::Win32::WindowsProgramming::HKEY RootPowerKey, ::win32::guid* SchemeGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t* AcValueIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerReadACValueIndex(RootPowerKey, SchemeGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, AcValueIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerReadDCValueIndex(Windows::Win32::WindowsProgramming::HKEY RootPowerKey, ::win32::guid* SchemeGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t* DcValueIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerReadDCValueIndex(RootPowerKey, SchemeGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, DcValueIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerReadACDefaultIndex(Windows::Win32::WindowsProgramming::HKEY RootPowerKey, ::win32::guid* SchemePersonalityGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t* AcDefaultIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerReadACDefaultIndex(RootPowerKey, SchemePersonalityGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, AcDefaultIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerReadDCDefaultIndex(Windows::Win32::WindowsProgramming::HKEY RootPowerKey, ::win32::guid* SchemePersonalityGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t* DcDefaultIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerReadDCDefaultIndex(RootPowerKey, SchemePersonalityGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, DcDefaultIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerWriteACDefaultIndex(Windows::Win32::WindowsProgramming::HKEY RootSystemPowerKey, ::win32::guid* SchemePersonalityGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t DefaultAcIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerWriteACDefaultIndex(RootSystemPowerKey, SchemePersonalityGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, DefaultAcIndex);
        return win32_impl_result;
    }
    inline uint32_t PowerWriteDCDefaultIndex(Windows::Win32::WindowsProgramming::HKEY RootSystemPowerKey, ::win32::guid* SchemePersonalityGuid, ::win32::guid* SubGroupOfPowerSettingsGuid, ::win32::guid* PowerSettingGuid, uint32_t DefaultDcIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PowerWriteDCDefaultIndex(RootSystemPowerKey, SchemePersonalityGuid, SubGroupOfPowerSettingsGuid, PowerSettingGuid, DefaultDcIndex);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif