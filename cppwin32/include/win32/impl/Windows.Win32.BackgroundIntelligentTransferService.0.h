// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_BackgroundIntelligentTransferService_0_H
#define WIN32_Windows_Win32_BackgroundIntelligentTransferService_0_H
WIN32_EXPORT namespace win32::Windows::Win32::BackgroundIntelligentTransferService
{
#pragma region enums
    enum class BG_AUTH_SCHEME : int32_t
    {
        BG_AUTH_SCHEME_BASIC = 1,
        BG_AUTH_SCHEME_DIGEST = 2,
        BG_AUTH_SCHEME_NTLM = 3,
        BG_AUTH_SCHEME_NEGOTIATE = 4,
        BG_AUTH_SCHEME_PASSPORT = 5,
    };
    enum class BG_AUTH_TARGET : int32_t
    {
        BG_AUTH_TARGET_SERVER = 1,
        BG_AUTH_TARGET_PROXY = 2,
    };
    enum class BG_CERT_STORE_LOCATION : int32_t
    {
        BG_CERT_STORE_LOCATION_CURRENT_USER = 0,
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE = 1,
        BG_CERT_STORE_LOCATION_CURRENT_SERVICE = 2,
        BG_CERT_STORE_LOCATION_SERVICES = 3,
        BG_CERT_STORE_LOCATION_USERS = 4,
        BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY = 5,
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY = 6,
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE = 7,
    };
    enum class BG_ERROR_CONTEXT : int32_t
    {
        BG_ERROR_CONTEXT_NONE = 0,
        BG_ERROR_CONTEXT_UNKNOWN = 1,
        BG_ERROR_CONTEXT_GENERAL_QUEUE_MANAGER = 2,
        BG_ERROR_CONTEXT_QUEUE_MANAGER_NOTIFICATION = 3,
        BG_ERROR_CONTEXT_LOCAL_FILE = 4,
        BG_ERROR_CONTEXT_REMOTE_FILE = 5,
        BG_ERROR_CONTEXT_GENERAL_TRANSPORT = 6,
        BG_ERROR_CONTEXT_REMOTE_APPLICATION = 7,
        BG_ERROR_CONTEXT_SERVER_CERTIFICATE_CALLBACK = 8,
    };
    enum class BG_JOB_PRIORITY : int32_t
    {
        BG_JOB_PRIORITY_FOREGROUND = 0,
        BG_JOB_PRIORITY_HIGH = 1,
        BG_JOB_PRIORITY_NORMAL = 2,
        BG_JOB_PRIORITY_LOW = 3,
    };
    enum class BG_JOB_PROXY_USAGE : int32_t
    {
        BG_JOB_PROXY_USAGE_PRECONFIG = 0,
        BG_JOB_PROXY_USAGE_NO_PROXY = 1,
        BG_JOB_PROXY_USAGE_OVERRIDE = 2,
        BG_JOB_PROXY_USAGE_AUTODETECT = 3,
    };
    enum class BG_JOB_STATE : int32_t
    {
        BG_JOB_STATE_QUEUED = 0,
        BG_JOB_STATE_CONNECTING = 1,
        BG_JOB_STATE_TRANSFERRING = 2,
        BG_JOB_STATE_SUSPENDED = 3,
        BG_JOB_STATE_ERROR = 4,
        BG_JOB_STATE_TRANSIENT_ERROR = 5,
        BG_JOB_STATE_TRANSFERRED = 6,
        BG_JOB_STATE_ACKNOWLEDGED = 7,
        BG_JOB_STATE_CANCELLED = 8,
    };
    enum class BG_JOB_TYPE : int32_t
    {
        BG_JOB_TYPE_DOWNLOAD = 0,
        BG_JOB_TYPE_UPLOAD = 1,
        BG_JOB_TYPE_UPLOAD_REPLY = 2,
    };
    enum class BITS_FILE_PROPERTY_ID : int32_t
    {
        BITS_FILE_PROPERTY_ID_HTTP_RESPONSE_HEADERS = 1,
    };
    enum class BITS_JOB_PROPERTY_ID : int32_t
    {
        BITS_JOB_PROPERTY_ID_COST_FLAGS = 1,
        BITS_JOB_PROPERTY_NOTIFICATION_CLSID = 2,
        BITS_JOB_PROPERTY_DYNAMIC_CONTENT = 3,
        BITS_JOB_PROPERTY_HIGH_PERFORMANCE = 4,
        BITS_JOB_PROPERTY_MAX_DOWNLOAD_SIZE = 5,
        BITS_JOB_PROPERTY_USE_STORED_CREDENTIALS = 7,
        BITS_JOB_PROPERTY_MINIMUM_NOTIFICATION_INTERVAL_MS = 9,
        BITS_JOB_PROPERTY_ON_DEMAND_MODE = 10,
    };
    enum class BITS_JOB_TRANSFER_POLICY : int32_t
    {
        BITS_JOB_TRANSFER_POLICY_ALWAYS = -2147483393,
        BITS_JOB_TRANSFER_POLICY_NOT_ROAMING = -2147483521,
        BITS_JOB_TRANSFER_POLICY_NO_SURCHARGE = -2147483537,
        BITS_JOB_TRANSFER_POLICY_STANDARD = -2147483545,
        BITS_JOB_TRANSFER_POLICY_UNRESTRICTED = -2147483615,
    };
    enum class GROUPPROP : int32_t
    {
        GROUPPROP_PRIORITY = 0,
        GROUPPROP_REMOTEUSERID = 1,
        GROUPPROP_REMOTEUSERPWD = 2,
        GROUPPROP_LOCALUSERID = 3,
        GROUPPROP_LOCALUSERPWD = 4,
        GROUPPROP_PROTOCOLFLAGS = 5,
        GROUPPROP_NOTIFYFLAGS = 6,
        GROUPPROP_NOTIFYCLSID = 7,
        GROUPPROP_PROGRESSSIZE = 8,
        GROUPPROP_PROGRESSPERCENT = 9,
        GROUPPROP_PROGRESSTIME = 10,
        GROUPPROP_DISPLAYNAME = 11,
        GROUPPROP_DESCRIPTION = 12,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct BG_AUTH_CREDENTIALS;
    union BG_AUTH_CREDENTIALS_UNION;
    struct BG_BASIC_CREDENTIALS;
    struct BG_FILE_INFO;
    struct BG_FILE_PROGRESS;
    struct BG_FILE_RANGE;
    struct BG_JOB_PROGRESS;
    struct BG_JOB_REPLY_PROGRESS;
    struct BG_JOB_TIMES;
    union BITS_FILE_PROPERTY_VALUE;
    union BITS_JOB_PROPERTY_VALUE;
    struct FILESETINFO;
    struct AsyncIBackgroundCopyCallback;
    struct BITSExtensionSetupFactory;
    struct BackgroundCopyManager;
    struct BackgroundCopyManager10_1;
    struct BackgroundCopyManager10_2;
    struct BackgroundCopyManager10_3;
    struct BackgroundCopyManager1_5;
    struct BackgroundCopyManager2_0;
    struct BackgroundCopyManager2_5;
    struct BackgroundCopyManager3_0;
    struct BackgroundCopyManager4_0;
    struct BackgroundCopyManager5_0;
    struct BackgroundCopyQMgr;
    struct IBITSExtensionSetup;
    struct IBITSExtensionSetupFactory;
    struct IBackgroundCopyCallback;
    struct IBackgroundCopyCallback1;
    struct IBackgroundCopyCallback2;
    struct IBackgroundCopyCallback3;
    struct IBackgroundCopyError;
    struct IBackgroundCopyFile;
    struct IBackgroundCopyFile2;
    struct IBackgroundCopyFile3;
    struct IBackgroundCopyFile4;
    struct IBackgroundCopyFile5;
    struct IBackgroundCopyFile6;
    struct IBackgroundCopyGroup;
    struct IBackgroundCopyJob;
    struct IBackgroundCopyJob1;
    struct IBackgroundCopyJob2;
    struct IBackgroundCopyJob3;
    struct IBackgroundCopyJob4;
    struct IBackgroundCopyJob5;
    struct IBackgroundCopyJobHttpOptions;
    struct IBackgroundCopyJobHttpOptions2;
    struct IBackgroundCopyJobHttpOptions3;
    struct IBackgroundCopyManager;
    struct IBackgroundCopyQMgr;
    struct IBackgroundCopyServerCertificateValidationCallback;
    struct IBitsPeer;
    struct IBitsPeerCacheAdministration;
    struct IBitsPeerCacheRecord;
    struct IBitsTokenOptions;
    struct IEnumBackgroundCopyFiles;
    struct IEnumBackgroundCopyGroups;
    struct IEnumBackgroundCopyJobs;
    struct IEnumBackgroundCopyJobs1;
    struct IEnumBitsPeerCacheRecords;
    struct IEnumBitsPeers;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::AsyncIBackgroundCopyCallback>{ 0xCA29D251,0xB4BB,0x4679,{ 0xA3,0xD9,0xAE,0x80,0x06,0x11,0x9D,0x54 } }; // CA29D251-B4BB-4679-A3D9-AE8006119D54
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BITSExtensionSetupFactory>{ 0xEFBBAB68,0x7286,0x4783,{ 0x94,0xBF,0x94,0x61,0xD8,0xB7,0xE7,0xE9 } }; // EFBBAB68-7286-4783-94BF-9461D8B7E7E9
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager>{ 0x4991D34B,0x80A1,0x4291,{ 0x83,0xB6,0x33,0x28,0x36,0x6B,0x90,0x97 } }; // 4991D34B-80A1-4291-83B6-3328366B9097
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager10_1>{ 0x4BD3E4E1,0x7BD4,0x4A2B,{ 0x99,0x64,0x49,0x64,0x00,0xDE,0x51,0x93 } }; // 4BD3E4E1-7BD4-4A2B-9964-496400DE5193
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager10_2>{ 0x4575438F,0xA6C8,0x4976,{ 0xB0,0xFE,0x2F,0x26,0xB8,0x0D,0x95,0x9E } }; // 4575438F-A6C8-4976-B0FE-2F26B80D959E
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager10_3>{ 0x5FD42AD5,0xC04E,0x4D36,{ 0xAD,0xC7,0xE0,0x8F,0xF1,0x57,0x37,0xAD } }; // 5FD42AD5-C04E-4D36-ADC7-E08FF15737AD
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager1_5>{ 0xF087771F,0xD74F,0x4C1A,{ 0xBB,0x8A,0xE1,0x6A,0xCA,0x91,0x24,0xEA } }; // F087771F-D74F-4C1A-BB8A-E16ACA9124EA
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager2_0>{ 0x6D18AD12,0xBDE3,0x4393,{ 0xB3,0x11,0x09,0x9C,0x34,0x6E,0x6D,0xF9 } }; // 6D18AD12-BDE3-4393-B311-099C346E6DF9
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager2_5>{ 0x03CA98D6,0xFF5D,0x49B8,{ 0xAB,0xC6,0x03,0xDD,0x84,0x12,0x70,0x20 } }; // 03CA98D6-FF5D-49B8-ABC6-03DD84127020
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager3_0>{ 0x659CDEA7,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEA7-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager4_0>{ 0xBB6DF56B,0xCACE,0x11DC,{ 0x99,0x92,0x00,0x19,0xB9,0x3A,0x3A,0x84 } }; // BB6DF56B-CACE-11DC-9992-0019B93A3A84
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyManager5_0>{ 0x1ECCA34C,0xE88A,0x44E3,{ 0x8D,0x6A,0x89,0x21,0xBD,0xE9,0xE4,0x52 } }; // 1ECCA34C-E88A-44E3-8D6A-8921BDE9E452
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::BackgroundCopyQMgr>{ 0x69AD4AEE,0x51BE,0x439B,{ 0xA9,0x2C,0x86,0xAE,0x49,0x0E,0x8B,0x30 } }; // 69AD4AEE-51BE-439B-A92C-86AE490E8B30
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBITSExtensionSetup>{ 0x29CFBBF7,0x09E4,0x4B97,{ 0xB0,0xBC,0xF2,0x28,0x7E,0x3D,0x8E,0xB3 } }; // 29CFBBF7-09E4-4B97-B0BC-F2287E3D8EB3
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBITSExtensionSetupFactory>{ 0xD5D2D542,0x5503,0x4E64,{ 0x8B,0x48,0x72,0xEF,0x91,0xA3,0x2E,0xE1 } }; // D5D2D542-5503-4E64-8B48-72EF91A32EE1
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyCallback>{ 0x97EA99C7,0x0186,0x4AD4,{ 0x8D,0xF9,0xC5,0xB4,0xE0,0xED,0x6B,0x22 } }; // 97EA99C7-0186-4AD4-8DF9-C5B4E0ED6B22
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyCallback1>{ 0x084F6593,0x3800,0x4E08,{ 0x9B,0x59,0x99,0xFA,0x59,0xAD,0xDF,0x82 } }; // 084F6593-3800-4E08-9B59-99FA59ADDF82
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyCallback2>{ 0x659CDEAC,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEAC-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyCallback3>{ 0x98C97BD2,0xE32B,0x4AD8,{ 0xA5,0x28,0x95,0xFD,0x8B,0x16,0xBD,0x42 } }; // 98C97BD2-E32B-4AD8-A528-95FD8B16BD42
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyError>{ 0x19C613A0,0xFCB8,0x4F28,{ 0x81,0xAE,0x89,0x7C,0x3D,0x07,0x8F,0x81 } }; // 19C613A0-FCB8-4F28-81AE-897C3D078F81
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyFile>{ 0x01B7BD23,0xFB88,0x4A77,{ 0x84,0x90,0x58,0x91,0xD3,0xE4,0x65,0x3A } }; // 01B7BD23-FB88-4A77-8490-5891D3E4653A
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyFile2>{ 0x83E81B93,0x0873,0x474D,{ 0x8A,0x8C,0xF2,0x01,0x8B,0x1A,0x93,0x9C } }; // 83E81B93-0873-474D-8A8C-F2018B1A939C
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyFile3>{ 0x659CDEAA,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEAA-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyFile4>{ 0xEF7E0655,0x7888,0x4960,{ 0xB0,0xE5,0x73,0x08,0x46,0xE0,0x34,0x92 } }; // EF7E0655-7888-4960-B0E5-730846E03492
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyFile5>{ 0x85C1657F,0xDAFC,0x40E8,{ 0x88,0x34,0xDF,0x18,0xEA,0x25,0x71,0x7E } }; // 85C1657F-DAFC-40E8-8834-DF18EA25717E
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyFile6>{ 0xCF6784F7,0xD677,0x49FD,{ 0x93,0x68,0xCB,0x47,0xAE,0xE9,0xD1,0xAD } }; // CF6784F7-D677-49FD-9368-CB47AEE9D1AD
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyGroup>{ 0x1DED80A7,0x53EA,0x424F,{ 0x8A,0x04,0x17,0xFE,0xA9,0xAD,0xC4,0xF5 } }; // 1DED80A7-53EA-424F-8A04-17FEA9ADC4F5
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJob>{ 0x37668D37,0x507E,0x4160,{ 0x93,0x16,0x26,0x30,0x6D,0x15,0x0B,0x12 } }; // 37668D37-507E-4160-9316-26306D150B12
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJob1>{ 0x59F5553C,0x2031,0x4629,{ 0xBB,0x18,0x26,0x45,0xA6,0x97,0x09,0x47 } }; // 59F5553C-2031-4629-BB18-2645A6970947
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJob2>{ 0x54B50739,0x686F,0x45EB,{ 0x9D,0xFF,0xD6,0xA9,0xA0,0xFA,0xA9,0xAF } }; // 54B50739-686F-45EB-9DFF-D6A9A0FAA9AF
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJob3>{ 0x443C8934,0x90FF,0x48ED,{ 0xBC,0xDE,0x26,0xF5,0xC7,0x45,0x00,0x42 } }; // 443C8934-90FF-48ED-BCDE-26F5C7450042
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJob4>{ 0x659CDEAE,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEAE-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJob5>{ 0xE847030C,0xBBBA,0x4657,{ 0xAF,0x6D,0x48,0x4A,0xA4,0x2B,0xF1,0xFE } }; // E847030C-BBBA-4657-AF6D-484AA42BF1FE
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJobHttpOptions>{ 0xF1BD1079,0x9F01,0x4BDC,{ 0x80,0x36,0xF0,0x9B,0x70,0x09,0x50,0x66 } }; // F1BD1079-9F01-4BDC-8036-F09B70095066
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJobHttpOptions2>{ 0xB591A192,0xA405,0x4FC3,{ 0x83,0x23,0x4C,0x5C,0x54,0x25,0x78,0xFC } }; // B591A192-A405-4FC3-8323-4C5C542578FC
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyJobHttpOptions3>{ 0x8A9263D3,0xFD4C,0x4EDA,{ 0x9B,0x28,0x30,0x13,0x2A,0x4D,0x4E,0x3C } }; // 8A9263D3-FD4C-4EDA-9B28-30132A4D4E3C
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyManager>{ 0x5CE34C0D,0x0DC9,0x4C1F,{ 0x89,0x7C,0xDA,0xA1,0xB7,0x8C,0xEE,0x7C } }; // 5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyQMgr>{ 0x16F41C69,0x09F5,0x41D2,{ 0x8C,0xD8,0x3C,0x08,0xC4,0x7B,0xC8,0xA8 } }; // 16F41C69-09F5-41D2-8CD8-3C08C47BC8A8
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBackgroundCopyServerCertificateValidationCallback>{ 0x4CEC0D02,0xDEF7,0x4158,{ 0x81,0x3A,0xC3,0x2A,0x46,0x94,0x5F,0xF7 } }; // 4CEC0D02-DEF7-4158-813A-C32A46945FF7
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBitsPeer>{ 0x659CDEA2,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEA2-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBitsPeerCacheAdministration>{ 0x659CDEAD,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEAD-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBitsPeerCacheRecord>{ 0x659CDEAF,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEAF-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IBitsTokenOptions>{ 0x9A2584C3,0xF7D2,0x457A,{ 0x9A,0x5E,0x22,0xB6,0x7B,0xFF,0xC7,0xD2 } }; // 9A2584C3-F7D2-457A-9A5E-22B67BFFC7D2
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IEnumBackgroundCopyFiles>{ 0xCA51E165,0xC365,0x424C,{ 0x8D,0x41,0x24,0xAA,0xA4,0xFF,0x3C,0x40 } }; // CA51E165-C365-424C-8D41-24AAA4FF3C40
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IEnumBackgroundCopyGroups>{ 0xD993E603,0x4AA4,0x47C5,{ 0x86,0x65,0xC2,0x0D,0x39,0xC2,0xBA,0x4F } }; // D993E603-4AA4-47C5-8665-C20D39C2BA4F
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IEnumBackgroundCopyJobs>{ 0x1AF4F612,0x3B71,0x466F,{ 0x8F,0x58,0x7B,0x6F,0x73,0xAC,0x57,0xAD } }; // 1AF4F612-3B71-466F-8F58-7B6F73AC57AD
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IEnumBackgroundCopyJobs1>{ 0x8BAEBA9D,0x8F1C,0x42C4,{ 0xB8,0x2C,0x09,0xAE,0x79,0x98,0x0D,0x25 } }; // 8BAEBA9D-8F1C-42C4-B82C-09AE79980D25
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IEnumBitsPeerCacheRecords>{ 0x659CDEA4,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEA4-489E-11D9-A9CD-000D56965251
    template <> inline constexpr guid guid_v<Windows::Win32::BackgroundIntelligentTransferService::IEnumBitsPeers>{ 0x659CDEA5,0x489E,0x11D9,{ 0xA9,0xCD,0x00,0x0D,0x56,0x96,0x52,0x51 } }; // 659CDEA5-489E-11D9-A9CD-000D56965251
#pragma endregion guids

}
#endif
