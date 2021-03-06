// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_RemoteDesktopServices_2_H
#define WIN32_Windows_Win32_RemoteDesktopServices_2_H
#include "win32/impl/Windows.Win32.RemoteDesktopServices.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ProcessIdToSessionId(uint32_t dwProcessId, uint32_t* pSessionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_WTSGetActiveConsoleSessionId() noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSStopRemoteControlSession(uint32_t LogonId) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSStartRemoteControlSessionW(uint16_t* pTargetServerName, uint32_t TargetLogonId, uint8_t HotkeyVk, uint16_t HotkeyModifiers) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSStartRemoteControlSessionA(int8_t* pTargetServerName, uint32_t TargetLogonId, uint8_t HotkeyVk, uint16_t HotkeyModifiers) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSConnectSessionA(uint32_t LogonId, uint32_t TargetLogonId, int8_t* pPassword, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSConnectSessionW(uint32_t LogonId, uint32_t TargetLogonId, uint16_t* pPassword, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateServersW(uint16_t* pDomainName, uint32_t Reserved, uint32_t Version, win32::Windows::Win32::RemoteDesktopServices::WTS_SERVER_INFOW** ppServerInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateServersA(int8_t* pDomainName, uint32_t Reserved, uint32_t Version, win32::Windows::Win32::RemoteDesktopServices::WTS_SERVER_INFOA** ppServerInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::HANDLE __stdcall WIN32_IMPL_WTSOpenServerW(uint16_t* pServerName) noexcept;
    win32::Windows::Win32::SystemServices::HANDLE __stdcall WIN32_IMPL_WTSOpenServerA(int8_t* pServerName) noexcept;
    win32::Windows::Win32::SystemServices::HANDLE __stdcall WIN32_IMPL_WTSOpenServerExW(uint16_t* pServerName) noexcept;
    win32::Windows::Win32::SystemServices::HANDLE __stdcall WIN32_IMPL_WTSOpenServerExA(int8_t* pServerName) noexcept;
    void __stdcall WIN32_IMPL_WTSCloseServer(win32::Windows::Win32::SystemServices::HANDLE hServer) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateSessionsW(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t Reserved, uint32_t Version, win32::Windows::Win32::RemoteDesktopServices::WTS_SESSION_INFOW** ppSessionInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateSessionsA(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t Reserved, uint32_t Version, win32::Windows::Win32::RemoteDesktopServices::WTS_SESSION_INFOA** ppSessionInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateSessionsExW(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t* pLevel, uint32_t Filter, win32::Windows::Win32::RemoteDesktopServices::WTS_SESSION_INFO_1W** ppSessionInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateSessionsExA(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t* pLevel, uint32_t Filter, win32::Windows::Win32::RemoteDesktopServices::WTS_SESSION_INFO_1A** ppSessionInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateProcessesW(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t Reserved, uint32_t Version, win32::Windows::Win32::RemoteDesktopServices::WTS_PROCESS_INFOW** ppProcessInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateProcessesA(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t Reserved, uint32_t Version, win32::Windows::Win32::RemoteDesktopServices::WTS_PROCESS_INFOA** ppProcessInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSTerminateProcess(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t ProcessId, uint32_t ExitCode) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQuerySessionInformationW(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, win32::Windows::Win32::RemoteDesktopServices::WTS_INFO_CLASS WTSInfoClass, uint16_t** ppBuffer, uint32_t* pBytesReturned) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQuerySessionInformationA(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, win32::Windows::Win32::RemoteDesktopServices::WTS_INFO_CLASS WTSInfoClass, int8_t** ppBuffer, uint32_t* pBytesReturned) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQueryUserConfigW(uint16_t* pServerName, uint16_t* pUserName, win32::Windows::Win32::RemoteDesktopServices::WTS_CONFIG_CLASS WTSConfigClass, uint16_t** ppBuffer, uint32_t* pBytesReturned) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQueryUserConfigA(int8_t* pServerName, int8_t* pUserName, win32::Windows::Win32::RemoteDesktopServices::WTS_CONFIG_CLASS WTSConfigClass, int8_t** ppBuffer, uint32_t* pBytesReturned) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSSetUserConfigW(uint16_t* pServerName, uint16_t* pUserName, win32::Windows::Win32::RemoteDesktopServices::WTS_CONFIG_CLASS WTSConfigClass, uint16_t* pBuffer, uint32_t DataLength) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSSetUserConfigA(int8_t* pServerName, int8_t* pUserName, win32::Windows::Win32::RemoteDesktopServices::WTS_CONFIG_CLASS WTSConfigClass, int8_t* pBuffer, uint32_t DataLength) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSSendMessageW(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, uint16_t* pTitle, uint32_t TitleLength, uint16_t* pMessage, uint32_t MessageLength, uint32_t Style, uint32_t Timeout, uint32_t* pResponse, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSSendMessageA(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, int8_t* pTitle, uint32_t TitleLength, int8_t* pMessage, uint32_t MessageLength, uint32_t Style, uint32_t Timeout, uint32_t* pResponse, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSDisconnectSession(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSLogoffSession(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSShutdownSystem(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t ShutdownFlag) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSWaitSystemEvent(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t EventMask, uint32_t* pEventFlags) noexcept;
    win32::Windows::Win32::RemoteDesktopServices::HwtsVirtualChannelHandle __stdcall WIN32_IMPL_WTSVirtualChannelOpen(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t SessionId, int8_t* pVirtualName) noexcept;
    win32::Windows::Win32::RemoteDesktopServices::HwtsVirtualChannelHandle __stdcall WIN32_IMPL_WTSVirtualChannelOpenEx(uint32_t SessionId, int8_t* pVirtualName, uint32_t flags) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSVirtualChannelClose(win32::Windows::Win32::SystemServices::HANDLE hChannelHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSVirtualChannelRead(win32::Windows::Win32::SystemServices::HANDLE hChannelHandle, uint32_t TimeOut, int8_t* Buffer, uint32_t BufferSize, uint32_t* pBytesRead) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSVirtualChannelWrite(win32::Windows::Win32::SystemServices::HANDLE hChannelHandle, int8_t* Buffer, uint32_t Length, uint32_t* pBytesWritten) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSVirtualChannelPurgeInput(win32::Windows::Win32::SystemServices::HANDLE hChannelHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSVirtualChannelPurgeOutput(win32::Windows::Win32::SystemServices::HANDLE hChannelHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSVirtualChannelQuery(win32::Windows::Win32::SystemServices::HANDLE hChannelHandle, win32::Windows::Win32::RemoteDesktopServices::WTS_VIRTUAL_CLASS param1, void** ppBuffer, uint32_t* pBytesReturned) noexcept;
    void __stdcall WIN32_IMPL_WTSFreeMemory(void* pMemory) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSRegisterSessionNotification(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSUnRegisterSessionNotification(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSRegisterSessionNotificationEx(win32::Windows::Win32::SystemServices::HANDLE hServer, win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSUnRegisterSessionNotificationEx(win32::Windows::Win32::SystemServices::HANDLE hServer, win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQueryUserToken(uint32_t SessionId, intptr_t* phToken) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSFreeMemoryExW(win32::Windows::Win32::RemoteDesktopServices::WTS_TYPE_CLASS WTSTypeClass, void* pMemory, uint32_t NumberOfEntries) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSFreeMemoryExA(win32::Windows::Win32::RemoteDesktopServices::WTS_TYPE_CLASS WTSTypeClass, void* pMemory, uint32_t NumberOfEntries) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateProcessesExW(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t* pLevel, uint32_t SessionId, uint16_t** ppProcessInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateProcessesExA(win32::Windows::Win32::SystemServices::HANDLE hServer, uint32_t* pLevel, uint32_t SessionId, int8_t** ppProcessInfo, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateListenersW(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, uint16_t** pListeners, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnumerateListenersA(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, int8_t** pListeners, uint32_t* pCount) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQueryListenerConfigW(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, uint16_t* pListenerName, win32::Windows::Win32::RemoteDesktopServices::WTSLISTENERCONFIGW* pBuffer) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSQueryListenerConfigA(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, int8_t* pListenerName, win32::Windows::Win32::RemoteDesktopServices::WTSLISTENERCONFIGA* pBuffer) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSCreateListenerW(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, uint16_t* pListenerName, win32::Windows::Win32::RemoteDesktopServices::WTSLISTENERCONFIGW* pBuffer, uint32_t flag) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSCreateListenerA(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, int8_t* pListenerName, win32::Windows::Win32::RemoteDesktopServices::WTSLISTENERCONFIGA* pBuffer, uint32_t flag) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSSetListenerSecurityW(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, uint16_t* pListenerName, uint32_t SecurityInformation, void* pSecurityDescriptor) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSSetListenerSecurityA(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, int8_t* pListenerName, uint32_t SecurityInformation, void* pSecurityDescriptor) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSGetListenerSecurityW(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, uint16_t* pListenerName, uint32_t SecurityInformation, void* pSecurityDescriptor, uint32_t nLength, uint32_t* lpnLengthNeeded) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSGetListenerSecurityA(win32::Windows::Win32::SystemServices::HANDLE hServer, void* pReserved, uint32_t Reserved, int8_t* pListenerName, uint32_t SecurityInformation, void* pSecurityDescriptor, uint32_t nLength, uint32_t* lpnLengthNeeded) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSEnableChildSessions(win32::Windows::Win32::SystemServices::BOOL bEnable) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSIsChildSessionsEnabled(int32_t* pbEnabled) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WTSGetChildSessionId(uint32_t* pSessionId) noexcept;
    int32_t __stdcall WIN32_IMPL_WTSSetRenderHint(uint64_t* pRenderHintID, win32::Windows::Win32::WindowsAndMessaging::HWND hwndOwner, uint32_t renderHintType, uint32_t cbHintDataLength, uint8_t* pHintData) noexcept;
}
WIN32_IMPL_LINK(ProcessIdToSessionId, 8)
WIN32_IMPL_LINK(WTSGetActiveConsoleSessionId, 0)
WIN32_IMPL_LINK(WTSStopRemoteControlSession, 4)
WIN32_IMPL_LINK(WTSStartRemoteControlSessionW, 16)
WIN32_IMPL_LINK(WTSStartRemoteControlSessionA, 16)
WIN32_IMPL_LINK(WTSConnectSessionA, 16)
WIN32_IMPL_LINK(WTSConnectSessionW, 16)
WIN32_IMPL_LINK(WTSEnumerateServersW, 20)
WIN32_IMPL_LINK(WTSEnumerateServersA, 20)
WIN32_IMPL_LINK(WTSOpenServerW, 4)
WIN32_IMPL_LINK(WTSOpenServerA, 4)
WIN32_IMPL_LINK(WTSOpenServerExW, 4)
WIN32_IMPL_LINK(WTSOpenServerExA, 4)
WIN32_IMPL_LINK(WTSCloseServer, 4)
WIN32_IMPL_LINK(WTSEnumerateSessionsW, 20)
WIN32_IMPL_LINK(WTSEnumerateSessionsA, 20)
WIN32_IMPL_LINK(WTSEnumerateSessionsExW, 20)
WIN32_IMPL_LINK(WTSEnumerateSessionsExA, 20)
WIN32_IMPL_LINK(WTSEnumerateProcessesW, 20)
WIN32_IMPL_LINK(WTSEnumerateProcessesA, 20)
WIN32_IMPL_LINK(WTSTerminateProcess, 12)
WIN32_IMPL_LINK(WTSQuerySessionInformationW, 20)
WIN32_IMPL_LINK(WTSQuerySessionInformationA, 20)
WIN32_IMPL_LINK(WTSQueryUserConfigW, 20)
WIN32_IMPL_LINK(WTSQueryUserConfigA, 20)
WIN32_IMPL_LINK(WTSSetUserConfigW, 20)
WIN32_IMPL_LINK(WTSSetUserConfigA, 20)
WIN32_IMPL_LINK(WTSSendMessageW, 40)
WIN32_IMPL_LINK(WTSSendMessageA, 40)
WIN32_IMPL_LINK(WTSDisconnectSession, 12)
WIN32_IMPL_LINK(WTSLogoffSession, 12)
WIN32_IMPL_LINK(WTSShutdownSystem, 8)
WIN32_IMPL_LINK(WTSWaitSystemEvent, 12)
WIN32_IMPL_LINK(WTSVirtualChannelOpen, 12)
WIN32_IMPL_LINK(WTSVirtualChannelOpenEx, 12)
WIN32_IMPL_LINK(WTSVirtualChannelClose, 4)
WIN32_IMPL_LINK(WTSVirtualChannelRead, 20)
WIN32_IMPL_LINK(WTSVirtualChannelWrite, 16)
WIN32_IMPL_LINK(WTSVirtualChannelPurgeInput, 4)
WIN32_IMPL_LINK(WTSVirtualChannelPurgeOutput, 4)
WIN32_IMPL_LINK(WTSVirtualChannelQuery, 16)
WIN32_IMPL_LINK(WTSFreeMemory, 4)
WIN32_IMPL_LINK(WTSRegisterSessionNotification, 8)
WIN32_IMPL_LINK(WTSUnRegisterSessionNotification, 4)
WIN32_IMPL_LINK(WTSRegisterSessionNotificationEx, 12)
WIN32_IMPL_LINK(WTSUnRegisterSessionNotificationEx, 8)
WIN32_IMPL_LINK(WTSQueryUserToken, 8)
WIN32_IMPL_LINK(WTSFreeMemoryExW, 12)
WIN32_IMPL_LINK(WTSFreeMemoryExA, 12)
WIN32_IMPL_LINK(WTSEnumerateProcessesExW, 20)
WIN32_IMPL_LINK(WTSEnumerateProcessesExA, 20)
WIN32_IMPL_LINK(WTSEnumerateListenersW, 20)
WIN32_IMPL_LINK(WTSEnumerateListenersA, 20)
WIN32_IMPL_LINK(WTSQueryListenerConfigW, 20)
WIN32_IMPL_LINK(WTSQueryListenerConfigA, 20)
WIN32_IMPL_LINK(WTSCreateListenerW, 24)
WIN32_IMPL_LINK(WTSCreateListenerA, 24)
WIN32_IMPL_LINK(WTSSetListenerSecurityW, 24)
WIN32_IMPL_LINK(WTSSetListenerSecurityA, 24)
WIN32_IMPL_LINK(WTSGetListenerSecurityW, 32)
WIN32_IMPL_LINK(WTSGetListenerSecurityA, 32)
WIN32_IMPL_LINK(WTSEnableChildSessions, 4)
WIN32_IMPL_LINK(WTSIsChildSessionsEnabled, 4)
WIN32_IMPL_LINK(WTSGetChildSessionId, 4)
WIN32_IMPL_LINK(WTSSetRenderHint, 20)

#pragma endregion abi_methods

#endif
