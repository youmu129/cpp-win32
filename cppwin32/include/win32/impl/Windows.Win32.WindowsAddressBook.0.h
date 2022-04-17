// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsAddressBook_0_H
#define WIN32_Windows_Win32_WindowsAddressBook_0_H
WIN32_EXPORT namespace win32::Windows::Win32::SystemServices
{
    struct BOOL;
}
WIN32_EXPORT namespace win32::Windows::Win32::WindowsAndMessaging
{
    struct HWND;
}
WIN32_EXPORT namespace win32::Windows::Win32::WindowsAddressBook
{
#pragma region enums
    enum class Gender : int32_t
    {
        genderUnspecified = 0,
        genderFemale = 1,
        genderMale = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ADRENTRY;
    struct ADRLIST;
    struct ADRPARM;
    struct DTBLBUTTON;
    struct DTBLCHECKBOX;
    struct DTBLCOMBOBOX;
    struct DTBLDDLBX;
    struct DTBLEDIT;
    struct DTBLGROUPBOX;
    struct DTBLLABEL;
    struct DTBLLBX;
    struct DTBLMVDDLBX;
    struct DTBLMVLISTBOX;
    struct DTBLPAGE;
    struct DTBLRADIOBUTTON;
    struct ENTRYID;
    struct ERROR_NOTIFICATION;
    struct EXTENDED_NOTIFICATION;
    struct FLATENTRY;
    struct FLATENTRYLIST;
    struct FLATMTSIDLIST;
    struct MAPIERROR;
    struct MAPINAMEID;
    struct MAPIUID;
    struct MTSID;
    struct NEWMAIL_NOTIFICATION;
    struct NOTIFICATION;
    struct OBJECT_NOTIFICATION;
    struct SAndRestriction;
    struct SAppTimeArray;
    struct SBinary;
    struct SBinaryArray;
    struct SBitMaskRestriction;
    struct SCommentRestriction;
    struct SComparePropsRestriction;
    struct SContentRestriction;
    struct SCurrencyArray;
    struct SDateTimeArray;
    struct SDoubleArray;
    struct SExistRestriction;
    struct SGuidArray;
    struct SLPSTRArray;
    struct SLargeIntegerArray;
    struct SLongArray;
    struct SNotRestriction;
    struct SOrRestriction;
    struct SPropProblem;
    struct SPropProblemArray;
    struct SPropTagArray;
    struct SPropValue;
    struct SPropertyRestriction;
    struct SRealArray;
    struct SRestriction;
    struct SRow;
    struct SRowSet;
    struct SShortArray;
    struct SSizeRestriction;
    struct SSortOrder;
    struct SSortOrderSet;
    struct SSubRestriction;
    struct STATUS_OBJECT_NOTIFICATION;
    struct SWStringArray;
    struct TABLE_NOTIFICATION;
    struct WABEXTDISPLAY;
    struct WABIMPORTPARAM;
    struct WAB_PARAM;
    union _PV;
    struct _WABACTIONITEM;
    struct _flaglist;
    struct IABContainer;
    struct IAddrBook;
    struct IAttach;
    struct IDistList;
    struct IMAPIAdviseSink;
    struct IMAPIContainer;
    struct IMAPIControl;
    struct IMAPIFolder;
    struct IMAPIProgress;
    struct IMAPIProp;
    struct IMAPIStatus;
    struct IMAPITable;
    struct IMailUser;
    struct IMessage;
    struct IMsgStore;
    struct IProfSect;
    struct IProviderAdmin;
    struct IWABExtInit;
    struct IWABOBJECT_;
    struct IWABObject;
#pragma endregion forward_declarations

#pragma region delegates
    using ALLOCATEBUFFER = int32_t __stdcall(uint32_t, void**);
    using ALLOCATEMORE = int32_t __stdcall(uint32_t, void*, void**);
    using FREEBUFFER = uint32_t __stdcall(void*);
    using LPALLOCATEBUFFER = int32_t __stdcall();
    using LPALLOCATEMORE = int32_t __stdcall();
    using LPFREEBUFFER = uint32_t __stdcall();
    using NOTIFCALLBACK = int32_t __stdcall(void*, uint32_t, Windows::Win32::WindowsAddressBook::NOTIFICATION*);
    using LPNOTIFCALLBACK = int32_t __stdcall();
    using ACCELERATEABSDI = Windows::Win32::SystemServices::BOOL __stdcall(size_t, void*);
    using LPFNABSDI = Windows::Win32::SystemServices::BOOL __stdcall();
    using DISMISSMODELESS = void __stdcall(size_t, void*);
    using LPFNDISMISS = void __stdcall();
    using LPFNBUTTON = int32_t __stdcall(size_t, void*, uint32_t, Windows::Win32::WindowsAddressBook::ENTRYID*, uint32_t);
    using IWABOBJECT_QueryInterface_METHOD = int32_t __stdcall(::win32::guid*, void**);
    using IWABOBJECT_AddRef_METHOD = uint32_t __stdcall();
    using IWABOBJECT_Release_METHOD = uint32_t __stdcall();
    using IWABOBJECT_GetLastError_METHOD = int32_t __stdcall(int32_t, uint32_t, Windows::Win32::WindowsAddressBook::MAPIERROR**);
    using IWABOBJECT_AllocateBuffer_METHOD = int32_t __stdcall(uint32_t, void**);
    using IWABOBJECT_AllocateMore_METHOD = int32_t __stdcall(uint32_t, void*, void**);
    using IWABOBJECT_FreeBuffer_METHOD = int32_t __stdcall(void*);
    using IWABOBJECT_Backup_METHOD = int32_t __stdcall(int8_t*);
    using IWABOBJECT_Import_METHOD = int32_t __stdcall(int8_t*);
    using IWABOBJECT_Find_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, Windows::Win32::WindowsAndMessaging::HWND);
    using IWABOBJECT_VCardDisplay_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, Windows::Win32::WindowsAndMessaging::HWND, int8_t*);
    using IWABOBJECT_LDAPUrl_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, Windows::Win32::WindowsAndMessaging::HWND, uint32_t, int8_t*, Windows::Win32::WindowsAddressBook::IMailUser**);
    using IWABOBJECT_VCardCreate_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, uint32_t, int8_t*, Windows::Win32::WindowsAddressBook::IMailUser*);
    using IWABOBJECT_VCardRetrieve_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, uint32_t, int8_t*, Windows::Win32::WindowsAddressBook::IMailUser**);
    using IWABOBJECT_GetMe_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, uint32_t, uint32_t*, Windows::Win32::WindowsAddressBook::SBinary*, Windows::Win32::WindowsAndMessaging::HWND);
    using IWABOBJECT_SetMe_METHOD = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook*, uint32_t, Windows::Win32::WindowsAddressBook::SBinary, Windows::Win32::WindowsAndMessaging::HWND);
    using WABOPEN = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook**, Windows::Win32::WindowsAddressBook::IWABObject**, Windows::Win32::WindowsAddressBook::WAB_PARAM*, uint32_t);
    using LPWABOPEN = int32_t __stdcall();
    using WABOPENEX = int32_t __stdcall(Windows::Win32::WindowsAddressBook::IAddrBook**, Windows::Win32::WindowsAddressBook::IWABObject**, Windows::Win32::WindowsAddressBook::WAB_PARAM*, uint32_t, Windows::Win32::WindowsAddressBook::ALLOCATEBUFFER**, Windows::Win32::WindowsAddressBook::ALLOCATEMORE**, Windows::Win32::WindowsAddressBook::FREEBUFFER**);
    using LPWABOPENEX = int32_t __stdcall();
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif