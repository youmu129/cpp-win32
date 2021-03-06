// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsDeploymentServices_0_H
#define WIN32_Windows_Win32_WindowsDeploymentServices_0_H
WIN32_EXPORT namespace win32::Windows::Win32::SystemServices
{
    struct HANDLE;
    union ULARGE_INTEGER;
}
WIN32_EXPORT namespace win32::Windows::Win32::WindowsAndMessaging
{
    struct LPARAM;
    struct WPARAM;
}
WIN32_EXPORT namespace win32::Windows::Win32::WindowsDeploymentServices
{
#pragma region enums
    enum class TRANSPORTCLIENT_CALLBACK_ID : int32_t
    {
        WDS_TRANSPORTCLIENT_SESSION_START = 0,
        WDS_TRANSPORTCLIENT_RECEIVE_CONTENTS = 1,
        WDS_TRANSPORTCLIENT_SESSION_COMPLETE = 2,
        WDS_TRANSPORTCLIENT_RECEIVE_METADATA = 3,
        WDS_TRANSPORTCLIENT_SESSION_STARTEX = 4,
        WDS_TRANSPORTCLIENT_SESSION_NEGOTIATE = 5,
        WDS_TRANSPORTCLIENT_MAX_CALLBACKS = 6,
    };
    enum class TRANSPORTPROVIDER_CALLBACK_ID : int32_t
    {
        WDS_TRANSPORTPROVIDER_CREATE_INSTANCE = 0,
        WDS_TRANSPORTPROVIDER_COMPARE_CONTENT = 1,
        WDS_TRANSPORTPROVIDER_OPEN_CONTENT = 2,
        WDS_TRANSPORTPROVIDER_USER_ACCESS_CHECK = 3,
        WDS_TRANSPORTPROVIDER_GET_CONTENT_SIZE = 4,
        WDS_TRANSPORTPROVIDER_READ_CONTENT = 5,
        WDS_TRANSPORTPROVIDER_CLOSE_CONTENT = 6,
        WDS_TRANSPORTPROVIDER_CLOSE_INSTANCE = 7,
        WDS_TRANSPORTPROVIDER_SHUTDOWN = 8,
        WDS_TRANSPORTPROVIDER_DUMP_STATE = 9,
        WDS_TRANSPORTPROVIDER_REFRESH_SETTINGS = 10,
        WDS_TRANSPORTPROVIDER_GET_CONTENT_METADATA = 11,
        WDS_TRANSPORTPROVIDER_MAX_CALLBACKS = 12,
    };
    enum class WDSTRANSPORT_DIAGNOSTICS_COMPONENT_FLAGS : int32_t
    {
        WdsTptDiagnosticsComponentPxe = 1,
        WdsTptDiagnosticsComponentTftp = 2,
        WdsTptDiagnosticsComponentImageServer = 4,
        WdsTptDiagnosticsComponentMulticast = 8,
    };
    enum class WDSTRANSPORT_DISCONNECT_TYPE : int32_t
    {
        WdsTptDisconnectUnknown = 0,
        WdsTptDisconnectFallback = 1,
        WdsTptDisconnectAbort = 2,
    };
    enum class WDSTRANSPORT_FEATURE_FLAGS : int32_t
    {
        WdsTptFeatureAdminPack = 1,
        WdsTptFeatureTransportServer = 2,
        WdsTptFeatureDeploymentServer = 4,
    };
    enum class WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE : int32_t
    {
        WdsTptIpAddressSourceUnknown = 0,
        WdsTptIpAddressSourceDhcp = 1,
        WdsTptIpAddressSourceRange = 2,
    };
    enum class WDSTRANSPORT_IP_ADDRESS_TYPE : int32_t
    {
        WdsTptIpAddressUnknown = 0,
        WdsTptIpAddressIpv4 = 1,
        WdsTptIpAddressIpv6 = 2,
    };
    enum class WDSTRANSPORT_NAMESPACE_TYPE : int32_t
    {
        WdsTptNamespaceTypeUnknown = 0,
        WdsTptNamespaceTypeAutoCast = 1,
        WdsTptNamespaceTypeScheduledCastManualStart = 2,
        WdsTptNamespaceTypeScheduledCastAutoStart = 3,
    };
    enum class WDSTRANSPORT_NETWORK_PROFILE_TYPE : int32_t
    {
        WdsTptNetworkProfileUnknown = 0,
        WdsTptNetworkProfileCustom = 1,
        WdsTptNetworkProfile10Mbps = 2,
        WdsTptNetworkProfile100Mbps = 3,
        WdsTptNetworkProfile1Gbps = 4,
    };
    enum class WDSTRANSPORT_PROTOCOL_FLAGS : int32_t
    {
        WdsTptProtocolUnicast = 1,
        WdsTptProtocolMulticast = 2,
    };
    enum class WDSTRANSPORT_SERVICE_NOTIFICATION : int32_t
    {
        WdsTptServiceNotifyUnknown = 0,
        WdsTptServiceNotifyReadSettings = 1,
    };
    enum class WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE : int32_t
    {
        WdsTptSlowClientHandlingUnknown = 0,
        WdsTptSlowClientHandlingNone = 1,
        WdsTptSlowClientHandlingAutoDisconnect = 2,
        WdsTptSlowClientHandlingMultistream = 3,
    };
    enum class WDSTRANSPORT_TFTP_CAPABILITY : int32_t
    {
        WdsTptTftpCapMaximumBlockSize = 1,
        WdsTptTftpCapVariableWindow = 2,
    };
    enum class WDSTRANSPORT_UDP_PORT_POLICY : int32_t
    {
        WdsTptUdpPortPolicyDynamic = 0,
        WdsTptUdpPortPolicyFixed = 1,
    };
    enum class WDS_CLI_FIRMWARE_TYPE : int32_t
    {
        WDS_CLI_FIRMWARE_UNKNOWN = 0,
        WDS_CLI_FIRMWARE_BIOS = 1,
        WDS_CLI_FIRMWARE_EFI = 2,
    };
    enum class WDS_CLI_IMAGE_PARAM_TYPE : int32_t
    {
        WDS_CLI_IMAGE_PARAM_UNKNOWN = 0,
        WDS_CLI_IMAGE_PARAM_SPARSE_FILE = 1,
        WDS_CLI_IMAGE_PARAM_SUPPORTED_FIRMWARES = 2,
    };
    enum class WDS_CLI_IMAGE_TYPE : int32_t
    {
        WDS_CLI_IMAGE_TYPE_UNKNOWN = 0,
        WDS_CLI_IMAGE_TYPE_WIM = 1,
        WDS_CLI_IMAGE_TYPE_VHD = 2,
        WDS_CLI_IMAGE_TYPE_VHDX = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct PXE_ADDRESS;
    struct PXE_DHCPV6_MESSAGE;
    struct PXE_DHCPV6_MESSAGE_HEADER;
    struct PXE_DHCPV6_NESTED_RELAY_MESSAGE;
    struct PXE_DHCPV6_OPTION;
    struct PXE_DHCPV6_RELAY_MESSAGE;
    struct PXE_DHCP_MESSAGE;
    struct PXE_DHCP_OPTION;
    struct PXE_PROVIDER;
    struct TRANSPORTCLIENT_SESSION_INFO;
    struct WDS_CLI_CRED;
    struct WDS_TRANSPORTCLIENT_CALLBACKS;
    struct WDS_TRANSPORTCLIENT_REQUEST;
    struct WDS_TRANSPORTPROVIDER_INIT_PARAMS;
    struct WDS_TRANSPORTPROVIDER_SETTINGS;
    struct IWdsTransportCacheable;
    struct IWdsTransportClient;
    struct IWdsTransportCollection;
    struct IWdsTransportConfigurationManager;
    struct IWdsTransportConfigurationManager2;
    struct IWdsTransportContent;
    struct IWdsTransportContentProvider;
    struct IWdsTransportDiagnosticsPolicy;
    struct IWdsTransportManager;
    struct IWdsTransportMulticastSessionPolicy;
    struct IWdsTransportNamespace;
    struct IWdsTransportNamespaceAutoCast;
    struct IWdsTransportNamespaceManager;
    struct IWdsTransportNamespaceScheduledCast;
    struct IWdsTransportNamespaceScheduledCastAutoStart;
    struct IWdsTransportNamespaceScheduledCastManualStart;
    struct IWdsTransportServer;
    struct IWdsTransportServer2;
    struct IWdsTransportServicePolicy;
    struct IWdsTransportServicePolicy2;
    struct IWdsTransportSession;
    struct IWdsTransportSetupManager;
    struct IWdsTransportSetupManager2;
    struct IWdsTransportTftpClient;
    struct IWdsTransportTftpManager;
    struct WdsTransportCacheable;
    struct WdsTransportClient;
    struct WdsTransportCollection;
    struct WdsTransportConfigurationManager;
    struct WdsTransportContent;
    struct WdsTransportContentProvider;
    struct WdsTransportDiagnosticsPolicy;
    struct WdsTransportManager;
    struct WdsTransportMulticastSessionPolicy;
    struct WdsTransportNamespace;
    struct WdsTransportNamespaceAutoCast;
    struct WdsTransportNamespaceManager;
    struct WdsTransportNamespaceScheduledCast;
    struct WdsTransportNamespaceScheduledCastAutoStart;
    struct WdsTransportNamespaceScheduledCastManualStart;
    struct WdsTransportServer;
    struct WdsTransportServicePolicy;
    struct WdsTransportSession;
    struct WdsTransportSetupManager;
    struct WdsTransportTftpClient;
    struct WdsTransportTftpManager;
#pragma endregion forward_declarations

#pragma region delegates
    using PFN_WdsCliTraceFunction = void __stdcall(uint16_t*, int8_t*);
    using PFN_WdsCliCallback = void __stdcall(uint32_t, Windows::Win32::WindowsAndMessaging::WPARAM, Windows::Win32::WindowsAndMessaging::LPARAM, void*);
    using PFN_WdsTransportClientSessionStart = void __stdcall(Windows::Win32::SystemServices::HANDLE, void*, Windows::Win32::SystemServices::ULARGE_INTEGER*);
    using PFN_WdsTransportClientSessionStartEx = void __stdcall(Windows::Win32::SystemServices::HANDLE, void*, Windows::Win32::WindowsDeploymentServices::TRANSPORTCLIENT_SESSION_INFO*);
    using PFN_WdsTransportClientReceiveMetadata = void __stdcall(Windows::Win32::SystemServices::HANDLE, void*, void*, uint32_t);
    using PFN_WdsTransportClientReceiveContents = void __stdcall(Windows::Win32::SystemServices::HANDLE, void*, void*, uint32_t, Windows::Win32::SystemServices::ULARGE_INTEGER*);
    using PFN_WdsTransportClientSessionComplete = void __stdcall(Windows::Win32::SystemServices::HANDLE, void*, uint32_t);
    using PFN_WdsTransportClientSessionNegotiate = void __stdcall(Windows::Win32::SystemServices::HANDLE, void*, Windows::Win32::WindowsDeploymentServices::TRANSPORTCLIENT_SESSION_INFO*, Windows::Win32::SystemServices::HANDLE);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportCacheable>{ 0x46AD894B,0x0BAB,0x47DC,{ 0x84,0xB2,0x7B,0x55,0x3F,0x1D,0x8F,0x80 } }; // 46AD894B-0BAB-47DC-84B2-7B553F1D8F80
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportClient>{ 0xB5DBC93A,0xCABE,0x46CA,{ 0x83,0x7F,0x3E,0x44,0xE9,0x3C,0x65,0x45 } }; // B5DBC93A-CABE-46CA-837F-3E44E93C6545
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportCollection>{ 0xB8BA4B1A,0x2FF4,0x43AB,{ 0x99,0x6C,0xB2,0xB1,0x0A,0x91,0xA6,0xEB } }; // B8BA4B1A-2FF4-43AB-996C-B2B10A91A6EB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportConfigurationManager>{ 0x84CC4779,0x42DD,0x4792,{ 0x89,0x1E,0x13,0x21,0xD6,0xD7,0x4B,0x44 } }; // 84CC4779-42DD-4792-891E-1321D6D74B44
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportConfigurationManager2>{ 0xD0D85CAF,0xA153,0x4F1D,{ 0xA9,0xDD,0x96,0xF4,0x31,0xC5,0x07,0x17 } }; // D0D85CAF-A153-4F1D-A9DD-96F431C50717
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportContent>{ 0xD405D711,0x0296,0x4AB4,{ 0xA8,0x60,0xAC,0x7D,0x32,0xE6,0x57,0x98 } }; // D405D711-0296-4AB4-A860-AC7D32E65798
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportContentProvider>{ 0xB9489F24,0xF219,0x4ACF,{ 0xAA,0xD7,0x26,0x5C,0x7C,0x08,0xA6,0xAE } }; // B9489F24-F219-4ACF-AAD7-265C7C08A6AE
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportDiagnosticsPolicy>{ 0x13B33EFC,0x7856,0x4F61,{ 0x9A,0x59,0x8D,0xE6,0x7B,0x6B,0x87,0xB6 } }; // 13B33EFC-7856-4F61-9A59-8DE67B6B87B6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportManager>{ 0x5B0D35F5,0x1B13,0x4AFD,{ 0xB8,0x78,0x65,0x26,0xDC,0x34,0x0B,0x5D } }; // 5B0D35F5-1B13-4AFD-B878-6526DC340B5D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportMulticastSessionPolicy>{ 0x4E5753CF,0x68EC,0x4504,{ 0xA9,0x51,0x4A,0x00,0x32,0x66,0x60,0x6B } }; // 4E5753CF-68EC-4504-A951-4A003266606B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportNamespace>{ 0xFA561F57,0xFBEF,0x4ED3,{ 0xB0,0x56,0x12,0x7C,0xB1,0xB3,0x3B,0x84 } }; // FA561F57-FBEF-4ED3-B056-127CB1B33B84
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportNamespaceAutoCast>{ 0xAD931A72,0xC4BD,0x4C41,{ 0x8F,0xBC,0x59,0xC9,0xC7,0x48,0xDF,0x9E } }; // AD931A72-C4BD-4C41-8FBC-59C9C748DF9E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportNamespaceManager>{ 0x3E22D9F6,0x3777,0x4D98,{ 0x83,0xE1,0xF9,0x86,0x96,0x71,0x7B,0xA3 } }; // 3E22D9F6-3777-4D98-83E1-F98696717BA3
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportNamespaceScheduledCast>{ 0x3840CECF,0xD76C,0x416E,{ 0xA4,0xCC,0x31,0xC7,0x41,0xD2,0x87,0x4B } }; // 3840CECF-D76C-416E-A4CC-31C741D2874B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportNamespaceScheduledCastAutoStart>{ 0xD606AF3D,0xEA9C,0x4219,{ 0x96,0x1E,0x74,0x91,0xD6,0x18,0xD9,0xB9 } }; // D606AF3D-EA9C-4219-961E-7491D618D9B9
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportNamespaceScheduledCastManualStart>{ 0x013E6E4C,0xE6A7,0x4FB5,{ 0xB7,0xFF,0xD9,0xF5,0xDA,0x80,0x5C,0x31 } }; // 013E6E4C-E6A7-4FB5-B7FF-D9F5DA805C31
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportServer>{ 0x09CCD093,0x830D,0x4344,{ 0xA3,0x0A,0x73,0xAE,0x8E,0x8F,0xCA,0x90 } }; // 09CCD093-830D-4344-A30A-73AE8E8FCA90
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportServer2>{ 0x256E999F,0x6DF4,0x4538,{ 0x81,0xB9,0x85,0x7B,0x9A,0xB8,0xFB,0x47 } }; // 256E999F-6DF4-4538-81B9-857B9AB8FB47
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportServicePolicy>{ 0xB9468578,0x9F2B,0x48CC,{ 0xB2,0x7A,0xA6,0x07,0x99,0xC2,0x75,0x0C } }; // B9468578-9F2B-48CC-B27A-A60799C2750C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportServicePolicy2>{ 0x65C19E5C,0xAA7E,0x4B91,{ 0x89,0x44,0x91,0xE0,0xE5,0x57,0x27,0x97 } }; // 65C19E5C-AA7E-4B91-8944-91E0E5572797
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportSession>{ 0xF4EFEA88,0x65B1,0x4F30,{ 0xA4,0xB9,0x27,0x93,0x98,0x77,0x96,0xFB } }; // F4EFEA88-65B1-4F30-A4B9-2793987796FB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportSetupManager>{ 0xF7238425,0xEFA8,0x40A4,{ 0xAE,0xF9,0xC9,0x8D,0x96,0x9C,0x0B,0x75 } }; // F7238425-EFA8-40A4-AEF9-C98D969C0B75
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportSetupManager2>{ 0x02BE79DA,0x7E9E,0x4366,{ 0x8B,0x6E,0x2A,0xA9,0xA9,0x1B,0xE4,0x7F } }; // 02BE79DA-7E9E-4366-8B6E-2AA9A91BE47F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportTftpClient>{ 0xB022D3AE,0x884D,0x4D85,{ 0xB1,0x46,0x53,0x32,0x0E,0x76,0xEF,0x62 } }; // B022D3AE-884D-4D85-B146-53320E76EF62
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::IWdsTransportTftpManager>{ 0x1327A7C8,0xAE8A,0x4FB3,{ 0x81,0x50,0x13,0x62,0x27,0xC3,0x7E,0x9A } }; // 1327A7C8-AE8A-4FB3-8150-136227C37E9A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportCacheable>{ 0x70590B16,0xF146,0x46BD,{ 0xBD,0x9D,0x4A,0xAA,0x90,0x08,0x4B,0xF5 } }; // 70590B16-F146-46BD-BD9D-4AAA90084BF5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportClient>{ 0x66D2C5E9,0x0FF6,0x49EC,{ 0x97,0x33,0xDA,0xFB,0x1E,0x01,0xDF,0x1C } }; // 66D2C5E9-0FF6-49EC-9733-DAFB1E01DF1C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportCollection>{ 0xC7F18B09,0x391E,0x436E,{ 0xB1,0x0B,0xC3,0xEF,0x46,0xF2,0xC3,0x4F } }; // C7F18B09-391E-436E-B10B-C3EF46F2C34F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportConfigurationManager>{ 0x8743F674,0x904C,0x47CA,{ 0x85,0x12,0x35,0xFE,0x98,0xF6,0xB0,0xAC } }; // 8743F674-904C-47CA-8512-35FE98F6B0AC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportContent>{ 0x0A891FE7,0x4A3F,0x4C65,{ 0xB6,0xF2,0x14,0x67,0x61,0x96,0x79,0xEA } }; // 0A891FE7-4A3F-4C65-B6F2-1467619679EA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportContentProvider>{ 0xE0BE741F,0x5A75,0x4EB9,{ 0x8A,0x2D,0x5E,0x18,0x9B,0x45,0xF3,0x27 } }; // E0BE741F-5A75-4EB9-8A2D-5E189B45F327
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportDiagnosticsPolicy>{ 0xEB3333E1,0xA7AD,0x46F5,{ 0x80,0xD6,0x6B,0x74,0x02,0x04,0xE5,0x09 } }; // EB3333E1-A7AD-46F5-80D6-6B740204E509
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportManager>{ 0xF21523F6,0x837C,0x4A58,{ 0xAF,0x99,0x8A,0x7E,0x27,0xF8,0xFF,0x59 } }; // F21523F6-837C-4A58-AF99-8A7E27F8FF59
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportMulticastSessionPolicy>{ 0x3C6BC3F4,0x6418,0x472A,{ 0xB6,0xF1,0x52,0xD4,0x57,0x19,0x54,0x37 } }; // 3C6BC3F4-6418-472A-B6F1-52D457195437
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportNamespace>{ 0xD8385768,0x0732,0x4EC1,{ 0x95,0xEA,0x16,0xDA,0x58,0x19,0x08,0xA1 } }; // D8385768-0732-4EC1-95EA-16DA581908A1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportNamespaceAutoCast>{ 0xB091F5A8,0x6A99,0x478D,{ 0xB2,0x3B,0x09,0xE8,0xFE,0xE0,0x45,0x74 } }; // B091F5A8-6A99-478D-B23B-09E8FEE04574
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportNamespaceManager>{ 0xF08CDB63,0x85DE,0x4A28,{ 0xA1,0xA9,0x5C,0xA3,0xE7,0xEF,0xDA,0x73 } }; // F08CDB63-85DE-4A28-A1A9-5CA3E7EFDA73
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportNamespaceScheduledCast>{ 0xBADC1897,0x7025,0x44EB,{ 0x91,0x08,0xFB,0x61,0xC4,0x05,0x57,0x92 } }; // BADC1897-7025-44EB-9108-FB61C4055792
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportNamespaceScheduledCastAutoStart>{ 0xA1107052,0x122C,0x4B81,{ 0x9B,0x7C,0x38,0x6E,0x68,0x55,0x38,0x3F } }; // A1107052-122C-4B81-9B7C-386E6855383F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportNamespaceScheduledCastManualStart>{ 0xD3E1A2AA,0xCAAC,0x460E,{ 0xB9,0x8A,0x47,0xF9,0xF3,0x18,0xA1,0xFA } }; // D3E1A2AA-CAAC-460E-B98A-47F9F318A1FA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportServer>{ 0xEA19B643,0x4ADF,0x4413,{ 0x94,0x2C,0x14,0xF3,0x79,0x11,0x87,0x60 } }; // EA19B643-4ADF-4413-942C-14F379118760
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportServicePolicy>{ 0x65ACEADC,0x2F0B,0x4F43,{ 0x9F,0x4D,0x81,0x18,0x65,0xD8,0xCE,0xAD } }; // 65ACEADC-2F0B-4F43-9F4D-811865D8CEAD
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportSession>{ 0x749AC4E0,0x67BC,0x4743,{ 0xBF,0xE5,0xCA,0xCB,0x1F,0x26,0xF5,0x7F } }; // 749AC4E0-67BC-4743-BFE5-CACB1F26F57F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportSetupManager>{ 0xC7BEEAAD,0x9F04,0x4923,{ 0x9F,0x0C,0xFB,0xF5,0x2B,0xC7,0x59,0x0F } }; // C7BEEAAD-9F04-4923-9F0C-FBF52BC7590F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportTftpClient>{ 0x50343925,0x7C5C,0x4C8C,{ 0x96,0xC4,0xAD,0x9F,0xA5,0x00,0x5F,0xBA } }; // 50343925-7C5C-4C8C-96C4-AD9FA5005FBA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsDeploymentServices::WdsTransportTftpManager>{ 0xC8E9DCA2,0x3241,0x4E4D,{ 0xB8,0x06,0xBC,0x74,0x01,0x9D,0xFE,0xDA } }; // C8E9DCA2-3241-4E4D-B806-BC74019DFEDA
#pragma endregion guids

}
#endif
