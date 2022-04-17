// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Hid_0_H
#define WIN32_Windows_Win32_Hid_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Com
{
    struct IUnknown;
}
WIN32_EXPORT namespace win32::Windows::Win32::SystemServices
{
    struct BOOL;
}
WIN32_EXPORT namespace win32::Windows::Win32::WindowsAndMessaging
{
    struct HWND;
}
WIN32_EXPORT namespace win32::Windows::Win32::Hid
{
#pragma region enums
    enum class HIDP_KEYBOARD_DIRECTION : int32_t
    {
        HidP_Keyboard_Break = 0,
        HidP_Keyboard_Make = 1,
    };
    enum class HIDP_REPORT_TYPE : int32_t
    {
        HidP_Input = 0,
        HidP_Output = 1,
        HidP_Feature = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CPOINT;
    struct DIACTIONA;
    struct DIACTIONFORMATA;
    struct DIACTIONFORMATW;
    struct DIACTIONW;
    struct DICOLORSET;
    struct DICONDITION;
    struct DICONFIGUREDEVICESPARAMSA;
    struct DICONFIGUREDEVICESPARAMSW;
    struct DICONSTANTFORCE;
    struct DICUSTOMFORCE;
    struct DIDATAFORMAT;
    struct DIDEVCAPS;
    struct DIDEVCAPS_DX3;
    struct DIDEVICEIMAGEINFOA;
    struct DIDEVICEIMAGEINFOHEADERA;
    struct DIDEVICEIMAGEINFOHEADERW;
    struct DIDEVICEIMAGEINFOW;
    struct DIDEVICEINSTANCEA;
    struct DIDEVICEINSTANCEW;
    struct DIDEVICEINSTANCE_DX3A;
    struct DIDEVICEINSTANCE_DX3W;
    struct DIDEVICEOBJECTDATA;
    struct DIDEVICEOBJECTDATA_DX3;
    struct DIDEVICEOBJECTINSTANCEA;
    struct DIDEVICEOBJECTINSTANCEW;
    struct DIDEVICEOBJECTINSTANCE_DX3A;
    struct DIDEVICEOBJECTINSTANCE_DX3W;
    struct DIDEVICESTATE;
    struct DIDRIVERVERSIONS;
    struct DIEFFECT;
    struct DIEFFECTATTRIBUTES;
    struct DIEFFECTINFOA;
    struct DIEFFECTINFOW;
    struct DIEFFECT_DX5;
    struct DIEFFESCAPE;
    struct DIENVELOPE;
    struct DIFFDEVICEATTRIBUTES;
    struct DIFFOBJECTATTRIBUTES;
    struct DIFILEEFFECT;
    struct DIHIDFFINITINFO;
    struct DIJOYCONFIG;
    struct DIJOYCONFIG_DX5;
    struct DIJOYSTATE;
    struct DIJOYSTATE2;
    struct DIJOYTYPEINFO;
    struct DIJOYTYPEINFO_DX5;
    struct DIJOYTYPEINFO_DX6;
    struct DIJOYUSERVALUES;
    struct DIMOUSESTATE;
    struct DIMOUSESTATE2;
    struct DIOBJECTATTRIBUTES;
    struct DIOBJECTCALIBRATION;
    struct DIOBJECTDATAFORMAT;
    struct DIPERIODIC;
    struct DIPOVCALIBRATION;
    struct DIPROPCAL;
    struct DIPROPCALPOV;
    struct DIPROPCPOINTS;
    struct DIPROPDWORD;
    struct DIPROPGUIDANDPATH;
    struct DIPROPHEADER;
    struct DIPROPPOINTER;
    struct DIPROPRANGE;
    struct DIPROPSTRING;
    struct DIRAMPFORCE;
    struct HIDD_ATTRIBUTES;
    struct HIDD_CONFIGURATION;
    struct HIDP_BUTTON_CAPS;
    struct HIDP_CAPS;
    struct HIDP_DATA;
    struct HIDP_EXTENDED_ATTRIBUTES;
    struct HIDP_KEYBOARD_MODIFIER_STATE;
    struct HIDP_LINK_COLLECTION_NODE;
    struct HIDP_UNKNOWN_TOKEN;
    struct HIDP_VALUE_CAPS;
    struct INDICATOR_LIST;
    struct JOYREGHWVALUES;
    struct KEYBOARD_ATTRIBUTES;
    struct KEYBOARD_EXTENDED_ATTRIBUTES;
    struct KEYBOARD_ID;
    struct KEYBOARD_IME_STATUS;
    struct KEYBOARD_INDICATOR_PARAMETERS;
    struct KEYBOARD_INDICATOR_TRANSLATION;
    struct KEYBOARD_INPUT_DATA;
    struct KEYBOARD_TYPEMATIC_PARAMETERS;
    struct KEYBOARD_UNIT_ID_PARAMETER;
    struct MOUSE_ATTRIBUTES;
    struct MOUSE_INPUT_DATA;
    struct MOUSE_UNIT_ID_PARAMETER;
    struct USAGE_AND_PAGE;
    struct _HIDP_PREPARSED_DATA;
    struct IDirectInput2A;
    struct IDirectInput2W;
    struct IDirectInput7A;
    struct IDirectInput7W;
    struct IDirectInput8A;
    struct IDirectInput8W;
    struct IDirectInputA;
    struct IDirectInputDevice2A;
    struct IDirectInputDevice2W;
    struct IDirectInputDevice7A;
    struct IDirectInputDevice7W;
    struct IDirectInputDevice8A;
    struct IDirectInputDevice8W;
    struct IDirectInputDeviceA;
    struct IDirectInputDeviceW;
    struct IDirectInputEffect;
    struct IDirectInputEffectDriver;
    struct IDirectInputJoyConfig;
    struct IDirectInputJoyConfig8;
    struct IDirectInputW;
#pragma endregion forward_declarations

#pragma region delegates
    using LPDIENUMEFFECTSINFILECALLBACK = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIFILEEFFECT*, void*);
    using LPDIENUMDEVICEOBJECTSCALLBACKA = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIDEVICEOBJECTINSTANCEA*, void*);
    using LPDIENUMDEVICEOBJECTSCALLBACKW = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIDEVICEOBJECTINSTANCEW*, void*);
    using LPDIENUMEFFECTSCALLBACKA = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIEFFECTINFOA*, void*);
    using LPDIENUMEFFECTSCALLBACKW = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIEFFECTINFOW*, void*);
    using LPDIENUMCREATEDEFFECTOBJECTSCALLBACK = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::IDirectInputEffect*, void*);
    using LPDIENUMDEVICESCALLBACKA = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIDEVICEINSTANCEA*, void*);
    using LPDIENUMDEVICESCALLBACKW = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIDEVICEINSTANCEW*, void*);
    using LPDICONFIGUREDEVICESCALLBACK = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Com::IUnknown*, void*);
    using LPDIENUMDEVICESBYSEMANTICSCBA = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIDEVICEINSTANCEA*, Windows::Win32::Hid::IDirectInputDevice8A*, uint32_t, uint32_t, void*);
    using LPDIENUMDEVICESBYSEMANTICSCBW = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Hid::DIDEVICEINSTANCEW*, Windows::Win32::Hid::IDirectInputDevice8W*, uint32_t, uint32_t, void*);
    using LPFNSHOWJOYCPL = void __stdcall(Windows::Win32::WindowsAndMessaging::HWND);
    using LPDIJOYTYPECALLBACK = Windows::Win32::SystemServices::BOOL __stdcall(uint16_t*, void*);
    using PHIDP_INSERT_SCANCODES = uint8_t __stdcall(void*, int8_t*, uint32_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif