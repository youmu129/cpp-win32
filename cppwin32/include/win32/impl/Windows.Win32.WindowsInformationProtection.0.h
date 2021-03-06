// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsInformationProtection_0_H
#define WIN32_Windows_Win32_WindowsInformationProtection_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsInformationProtection
{
#pragma region enums
    enum class ENTERPRISE_DATA_POLICIES : int32_t
    {
        ENTERPRISE_POLICY_NONE = 0,
        ENTERPRISE_POLICY_ALLOWED = 1,
        ENTERPRISE_POLICY_ENLIGHTENED = 2,
        ENTERPRISE_POLICY_EXEMPT = 4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct FILE_UNPROTECT_OPTIONS;
    struct HTHREAD_NETWORK_CONTEXT;
    struct IProtectionPolicyManagerInterop;
    struct IProtectionPolicyManagerInterop2;
    struct IProtectionPolicyManagerInterop3;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsInformationProtection::IProtectionPolicyManagerInterop>{ 0x4652651D,0xC1FE,0x4BA1,{ 0x9F,0x0A,0xC0,0xF5,0x65,0x96,0xF7,0x21 } }; // 4652651D-C1FE-4BA1-9F0A-C0F56596F721
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsInformationProtection::IProtectionPolicyManagerInterop2>{ 0x157CFBE4,0xA78D,0x4156,{ 0xB3,0x84,0x61,0xFD,0xAC,0x41,0xE6,0x86 } }; // 157CFBE4-A78D-4156-B384-61FDAC41E686
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsInformationProtection::IProtectionPolicyManagerInterop3>{ 0xC1C03933,0xB398,0x4D93,{ 0xB0,0xFD,0x29,0x72,0xAD,0xF8,0x02,0xC2 } }; // C1C03933-B398-4D93-B0FD-2972ADF802C2
#pragma endregion guids

}
#endif
