// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_CoreAudio_H
#define WIN32_Windows_Win32_CoreAudio_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.CoreAudio.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::CoreAudio
{
#pragma region methods
    inline uint32_t mciSendCommandA(uint32_t mciId, uint32_t uMsg, size_t dwParam1, size_t dwParam2)
    {
        auto win32_impl_result = WIN32_IMPL_mciSendCommandA(mciId, uMsg, dwParam1, dwParam2);
        return win32_impl_result;
    }
    inline uint32_t mciSendCommandW(uint32_t mciId, uint32_t uMsg, size_t dwParam1, size_t dwParam2)
    {
        auto win32_impl_result = WIN32_IMPL_mciSendCommandW(mciId, uMsg, dwParam1, dwParam2);
        return win32_impl_result;
    }
    inline uint32_t mciSendStringA(int8_t* lpstrCommand, int8_t* lpstrReturnString, uint32_t uReturnLength, Windows::Win32::WindowsAndMessaging::HWND hwndCallback)
    {
        auto win32_impl_result = WIN32_IMPL_mciSendStringA(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback);
        return win32_impl_result;
    }
    inline uint32_t mciSendStringW(uint16_t* lpstrCommand, uint16_t* lpstrReturnString, uint32_t uReturnLength, Windows::Win32::WindowsAndMessaging::HWND hwndCallback)
    {
        auto win32_impl_result = WIN32_IMPL_mciSendStringW(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback);
        return win32_impl_result;
    }
    inline uint32_t mciGetDeviceIDA(int8_t* pszDevice)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetDeviceIDA(pszDevice);
        return win32_impl_result;
    }
    inline uint32_t mciGetDeviceIDW(uint16_t* pszDevice)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetDeviceIDW(pszDevice);
        return win32_impl_result;
    }
    inline uint32_t mciGetDeviceIDFromElementIDA(uint32_t dwElementID, int8_t* lpstrType)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetDeviceIDFromElementIDA(dwElementID, lpstrType);
        return win32_impl_result;
    }
    inline uint32_t mciGetDeviceIDFromElementIDW(uint32_t dwElementID, uint16_t* lpstrType)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetDeviceIDFromElementIDW(dwElementID, lpstrType);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL mciGetErrorStringA(uint32_t mcierr, int8_t* pszText, uint32_t cchText)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetErrorStringA(mcierr, pszText, cchText);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL mciGetErrorStringW(uint32_t mcierr, uint16_t* pszText, uint32_t cchText)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetErrorStringW(mcierr, pszText, cchText);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL mciSetYieldProc(uint32_t mciId, Windows::Win32::CoreAudio::YIELDPROC* fpYieldProc, uint32_t dwYieldData)
    {
        auto win32_impl_result = WIN32_IMPL_mciSetYieldProc(mciId, fpYieldProc, dwYieldData);
        return win32_impl_result;
    }
    inline intptr_t mciGetCreatorTask(uint32_t mciId)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetCreatorTask(mciId);
        return win32_impl_result;
    }
    inline Windows::Win32::CoreAudio::YIELDPROC* mciGetYieldProc(uint32_t mciId, uint32_t* pdwYieldData)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetYieldProc(mciId, pdwYieldData);
        return win32_impl_result;
    }
    inline size_t mciGetDriverData(uint32_t wDeviceID)
    {
        auto win32_impl_result = WIN32_IMPL_mciGetDriverData(wDeviceID);
        return win32_impl_result;
    }
    inline uint32_t mciLoadCommandResource(Windows::Win32::SystemServices::HANDLE hInstance, uint16_t* lpResName, uint32_t wType)
    {
        auto win32_impl_result = WIN32_IMPL_mciLoadCommandResource(hInstance, lpResName, wType);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL mciSetDriverData(uint32_t wDeviceID, size_t dwData)
    {
        auto win32_impl_result = WIN32_IMPL_mciSetDriverData(wDeviceID, dwData);
        return win32_impl_result;
    }
    inline uint32_t mciDriverYield(uint32_t wDeviceID)
    {
        auto win32_impl_result = WIN32_IMPL_mciDriverYield(wDeviceID);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL mciDriverNotify(Windows::Win32::SystemServices::HANDLE hwndCallback, uint32_t wDeviceID, uint32_t uStatus)
    {
        auto win32_impl_result = WIN32_IMPL_mciDriverNotify(hwndCallback, wDeviceID, uStatus);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL mciFreeCommandResource(uint32_t wTable)
    {
        auto win32_impl_result = WIN32_IMPL_mciFreeCommandResource(wTable);
        return win32_impl_result;
    }
    inline uint32_t KsCreateAllocator(Windows::Win32::SystemServices::HANDLE ConnectionHandle, Windows::Win32::CoreAudio::KSALLOCATOR_FRAMING* AllocatorFraming, intptr_t* AllocatorHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreateAllocator(ConnectionHandle, AllocatorFraming, AllocatorHandle);
        return win32_impl_result;
    }
    inline uint32_t KsCreateClock(Windows::Win32::SystemServices::HANDLE ConnectionHandle, Windows::Win32::CoreAudio::KSCLOCK_CREATE* ClockCreate, intptr_t* ClockHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreateClock(ConnectionHandle, ClockCreate, ClockHandle);
        return win32_impl_result;
    }
    inline uint32_t KsCreatePin(Windows::Win32::SystemServices::HANDLE FilterHandle, Windows::Win32::CoreAudio::KSPIN_CONNECT* Connect, uint32_t DesiredAccess, intptr_t* ConnectionHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreatePin(FilterHandle, Connect, DesiredAccess, ConnectionHandle);
        return win32_impl_result;
    }
    inline uint32_t KsCreateTopologyNode(Windows::Win32::SystemServices::HANDLE ParentHandle, Windows::Win32::CoreAudio::KSNODE_CREATE* NodeCreate, uint32_t DesiredAccess, intptr_t* NodeHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreateTopologyNode(ParentHandle, NodeCreate, DesiredAccess, NodeHandle);
        return win32_impl_result;
    }
    inline int32_t KsCreateAllocator2(Windows::Win32::SystemServices::HANDLE ConnectionHandle, Windows::Win32::CoreAudio::KSALLOCATOR_FRAMING* AllocatorFraming, intptr_t* AllocatorHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreateAllocator2(ConnectionHandle, AllocatorFraming, AllocatorHandle);
        return win32_impl_result;
    }
    inline int32_t KsCreateClock2(Windows::Win32::SystemServices::HANDLE ConnectionHandle, Windows::Win32::CoreAudio::KSCLOCK_CREATE* ClockCreate, intptr_t* ClockHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreateClock2(ConnectionHandle, ClockCreate, ClockHandle);
        return win32_impl_result;
    }
    inline int32_t KsCreatePin2(Windows::Win32::SystemServices::HANDLE FilterHandle, Windows::Win32::CoreAudio::KSPIN_CONNECT* Connect, uint32_t DesiredAccess, intptr_t* ConnectionHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreatePin2(FilterHandle, Connect, DesiredAccess, ConnectionHandle);
        return win32_impl_result;
    }
    inline int32_t KsCreateTopologyNode2(Windows::Win32::SystemServices::HANDLE ParentHandle, Windows::Win32::CoreAudio::KSNODE_CREATE* NodeCreate, uint32_t DesiredAccess, intptr_t* NodeHandle)
    {
        auto win32_impl_result = WIN32_IMPL_KsCreateTopologyNode2(ParentHandle, NodeCreate, DesiredAccess, NodeHandle);
        return win32_impl_result;
    }
    inline int32_t ActivateAudioInterfaceAsync(uint16_t* deviceInterfacePath, ::win32::guid* riid, Windows::Win32::StructuredStorage::PROPVARIANT* activationParams, Windows::Win32::CoreAudio::IActivateAudioInterfaceCompletionHandler* completionHandler, Windows::Win32::CoreAudio::IActivateAudioInterfaceAsyncOperation** activationOperation)
    {
        auto win32_impl_result = WIN32_IMPL_ActivateAudioInterfaceAsync(deviceInterfacePath, riid, activationParams, completionHandler, activationOperation);
        return win32_impl_result;
    }

    inline constexpr int32_t KSPROPERTY_MEMORY_TRANSPORT = 1;
#pragma endregion methods

}
#endif
