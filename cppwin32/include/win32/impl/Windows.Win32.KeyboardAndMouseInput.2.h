// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_KeyboardAndMouseInput_2_H
#define WIN32_Windows_Win32_KeyboardAndMouseInput_2_H
#include "win32/impl/Windows.Win32.KeyboardAndMouseInput.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL__TrackMouseEvent(win32::Windows::Win32::KeyboardAndMouseInput::TRACKMOUSEEVENT* lpEventTrack) noexcept;
    intptr_t __stdcall WIN32_IMPL_LoadKeyboardLayoutA(int8_t* pwszKLID, uint32_t Flags) noexcept;
    intptr_t __stdcall WIN32_IMPL_LoadKeyboardLayoutW(uint16_t* pwszKLID, uint32_t Flags) noexcept;
    intptr_t __stdcall WIN32_IMPL_ActivateKeyboardLayout(intptr_t hkl, uint32_t Flags) noexcept;
    int32_t __stdcall WIN32_IMPL_ToUnicodeEx(uint32_t wVirtKey, uint32_t wScanCode, uint8_t* lpKeyState, uint16_t* pwszBuff, int32_t cchBuff, uint32_t wFlags, intptr_t dwhkl) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_UnloadKeyboardLayout(intptr_t hkl) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetKeyboardLayoutNameA(int8_t* pwszKLID) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetKeyboardLayoutNameW(uint16_t* pwszKLID) noexcept;
    int32_t __stdcall WIN32_IMPL_GetKeyboardLayoutList(int32_t nBuff, intptr_t* lpList) noexcept;
    intptr_t __stdcall WIN32_IMPL_GetKeyboardLayout(uint32_t idThread) noexcept;
    int32_t __stdcall WIN32_IMPL_GetMouseMovePointsEx(uint32_t cbSize, win32::Windows::Win32::KeyboardAndMouseInput::MOUSEMOVEPOINT* lppt, win32::Windows::Win32::KeyboardAndMouseInput::MOUSEMOVEPOINT* lpptBuf, int32_t nBufPoints, uint32_t resolution) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_TrackMouseEvent(win32::Windows::Win32::KeyboardAndMouseInput::TRACKMOUSEEVENT* lpEventTrack) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_RegisterHotKey(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, int32_t id, uint32_t fsModifiers, uint32_t vk) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_UnregisterHotKey(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, int32_t id) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SwapMouseButton(win32::Windows::Win32::SystemServices::BOOL fSwap) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetDoubleClickTime() noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetDoubleClickTime(uint32_t param0) noexcept;
    win32::Windows::Win32::WindowsAndMessaging::HWND __stdcall WIN32_IMPL_SetFocus(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::WindowsAndMessaging::HWND __stdcall WIN32_IMPL_GetActiveWindow() noexcept;
    win32::Windows::Win32::WindowsAndMessaging::HWND __stdcall WIN32_IMPL_GetFocus() noexcept;
    uint32_t __stdcall WIN32_IMPL_GetKBCodePage() noexcept;
    int16_t __stdcall WIN32_IMPL_GetKeyState(int32_t nVirtKey) noexcept;
    int16_t __stdcall WIN32_IMPL_GetAsyncKeyState(int32_t vKey) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetKeyboardState(uint8_t* lpKeyState) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetKeyboardState(uint8_t* lpKeyState) noexcept;
    int32_t __stdcall WIN32_IMPL_GetKeyNameTextA(int32_t lParam, int8_t* lpString, int32_t cchSize) noexcept;
    int32_t __stdcall WIN32_IMPL_GetKeyNameTextW(int32_t lParam, uint16_t* lpString, int32_t cchSize) noexcept;
    int32_t __stdcall WIN32_IMPL_GetKeyboardType(int32_t nTypeFlag) noexcept;
    int32_t __stdcall WIN32_IMPL_ToAscii(uint32_t uVirtKey, uint32_t uScanCode, uint8_t* lpKeyState, uint16_t* lpChar, uint32_t uFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_ToAsciiEx(uint32_t uVirtKey, uint32_t uScanCode, uint8_t* lpKeyState, uint16_t* lpChar, uint32_t uFlags, intptr_t dwhkl) noexcept;
    int32_t __stdcall WIN32_IMPL_ToUnicode(uint32_t wVirtKey, uint32_t wScanCode, uint8_t* lpKeyState, uint16_t* pwszBuff, int32_t cchBuff, uint32_t wFlags) noexcept;
    uint32_t __stdcall WIN32_IMPL_OemKeyScan(uint16_t wOemChar) noexcept;
    int16_t __stdcall WIN32_IMPL_VkKeyScanA(int8_t ch) noexcept;
    int16_t __stdcall WIN32_IMPL_VkKeyScanW(uint16_t ch) noexcept;
    int16_t __stdcall WIN32_IMPL_VkKeyScanExA(int8_t ch, intptr_t dwhkl) noexcept;
    int16_t __stdcall WIN32_IMPL_VkKeyScanExW(uint16_t ch, intptr_t dwhkl) noexcept;
    void __stdcall WIN32_IMPL_keybd_event(uint8_t bVk, uint8_t bScan, uint32_t dwFlags, size_t dwExtraInfo) noexcept;
    void __stdcall WIN32_IMPL_mouse_event(uint32_t dwFlags, uint32_t dx, uint32_t dy, uint32_t dwData, size_t dwExtraInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_SendInput(uint32_t cInputs, win32::Windows::Win32::KeyboardAndMouseInput::INPUT* pInputs, int32_t cbSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetLastInputInfo(win32::Windows::Win32::KeyboardAndMouseInput::LASTINPUTINFO* plii) noexcept;
    uint32_t __stdcall WIN32_IMPL_MapVirtualKeyA(uint32_t uCode, uint32_t uMapType) noexcept;
    uint32_t __stdcall WIN32_IMPL_MapVirtualKeyW(uint32_t uCode, uint32_t uMapType) noexcept;
    uint32_t __stdcall WIN32_IMPL_MapVirtualKeyExA(uint32_t uCode, uint32_t uMapType, intptr_t dwhkl) noexcept;
    uint32_t __stdcall WIN32_IMPL_MapVirtualKeyExW(uint32_t uCode, uint32_t uMapType, intptr_t dwhkl) noexcept;
    win32::Windows::Win32::WindowsAndMessaging::HWND __stdcall WIN32_IMPL_GetCapture() noexcept;
    win32::Windows::Win32::WindowsAndMessaging::HWND __stdcall WIN32_IMPL_SetCapture(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ReleaseCapture() noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_EnableWindow(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, win32::Windows::Win32::SystemServices::BOOL bEnable) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_IsWindowEnabled(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DragDetect(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd, win32::Windows::Win32::DisplayDevices::POINT pt) noexcept;
    win32::Windows::Win32::WindowsAndMessaging::HWND __stdcall WIN32_IMPL_SetActiveWindow(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_BlockInput(win32::Windows::Win32::SystemServices::BOOL fBlockIt) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetRawInputData(intptr_t hRawInput, uint32_t uiCommand, void* pData, uint32_t* pcbSize, uint32_t cbSizeHeader) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetRawInputDeviceInfoA(win32::Windows::Win32::SystemServices::HANDLE hDevice, uint32_t uiCommand, void* pData, uint32_t* pcbSize) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetRawInputDeviceInfoW(win32::Windows::Win32::SystemServices::HANDLE hDevice, uint32_t uiCommand, void* pData, uint32_t* pcbSize) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetRawInputBuffer(win32::Windows::Win32::KeyboardAndMouseInput::RAWINPUT* pData, uint32_t* pcbSize, uint32_t cbSizeHeader) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_RegisterRawInputDevices(win32::Windows::Win32::KeyboardAndMouseInput::RAWINPUTDEVICE* pRawInputDevices, uint32_t uiNumDevices, uint32_t cbSize) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetRegisteredRawInputDevices(win32::Windows::Win32::KeyboardAndMouseInput::RAWINPUTDEVICE* pRawInputDevices, uint32_t* puiNumDevices, uint32_t cbSize) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetRawInputDeviceList(win32::Windows::Win32::KeyboardAndMouseInput::RAWINPUTDEVICELIST* pRawInputDeviceList, uint32_t* puiNumDevices, uint32_t cbSize) noexcept;
    win32::Windows::Win32::SystemServices::LRESULT __stdcall WIN32_IMPL_DefRawInputProc(win32::Windows::Win32::KeyboardAndMouseInput::RAWINPUT** paRawInput, int32_t nInput, uint32_t cbSizeHeader) noexcept;
}
WIN32_IMPL_LINK(_TrackMouseEvent, 4)
WIN32_IMPL_LINK(LoadKeyboardLayoutA, 8)
WIN32_IMPL_LINK(LoadKeyboardLayoutW, 8)
WIN32_IMPL_LINK(ActivateKeyboardLayout, 8)
WIN32_IMPL_LINK(ToUnicodeEx, 28)
WIN32_IMPL_LINK(UnloadKeyboardLayout, 4)
WIN32_IMPL_LINK(GetKeyboardLayoutNameA, 4)
WIN32_IMPL_LINK(GetKeyboardLayoutNameW, 4)
WIN32_IMPL_LINK(GetKeyboardLayoutList, 8)
WIN32_IMPL_LINK(GetKeyboardLayout, 4)
WIN32_IMPL_LINK(GetMouseMovePointsEx, 20)
WIN32_IMPL_LINK(TrackMouseEvent, 4)
WIN32_IMPL_LINK(RegisterHotKey, 16)
WIN32_IMPL_LINK(UnregisterHotKey, 8)
WIN32_IMPL_LINK(SwapMouseButton, 4)
WIN32_IMPL_LINK(GetDoubleClickTime, 0)
WIN32_IMPL_LINK(SetDoubleClickTime, 4)
WIN32_IMPL_LINK(SetFocus, 4)
WIN32_IMPL_LINK(GetActiveWindow, 0)
WIN32_IMPL_LINK(GetFocus, 0)
WIN32_IMPL_LINK(GetKBCodePage, 0)
WIN32_IMPL_LINK(GetKeyState, 4)
WIN32_IMPL_LINK(GetAsyncKeyState, 4)
WIN32_IMPL_LINK(GetKeyboardState, 4)
WIN32_IMPL_LINK(SetKeyboardState, 4)
WIN32_IMPL_LINK(GetKeyNameTextA, 12)
WIN32_IMPL_LINK(GetKeyNameTextW, 12)
WIN32_IMPL_LINK(GetKeyboardType, 4)
WIN32_IMPL_LINK(ToAscii, 20)
WIN32_IMPL_LINK(ToAsciiEx, 24)
WIN32_IMPL_LINK(ToUnicode, 24)
WIN32_IMPL_LINK(OemKeyScan, 4)
WIN32_IMPL_LINK(VkKeyScanA, 4)
WIN32_IMPL_LINK(VkKeyScanW, 4)
WIN32_IMPL_LINK(VkKeyScanExA, 8)
WIN32_IMPL_LINK(VkKeyScanExW, 8)
WIN32_IMPL_LINK(keybd_event, 16)
WIN32_IMPL_LINK(mouse_event, 20)
WIN32_IMPL_LINK(SendInput, 12)
WIN32_IMPL_LINK(GetLastInputInfo, 4)
WIN32_IMPL_LINK(MapVirtualKeyA, 8)
WIN32_IMPL_LINK(MapVirtualKeyW, 8)
WIN32_IMPL_LINK(MapVirtualKeyExA, 12)
WIN32_IMPL_LINK(MapVirtualKeyExW, 12)
WIN32_IMPL_LINK(GetCapture, 0)
WIN32_IMPL_LINK(SetCapture, 4)
WIN32_IMPL_LINK(ReleaseCapture, 0)
WIN32_IMPL_LINK(EnableWindow, 8)
WIN32_IMPL_LINK(IsWindowEnabled, 4)
WIN32_IMPL_LINK(DragDetect, 8)
WIN32_IMPL_LINK(SetActiveWindow, 4)
WIN32_IMPL_LINK(BlockInput, 4)
WIN32_IMPL_LINK(GetRawInputData, 20)
WIN32_IMPL_LINK(GetRawInputDeviceInfoA, 16)
WIN32_IMPL_LINK(GetRawInputDeviceInfoW, 16)
WIN32_IMPL_LINK(GetRawInputBuffer, 12)
WIN32_IMPL_LINK(RegisterRawInputDevices, 12)
WIN32_IMPL_LINK(GetRegisteredRawInputDevices, 12)
WIN32_IMPL_LINK(GetRawInputDeviceList, 12)
WIN32_IMPL_LINK(DefRawInputProc, 12)

#pragma endregion abi_methods

#endif
