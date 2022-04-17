// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_IScsiDisc_2_H
#define WIN32_Windows_Win32_IScsiDisc_2_H
#include "win32/impl/Windows.Win32.IScsiDisc.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall WIN32_IMPL_GetIScsiVersionInformation(win32::Windows::Win32::IScsiDisc::ISCSI_VERSION_INFO* VersionInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiTargetInformationW(uint16_t* TargetName, uint16_t* DiscoveryMechanism, win32::Windows::Win32::IScsiDisc::TARGET_INFORMATION_CLASS InfoClass, uint32_t* BufferSize, void* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiTargetInformationA(int8_t* TargetName, int8_t* DiscoveryMechanism, win32::Windows::Win32::IScsiDisc::TARGET_INFORMATION_CLASS InfoClass, uint32_t* BufferSize, void* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddIScsiConnectionW(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, void* Reserved, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* TargetPortal, uint64_t SecurityFlags, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, uint32_t KeySize, int8_t* Key, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* ConnectionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddIScsiConnectionA(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, void* Reserved, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* TargetPortal, uint64_t SecurityFlags, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, uint32_t KeySize, int8_t* Key, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* ConnectionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiConnection(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* ConnectionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiTargetsW(uint8_t ForceUpdate, uint32_t* BufferSize, uint16_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiTargetsA(uint8_t ForceUpdate, uint32_t* BufferSize, int8_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddIScsiStaticTargetW(uint16_t* TargetName, uint16_t* TargetAlias, uint32_t TargetFlags, uint8_t Persist, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_MAPPINGW* Mappings, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTAL_GROUPW* PortalGroup) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddIScsiStaticTargetA(int8_t* TargetName, int8_t* TargetAlias, uint32_t TargetFlags, uint8_t Persist, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_MAPPINGA* Mappings, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTAL_GROUPA* PortalGroup) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiStaticTargetW(uint16_t* TargetName) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiStaticTargetA(int8_t* TargetName) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddIScsiSendTargetPortalW(uint16_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, uint64_t SecurityFlags, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddIScsiSendTargetPortalA(int8_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, uint64_t SecurityFlags, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiSendTargetPortalW(uint16_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiSendTargetPortalA(int8_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_RefreshIScsiSendTargetPortalW(uint16_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_RefreshIScsiSendTargetPortalA(int8_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiSendTargetPortalsW(uint32_t* PortalCount, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTAL_INFOW* PortalInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiSendTargetPortalsA(uint32_t* PortalCount, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTAL_INFOA* PortalInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiSendTargetPortalsExW(uint32_t* PortalCount, uint32_t* PortalInfoSize, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTAL_INFO_EXW* PortalInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiSendTargetPortalsExA(uint32_t* PortalCount, uint32_t* PortalInfoSize, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTAL_INFO_EXA* PortalInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_LoginIScsiTargetW(uint16_t* TargetName, uint8_t IsInformationalSession, uint16_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* TargetPortal, uint64_t SecurityFlags, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_MAPPINGW* Mappings, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, uint32_t KeySize, int8_t* Key, uint8_t IsPersistent, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueConnectionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_LoginIScsiTargetA(int8_t* TargetName, uint8_t IsInformationalSession, int8_t* InitiatorInstance, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* TargetPortal, uint64_t SecurityFlags, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_MAPPINGA* Mappings, win32::Windows::Win32::IScsiDisc::ISCSI_LOGIN_OPTIONS* LoginOptions, uint32_t KeySize, int8_t* Key, uint8_t IsPersistent, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueConnectionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiPersistentLoginsW(uint32_t* Count, win32::Windows::Win32::IScsiDisc::PERSISTENT_ISCSI_LOGIN_INFOW* PersistentLoginInfo, uint32_t* BufferSizeInBytes) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiPersistentLoginsA(uint32_t* Count, win32::Windows::Win32::IScsiDisc::PERSISTENT_ISCSI_LOGIN_INFOA* PersistentLoginInfo, uint32_t* BufferSizeInBytes) noexcept;
    uint32_t __stdcall WIN32_IMPL_LogoutIScsiTarget(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiPersistentTargetW(uint16_t* InitiatorInstance, uint32_t InitiatorPortNumber, uint16_t* TargetName, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveIScsiPersistentTargetA(int8_t* InitiatorInstance, uint32_t InitiatorPortNumber, int8_t* TargetName, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* Portal) noexcept;
    uint32_t __stdcall WIN32_IMPL_SendScsiInquiry(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, uint64_t Lun, uint8_t EvpdCmddt, uint8_t PageCode, uint8_t* ScsiStatus, uint32_t* ResponseSize, uint8_t* ResponseBuffer, uint32_t* SenseSize, uint8_t* SenseBuffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_SendScsiReadCapacity(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, uint64_t Lun, uint8_t* ScsiStatus, uint32_t* ResponseSize, uint8_t* ResponseBuffer, uint32_t* SenseSize, uint8_t* SenseBuffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_SendScsiReportLuns(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, uint8_t* ScsiStatus, uint32_t* ResponseSize, uint8_t* ResponseBuffer, uint32_t* SenseSize, uint8_t* SenseBuffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiInitiatorListW(uint32_t* BufferSize, uint16_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiInitiatorListA(uint32_t* BufferSize, int8_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportActiveIScsiTargetMappingsW(uint32_t* BufferSize, uint32_t* MappingCount, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_MAPPINGW* Mappings) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportActiveIScsiTargetMappingsA(uint32_t* BufferSize, uint32_t* MappingCount, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_MAPPINGA* Mappings) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiTunnelModeOuterAddressW(uint16_t* InitiatorName, uint32_t InitiatorPortNumber, uint16_t* DestinationAddress, uint16_t* OuterModeAddress, uint8_t Persist) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiTunnelModeOuterAddressA(int8_t* InitiatorName, uint32_t InitiatorPortNumber, int8_t* DestinationAddress, int8_t* OuterModeAddress, uint8_t Persist) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiIKEInfoW(uint16_t* InitiatorName, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::IKE_AUTHENTICATION_INFORMATION* AuthInfo, uint8_t Persist) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiIKEInfoA(int8_t* InitiatorName, uint32_t InitiatorPortNumber, win32::Windows::Win32::IScsiDisc::IKE_AUTHENTICATION_INFORMATION* AuthInfo, uint8_t Persist) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiIKEInfoW(uint16_t* InitiatorName, uint32_t InitiatorPortNumber, uint32_t* Reserved, win32::Windows::Win32::IScsiDisc::IKE_AUTHENTICATION_INFORMATION* AuthInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiIKEInfoA(int8_t* InitiatorName, uint32_t InitiatorPortNumber, uint32_t* Reserved, win32::Windows::Win32::IScsiDisc::IKE_AUTHENTICATION_INFORMATION* AuthInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiGroupPresharedKey(uint32_t KeyLength, uint8_t* Key, uint8_t Persist) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiInitiatorCHAPSharedSecret(uint32_t SharedSecretLength, uint8_t* SharedSecret) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiInitiatorRADIUSSharedSecret(uint32_t SharedSecretLength, uint8_t* SharedSecret) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiInitiatorNodeNameW(uint16_t* InitiatorNodeName) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetIScsiInitiatorNodeNameA(int8_t* InitiatorNodeName) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiInitiatorNodeNameW(uint16_t* InitiatorNodeName) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiInitiatorNodeNameA(int8_t* InitiatorNodeName) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddISNSServerW(uint16_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddISNSServerA(int8_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveISNSServerW(uint16_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveISNSServerA(int8_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_RefreshISNSServerW(uint16_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_RefreshISNSServerA(int8_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportISNSServerListW(uint32_t* BufferSizeInChar, uint16_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportISNSServerListA(uint32_t* BufferSizeInChar, int8_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiSessionListW(uint32_t* BufferSize, uint32_t* SessionCount, win32::Windows::Win32::IScsiDisc::ISCSI_SESSION_INFOW* SessionInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiSessionListA(uint32_t* BufferSize, uint32_t* SessionCount, win32::Windows::Win32::IScsiDisc::ISCSI_SESSION_INFOA* SessionInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetIScsiSessionListEx(uint32_t* BufferSize, uint32_t* SessionCountPtr, win32::Windows::Win32::IScsiDisc::ISCSI_SESSION_INFO_EX* SessionInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetDevicesForIScsiSessionW(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, uint32_t* DeviceCount, win32::Windows::Win32::IScsiDisc::ISCSI_DEVICE_ON_SESSIONW* Devices) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetDevicesForIScsiSessionA(win32::Windows::Win32::IScsiDisc::ISCSI_UNIQUE_SESSION_ID* UniqueSessionId, uint32_t* DeviceCount, win32::Windows::Win32::IScsiDisc::ISCSI_DEVICE_ON_SESSIONA* Devices) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetupPersistentIScsiVolumes() noexcept;
    uint32_t __stdcall WIN32_IMPL_SetupPersistentIScsiDevices() noexcept;
    uint32_t __stdcall WIN32_IMPL_AddPersistentIScsiDeviceW(uint16_t* DevicePath) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddPersistentIScsiDeviceA(int8_t* DevicePath) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemovePersistentIScsiDeviceW(uint16_t* DevicePath) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemovePersistentIScsiDeviceA(int8_t* DevicePath) noexcept;
    uint32_t __stdcall WIN32_IMPL_ClearPersistentIScsiDevices() noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportPersistentIScsiDevicesW(uint32_t* BufferSizeInChar, uint16_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportPersistentIScsiDevicesA(uint32_t* BufferSizeInChar, int8_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiTargetPortalsW(uint16_t* InitiatorName, uint16_t* TargetName, uint16_t* TargetPortalTag, uint32_t* ElementCount, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALW* Portals) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportIScsiTargetPortalsA(int8_t* InitiatorName, int8_t* TargetName, uint16_t* TargetPortalTag, uint32_t* ElementCount, win32::Windows::Win32::IScsiDisc::ISCSI_TARGET_PORTALA* Portals) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddRadiusServerW(uint16_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_AddRadiusServerA(int8_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveRadiusServerW(uint16_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_RemoveRadiusServerA(int8_t* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportRadiusServerListW(uint32_t* BufferSizeInChar, uint16_t* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_ReportRadiusServerListA(uint32_t* BufferSizeInChar, int8_t* Buffer) noexcept;
}
WIN32_IMPL_LINK(GetIScsiVersionInformation, 4)
WIN32_IMPL_LINK(GetIScsiTargetInformationW, 20)
WIN32_IMPL_LINK(GetIScsiTargetInformationA, 20)
WIN32_IMPL_LINK(AddIScsiConnectionW, 40)
WIN32_IMPL_LINK(AddIScsiConnectionA, 40)
WIN32_IMPL_LINK(RemoveIScsiConnection, 8)
WIN32_IMPL_LINK(ReportIScsiTargetsW, 12)
WIN32_IMPL_LINK(ReportIScsiTargetsA, 12)
WIN32_IMPL_LINK(AddIScsiStaticTargetW, 28)
WIN32_IMPL_LINK(AddIScsiStaticTargetA, 28)
WIN32_IMPL_LINK(RemoveIScsiStaticTargetW, 4)
WIN32_IMPL_LINK(RemoveIScsiStaticTargetA, 4)
WIN32_IMPL_LINK(AddIScsiSendTargetPortalW, 24)
WIN32_IMPL_LINK(AddIScsiSendTargetPortalA, 24)
WIN32_IMPL_LINK(RemoveIScsiSendTargetPortalW, 12)
WIN32_IMPL_LINK(RemoveIScsiSendTargetPortalA, 12)
WIN32_IMPL_LINK(RefreshIScsiSendTargetPortalW, 12)
WIN32_IMPL_LINK(RefreshIScsiSendTargetPortalA, 12)
WIN32_IMPL_LINK(ReportIScsiSendTargetPortalsW, 8)
WIN32_IMPL_LINK(ReportIScsiSendTargetPortalsA, 8)
WIN32_IMPL_LINK(ReportIScsiSendTargetPortalsExW, 12)
WIN32_IMPL_LINK(ReportIScsiSendTargetPortalsExA, 12)
WIN32_IMPL_LINK(LoginIScsiTargetW, 56)
WIN32_IMPL_LINK(LoginIScsiTargetA, 56)
WIN32_IMPL_LINK(ReportIScsiPersistentLoginsW, 12)
WIN32_IMPL_LINK(ReportIScsiPersistentLoginsA, 12)
WIN32_IMPL_LINK(LogoutIScsiTarget, 4)
WIN32_IMPL_LINK(RemoveIScsiPersistentTargetW, 16)
WIN32_IMPL_LINK(RemoveIScsiPersistentTargetA, 16)
WIN32_IMPL_LINK(SendScsiInquiry, 40)
WIN32_IMPL_LINK(SendScsiReadCapacity, 32)
WIN32_IMPL_LINK(SendScsiReportLuns, 24)
WIN32_IMPL_LINK(ReportIScsiInitiatorListW, 8)
WIN32_IMPL_LINK(ReportIScsiInitiatorListA, 8)
WIN32_IMPL_LINK(ReportActiveIScsiTargetMappingsW, 12)
WIN32_IMPL_LINK(ReportActiveIScsiTargetMappingsA, 12)
WIN32_IMPL_LINK(SetIScsiTunnelModeOuterAddressW, 20)
WIN32_IMPL_LINK(SetIScsiTunnelModeOuterAddressA, 20)
WIN32_IMPL_LINK(SetIScsiIKEInfoW, 16)
WIN32_IMPL_LINK(SetIScsiIKEInfoA, 16)
WIN32_IMPL_LINK(GetIScsiIKEInfoW, 16)
WIN32_IMPL_LINK(GetIScsiIKEInfoA, 16)
WIN32_IMPL_LINK(SetIScsiGroupPresharedKey, 12)
WIN32_IMPL_LINK(SetIScsiInitiatorCHAPSharedSecret, 8)
WIN32_IMPL_LINK(SetIScsiInitiatorRADIUSSharedSecret, 8)
WIN32_IMPL_LINK(SetIScsiInitiatorNodeNameW, 4)
WIN32_IMPL_LINK(SetIScsiInitiatorNodeNameA, 4)
WIN32_IMPL_LINK(GetIScsiInitiatorNodeNameW, 4)
WIN32_IMPL_LINK(GetIScsiInitiatorNodeNameA, 4)
WIN32_IMPL_LINK(AddISNSServerW, 4)
WIN32_IMPL_LINK(AddISNSServerA, 4)
WIN32_IMPL_LINK(RemoveISNSServerW, 4)
WIN32_IMPL_LINK(RemoveISNSServerA, 4)
WIN32_IMPL_LINK(RefreshISNSServerW, 4)
WIN32_IMPL_LINK(RefreshISNSServerA, 4)
WIN32_IMPL_LINK(ReportISNSServerListW, 8)
WIN32_IMPL_LINK(ReportISNSServerListA, 8)
WIN32_IMPL_LINK(GetIScsiSessionListW, 12)
WIN32_IMPL_LINK(GetIScsiSessionListA, 12)
WIN32_IMPL_LINK(GetIScsiSessionListEx, 12)
WIN32_IMPL_LINK(GetDevicesForIScsiSessionW, 12)
WIN32_IMPL_LINK(GetDevicesForIScsiSessionA, 12)
WIN32_IMPL_LINK(SetupPersistentIScsiVolumes, 0)
WIN32_IMPL_LINK(SetupPersistentIScsiDevices, 0)
WIN32_IMPL_LINK(AddPersistentIScsiDeviceW, 4)
WIN32_IMPL_LINK(AddPersistentIScsiDeviceA, 4)
WIN32_IMPL_LINK(RemovePersistentIScsiDeviceW, 4)
WIN32_IMPL_LINK(RemovePersistentIScsiDeviceA, 4)
WIN32_IMPL_LINK(ClearPersistentIScsiDevices, 0)
WIN32_IMPL_LINK(ReportPersistentIScsiDevicesW, 8)
WIN32_IMPL_LINK(ReportPersistentIScsiDevicesA, 8)
WIN32_IMPL_LINK(ReportIScsiTargetPortalsW, 20)
WIN32_IMPL_LINK(ReportIScsiTargetPortalsA, 20)
WIN32_IMPL_LINK(AddRadiusServerW, 4)
WIN32_IMPL_LINK(AddRadiusServerA, 4)
WIN32_IMPL_LINK(RemoveRadiusServerW, 4)
WIN32_IMPL_LINK(RemoveRadiusServerA, 4)
WIN32_IMPL_LINK(ReportRadiusServerListW, 8)
WIN32_IMPL_LINK(ReportRadiusServerListA, 8)

#pragma endregion abi_methods

#endif