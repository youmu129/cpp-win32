// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkDiagnosticsFramework_0_H
#define WIN32_Windows_Win32_NetworkDiagnosticsFramework_0_H
WIN32_EXPORT namespace win32::Windows::Win32::NetworkDiagnosticsFramework
{
#pragma region enums
    enum class ATTRIBUTE_TYPE : int32_t
    {
        AT_INVALID = 0,
        AT_BOOLEAN = 1,
        AT_INT8 = 2,
        AT_UINT8 = 3,
        AT_INT16 = 4,
        AT_UINT16 = 5,
        AT_INT32 = 6,
        AT_UINT32 = 7,
        AT_INT64 = 8,
        AT_UINT64 = 9,
        AT_STRING = 10,
        AT_GUID = 11,
        AT_LIFE_TIME = 12,
        AT_SOCKADDR = 13,
        AT_OCTET_STRING = 14,
    };
    enum class DIAGNOSIS_STATUS : int32_t
    {
        DS_NOT_IMPLEMENTED = 0,
        DS_CONFIRMED = 1,
        DS_REJECTED = 2,
        DS_INDETERMINATE = 3,
        DS_DEFERRED = 4,
        DS_PASSTHROUGH = 5,
    };
    enum class PROBLEM_TYPE : int32_t
    {
        PT_INVALID = 0,
        PT_LOW_HEALTH = 1,
        PT_LOWER_HEALTH = 2,
        PT_DOWN_STREAM_HEALTH = 4,
        PT_HIGH_UTILIZATION = 8,
        PT_HIGHER_UTILIZATION = 16,
        PT_UP_STREAM_UTILIZATION = 32,
    };
    enum class REPAIR_RISK : int32_t
    {
        RR_NOROLLBACK = 0,
        RR_ROLLBACK = 1,
        RR_NORISK = 2,
    };
    enum class REPAIR_SCOPE : int32_t
    {
        RS_SYSTEM = 0,
        RS_USER = 1,
        RS_APPLICATION = 2,
        RS_PROCESS = 3,
    };
    enum class REPAIR_STATUS : int32_t
    {
        RS_NOT_IMPLEMENTED = 0,
        RS_REPAIRED = 1,
        RS_UNREPAIRED = 2,
        RS_DEFERRED = 3,
        RS_USER_ACTION = 4,
    };
    enum class UI_INFO_TYPE : int32_t
    {
        UIT_INVALID = 0,
        UIT_NONE = 1,
        UIT_SHELL_COMMAND = 2,
        UIT_HELP_PANE = 3,
        UIT_DUI = 4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct DIAG_SOCKADDR;
    struct DiagnosticsInfo;
    struct HELPER_ATTRIBUTE;
    struct HYPOTHESIS;
    struct HelperAttributeInfo;
    struct HypothesisResult;
    struct LIFE_TIME;
    struct OCTET_STRING;
    struct RepairInfo;
    struct RepairInfoEx;
    struct RootCauseInfo;
    struct ShellCommandInfo;
    struct UiInfo;
    struct INetDiagExtensibleHelper;
    struct INetDiagHelper;
    struct INetDiagHelperEx;
    struct INetDiagHelperInfo;
    struct INetDiagHelperUtilFactory;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::NetworkDiagnosticsFramework::INetDiagExtensibleHelper>{ 0xC0B35748,0xEBF5,0x11D8,{ 0xBB,0xE9,0x50,0x50,0x54,0x50,0x30,0x30 } }; // C0B35748-EBF5-11D8-BBE9-505054503030
    template <> inline constexpr guid guid_v<Windows::Win32::NetworkDiagnosticsFramework::INetDiagHelper>{ 0xC0B35746,0xEBF5,0x11D8,{ 0xBB,0xE9,0x50,0x50,0x54,0x50,0x30,0x30 } }; // C0B35746-EBF5-11D8-BBE9-505054503030
    template <> inline constexpr guid guid_v<Windows::Win32::NetworkDiagnosticsFramework::INetDiagHelperEx>{ 0x972DAB4D,0xE4E3,0x4FC6,{ 0xAE,0x54,0x5F,0x65,0xCC,0xDE,0x4A,0x15 } }; // 972DAB4D-E4E3-4FC6-AE54-5F65CCDE4A15
    template <> inline constexpr guid guid_v<Windows::Win32::NetworkDiagnosticsFramework::INetDiagHelperInfo>{ 0xC0B35747,0xEBF5,0x11D8,{ 0xBB,0xE9,0x50,0x50,0x54,0x50,0x30,0x30 } }; // C0B35747-EBF5-11D8-BBE9-505054503030
    template <> inline constexpr guid guid_v<Windows::Win32::NetworkDiagnosticsFramework::INetDiagHelperUtilFactory>{ 0x104613FB,0xBC57,0x4178,{ 0x95,0xBA,0x88,0x80,0x96,0x98,0x35,0x4A } }; // 104613FB-BC57-4178-95BA-88809698354A
#pragma endregion guids

}
#endif