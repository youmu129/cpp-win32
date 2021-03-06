// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Mmc_0_H
#define WIN32_Windows_Win32_Mmc_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Mmc
{
#pragma region enums
    enum class DATA_OBJECT_TYPES : int32_t
    {
        CCT_SCOPE = 32768,
        CCT_RESULT = 32769,
        CCT_SNAPIN_MANAGER = 32770,
        CCT_UNINITIALIZED = 65535,
    };
    enum class IconIdentifier : int32_t
    {
        Icon_None = 0,
        Icon_Error = 32513,
        Icon_Question = 32514,
        Icon_Warning = 32515,
        Icon_Information = 32516,
        Icon_First = 32513,
        Icon_Last = 32516,
    };
    enum class MMC_ACTION_TYPE : int32_t
    {
        MMC_ACTION_UNINITIALIZED = -1,
        MMC_ACTION_ID = 0,
        MMC_ACTION_LINK = 1,
        MMC_ACTION_SCRIPT = 2,
    };
    enum class MMC_BUTTON_STATE : int32_t
    {
        ENABLED = 1,
        CHECKED = 2,
        HIDDEN = 4,
        INDETERMINATE = 8,
        BUTTONPRESSED = 16,
    };
    enum class MMC_CONSOLE_VERB : int32_t
    {
        MMC_VERB_NONE = 0,
        MMC_VERB_OPEN = 32768,
        MMC_VERB_COPY = 32769,
        MMC_VERB_PASTE = 32770,
        MMC_VERB_DELETE = 32771,
        MMC_VERB_PROPERTIES = 32772,
        MMC_VERB_RENAME = 32773,
        MMC_VERB_REFRESH = 32774,
        MMC_VERB_PRINT = 32775,
        MMC_VERB_CUT = 32776,
        MMC_VERB_MAX = 32777,
        MMC_VERB_FIRST = 32768,
        MMC_VERB_LAST = 32776,
    };
    enum class MMC_CONTROL_TYPE : int32_t
    {
        TOOLBAR = 0,
        MENUBUTTON = 1,
        COMBOBOXBAR = 2,
    };
    enum class MMC_FILTER_CHANGE_CODE : int32_t
    {
        MFCC_DISABLE = 0,
        MFCC_ENABLE = 1,
        MFCC_VALUE_CHANGE = 2,
    };
    enum class MMC_FILTER_TYPE : int32_t
    {
        MMC_STRING_FILTER = 0,
        MMC_INT_FILTER = 1,
        MMC_FILTER_NOVALUE = 32768,
    };
    enum class MMC_MENU_COMMAND_IDS : int32_t
    {
        MMCC_STANDARD_VIEW_SELECT = -1,
    };
    enum class MMC_NOTIFY_TYPE : int32_t
    {
        MMCN_ACTIVATE = 32769,
        MMCN_ADD_IMAGES = 32770,
        MMCN_BTN_CLICK = 32771,
        MMCN_CLICK = 32772,
        MMCN_COLUMN_CLICK = 32773,
        MMCN_CONTEXTMENU = 32774,
        MMCN_CUTORMOVE = 32775,
        MMCN_DBLCLICK = 32776,
        MMCN_DELETE = 32777,
        MMCN_DESELECT_ALL = 32778,
        MMCN_EXPAND = 32779,
        MMCN_HELP = 32780,
        MMCN_MENU_BTNCLICK = 32781,
        MMCN_MINIMIZED = 32782,
        MMCN_PASTE = 32783,
        MMCN_PROPERTY_CHANGE = 32784,
        MMCN_QUERY_PASTE = 32785,
        MMCN_REFRESH = 32786,
        MMCN_REMOVE_CHILDREN = 32787,
        MMCN_RENAME = 32788,
        MMCN_SELECT = 32789,
        MMCN_SHOW = 32790,
        MMCN_VIEW_CHANGE = 32791,
        MMCN_SNAPINHELP = 32792,
        MMCN_CONTEXTHELP = 32793,
        MMCN_INITOCX = 32794,
        MMCN_FILTER_CHANGE = 32795,
        MMCN_FILTERBTN_CLICK = 32796,
        MMCN_RESTORE_VIEW = 32797,
        MMCN_PRINT = 32798,
        MMCN_PRELOAD = 32799,
        MMCN_LISTPAD = 32800,
        MMCN_EXPANDSYNC = 32801,
        MMCN_COLUMNS_CHANGED = 32802,
        MMCN_CANPASTE_OUTOFPROC = 32803,
    };
    enum class MMC_PROPERTY_ACTION : int32_t
    {
        MMC_PROPACT_DELETING = 1,
        MMC_PROPACT_CHANGING = 2,
        MMC_PROPACT_INITIALIZED = 3,
    };
    enum class MMC_RESULT_VIEW_STYLE : int32_t
    {
        MMC_SINGLESEL = 1,
        MMC_SHOWSELALWAYS = 2,
        MMC_NOSORTHEADER = 4,
        MMC_ENSUREFOCUSVISIBLE = 8,
    };
    enum class MMC_SCOPE_ITEM_STATE : int32_t
    {
        MMC_SCOPE_ITEM_STATE_NORMAL = 1,
        MMC_SCOPE_ITEM_STATE_BOLD = 2,
        MMC_SCOPE_ITEM_STATE_EXPANDEDONCE = 3,
    };
    enum class MMC_TASK_DISPLAY_TYPE : int32_t
    {
        MMC_TASK_DISPLAY_UNINITIALIZED = 0,
        MMC_TASK_DISPLAY_TYPE_SYMBOL = 1,
        MMC_TASK_DISPLAY_TYPE_VANILLA_GIF = 2,
        MMC_TASK_DISPLAY_TYPE_CHOCOLATE_GIF = 3,
        MMC_TASK_DISPLAY_TYPE_BITMAP = 4,
    };
    enum class MMC_VIEW_TYPE : int32_t
    {
        MMC_VIEW_TYPE_LIST = 0,
        MMC_VIEW_TYPE_HTML = 1,
        MMC_VIEW_TYPE_OCX = 2,
    };
    enum class _DocumentMode : int32_t
    {
        DocumentMode_Author = 0,
        DocumentMode_User = 1,
        DocumentMode_User_MDI = 2,
        DocumentMode_User_SDI = 3,
    };
    enum class _ExportListOptions : int32_t
    {
        ExportListOptions_Default = 0,
        ExportListOptions_Unicode = 1,
        ExportListOptions_TabDelimited = 2,
        ExportListOptions_SelectedItemsOnly = 4,
    };
    enum class _ListViewMode : int32_t
    {
        ListMode_Small_Icons = 0,
        ListMode_Large_Icons = 1,
        ListMode_List = 2,
        ListMode_Detail = 3,
        ListMode_Filtered = 4,
    };
    enum class _ViewOptions : int32_t
    {
        ViewOption_Default = 0,
        ViewOption_ScopeTreeHidden = 1,
        ViewOption_NoToolBars = 2,
        ViewOption_NotPersistable = 4,
        ViewOption_ActionPaneHidden = 8,
    };
    enum class __MIDL___MIDL_itf_mmc_0000_0006_0001 : int32_t
    {
        CCM_INSERTIONPOINTID_MASK_SPECIAL = -65536,
        CCM_INSERTIONPOINTID_MASK_SHARED = -2147483648,
        CCM_INSERTIONPOINTID_MASK_CREATE_PRIMARY = 1073741824,
        CCM_INSERTIONPOINTID_MASK_ADD_PRIMARY = 536870912,
        CCM_INSERTIONPOINTID_MASK_ADD_3RDPARTY = 268435456,
        CCM_INSERTIONPOINTID_MASK_RESERVED = 268369920,
        CCM_INSERTIONPOINTID_MASK_FLAGINDEX = 31,
        CCM_INSERTIONPOINTID_PRIMARY_TOP = -1610612736,
        CCM_INSERTIONPOINTID_PRIMARY_NEW = -1610612735,
        CCM_INSERTIONPOINTID_PRIMARY_TASK = -1610612734,
        CCM_INSERTIONPOINTID_PRIMARY_VIEW = -1610612733,
        CCM_INSERTIONPOINTID_PRIMARY_HELP = -1610612732,
        CCM_INSERTIONPOINTID_3RDPARTY_NEW = -1879048191,
        CCM_INSERTIONPOINTID_3RDPARTY_TASK = -1879048190,
        CCM_INSERTIONPOINTID_ROOT_MENU = -2147483648,
    };
    enum class __MIDL___MIDL_itf_mmc_0000_0006_0002 : int32_t
    {
        CCM_INSERTIONALLOWED_TOP = 1,
        CCM_INSERTIONALLOWED_NEW = 2,
        CCM_INSERTIONALLOWED_TASK = 4,
        CCM_INSERTIONALLOWED_VIEW = 8,
    };
    enum class __MIDL___MIDL_itf_mmc_0000_0006_0003 : int32_t
    {
        CCM_COMMANDID_MASK_RESERVED = -65536,
    };
    enum class __MIDL___MIDL_itf_mmc_0000_0006_0004 : int32_t
    {
        CCM_SPECIAL_SEPARATOR = 1,
        CCM_SPECIAL_SUBMENU = 2,
        CCM_SPECIAL_DEFAULT_ITEM = 4,
        CCM_SPECIAL_INSERTION_POINT = 8,
        CCM_SPECIAL_TESTONLY = 16,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CONTEXTMENUITEM;
    struct CONTEXTMENUITEM2;
    struct MENUBUTTONDATA;
    struct MMCBUTTON;
    struct MMC_COLUMN_DATA;
    struct MMC_COLUMN_SET_DATA;
    struct MMC_EXPANDSYNC_STRUCT;
    struct MMC_EXT_VIEW_DATA;
    struct MMC_FILTERDATA;
    struct MMC_LISTPAD_INFO;
    struct MMC_RESTORE_VIEW;
    struct MMC_SNAPIN_PROPERTY;
    struct MMC_SORT_DATA;
    struct MMC_SORT_SET_DATA;
    struct MMC_TASK;
    struct MMC_TASK_DISPLAY_BITMAP;
    struct MMC_TASK_DISPLAY_OBJECT;
    struct MMC_TASK_DISPLAY_SYMBOL;
    struct MMC_VISIBLE_COLUMNS;
    struct RDCOMPARE;
    struct RDITEMHDR;
    struct RESULTDATAITEM;
    struct RESULTFINDINFO;
    struct RESULT_VIEW_TYPE_INFO;
    struct SCOPEDATAITEM;
    struct SColumnSetID;
    struct SMMCDataObjects;
    struct SMMCObjectTypes;
    struct SNodeID;
    struct SNodeID2;
    struct AppEvents;
    struct AppEventsDHTMLConnector;
    struct Application;
    struct Column;
    struct Columns;
    struct ConsolePower;
    struct ContextMenu;
    struct Document;
    struct Extension;
    struct Extensions;
    struct Frame;
    struct IColumnData;
    struct IComponent;
    struct IComponent2;
    struct IComponentData;
    struct IComponentData2;
    struct IConsole;
    struct IConsole2;
    struct IConsole3;
    struct IConsoleNameSpace;
    struct IConsoleNameSpace2;
    struct IConsolePower;
    struct IConsolePowerSink;
    struct IConsoleVerb;
    struct IContextMenuCallback;
    struct IContextMenuCallback2;
    struct IContextMenuProvider;
    struct IControlbar;
    struct IDisplayHelp;
    struct IEnumTASK;
    struct IExtendContextMenu;
    struct IExtendControlbar;
    struct IExtendPropertySheet;
    struct IExtendPropertySheet2;
    struct IExtendTaskPad;
    struct IExtendView;
    struct IHeaderCtrl;
    struct IHeaderCtrl2;
    struct IImageList;
    struct IMMCVersionInfo;
    struct IMenuButton;
    struct IMessageView;
    struct INodeProperties;
    struct IPropertySheetCallback;
    struct IPropertySheetProvider;
    struct IRequiredExtensions;
    struct IResultData;
    struct IResultData2;
    struct IResultDataCompare;
    struct IResultDataCompareEx;
    struct IResultOwnerData;
    struct ISnapinAbout;
    struct ISnapinHelp;
    struct ISnapinHelp2;
    struct ISnapinProperties;
    struct ISnapinPropertiesCallback;
    struct IStringTable;
    struct IToolbar;
    struct IViewExtensionCallback;
    struct MMCVersionInfo;
    struct MenuItem;
    struct Node;
    struct Nodes;
    struct Properties;
    struct Property;
    struct ScopeNamespace;
    struct SnapIn;
    struct SnapIns;
    struct View;
    struct Views;
    struct _AppEvents;
    struct _Application;
    struct _EventConnector;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::AppEvents>{ 0xFC7A4252,0x78AC,0x4532,{ 0x8C,0x5A,0x56,0x3C,0xFE,0x13,0x88,0x63 } }; // FC7A4252-78AC-4532-8C5A-563CFE138863
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::AppEventsDHTMLConnector>{ 0xADE6444B,0xC91F,0x4E37,{ 0x92,0xA4,0x5B,0xB4,0x30,0xA3,0x33,0x40 } }; // ADE6444B-C91F-4E37-92A4-5BB430A33340
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Application>{ 0x49B2791A,0xB1AE,0x4C90,{ 0x9B,0x8E,0xE8,0x60,0xBA,0x07,0xF8,0x89 } }; // 49B2791A-B1AE-4C90-9B8E-E860BA07F889
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Column>{ 0xFD1C5F63,0x2B16,0x4D06,{ 0x9A,0xB3,0xF4,0x53,0x50,0xB9,0x40,0xAB } }; // FD1C5F63-2B16-4D06-9AB3-F45350B940AB
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Columns>{ 0x383D4D97,0xFC44,0x478B,{ 0xB1,0x39,0x63,0x23,0xDC,0x48,0x61,0x1C } }; // 383D4D97-FC44-478B-B139-6323DC48611C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ConsolePower>{ 0xF0285374,0xDFF1,0x11D3,{ 0xB4,0x33,0x00,0xC0,0x4F,0x8E,0xCD,0x78 } }; // F0285374-DFF1-11D3-B433-00C04F8ECD78
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ContextMenu>{ 0xDAB39CE0,0x25E6,0x4E07,{ 0x83,0x62,0xBA,0x9C,0x95,0x70,0x65,0x45 } }; // DAB39CE0-25E6-4E07-8362-BA9C95706545
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Document>{ 0x225120D6,0x1E0F,0x40A3,{ 0x93,0xFE,0x10,0x79,0xE6,0xA8,0x01,0x7B } }; // 225120D6-1E0F-40A3-93FE-1079E6A8017B
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Extension>{ 0xAD4D6CA6,0x912F,0x409B,{ 0xA2,0x6E,0x7F,0xD2,0x34,0xAE,0xF5,0x42 } }; // AD4D6CA6-912F-409B-A26E-7FD234AEF542
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Extensions>{ 0x82DBEA43,0x8CA4,0x44BC,{ 0xA2,0xCA,0xD1,0x87,0x41,0x05,0x9E,0xC8 } }; // 82DBEA43-8CA4-44BC-A2CA-D18741059EC8
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Frame>{ 0xE5E2D970,0x5BB3,0x4306,{ 0x88,0x04,0xB0,0x96,0x8A,0x31,0xC8,0xE6 } }; // E5E2D970-5BB3-4306-8804-B0968A31C8E6
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IColumnData>{ 0x547C1354,0x024D,0x11D3,{ 0xA7,0x07,0x00,0xC0,0x4F,0x8E,0xF4,0xCB } }; // 547C1354-024D-11D3-A707-00C04F8EF4CB
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IComponent>{ 0x43136EB2,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB2-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IComponent2>{ 0x79A2D615,0x4A10,0x4ED4,{ 0x8C,0x65,0x86,0x33,0xF9,0x33,0x50,0x95 } }; // 79A2D615-4A10-4ED4-8C65-8633F9335095
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IComponentData>{ 0x955AB28A,0x5218,0x11D0,{ 0xA9,0x85,0x00,0xC0,0x4F,0xD8,0xD5,0x65 } }; // 955AB28A-5218-11D0-A985-00C04FD8D565
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IComponentData2>{ 0xCCA0F2D2,0x82DE,0x41B5,{ 0xBF,0x47,0x3B,0x20,0x76,0x27,0x3D,0x5C } }; // CCA0F2D2-82DE-41B5-BF47-3B2076273D5C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsole>{ 0x43136EB1,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB1-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsole2>{ 0x103D842A,0xAA63,0x11D1,{ 0xA7,0xE1,0x00,0xC0,0x4F,0xD8,0xD5,0x65 } }; // 103D842A-AA63-11D1-A7E1-00C04FD8D565
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsole3>{ 0x4F85EFDB,0xD0E1,0x498C,{ 0x8D,0x4A,0xD0,0x10,0xDF,0xDD,0x40,0x4F } }; // 4F85EFDB-D0E1-498C-8D4A-D010DFDD404F
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsoleNameSpace>{ 0xBEDEB620,0xF24D,0x11CF,{ 0x8A,0xFC,0x00,0xAA,0x00,0x3C,0xA9,0xF6 } }; // BEDEB620-F24D-11CF-8AFC-00AA003CA9F6
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsoleNameSpace2>{ 0x255F18CC,0x65DB,0x11D1,{ 0xA7,0xDC,0x00,0xC0,0x4F,0xD8,0xD5,0x65 } }; // 255F18CC-65DB-11D1-A7DC-00C04FD8D565
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsolePower>{ 0x1CFBDD0E,0x62CA,0x49CE,{ 0xA3,0xAF,0xDB,0xB2,0xDE,0x61,0xB0,0x68 } }; // 1CFBDD0E-62CA-49CE-A3AF-DBB2DE61B068
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsolePowerSink>{ 0x3333759F,0xFE4F,0x4975,{ 0xB1,0x43,0xFE,0xC0,0xA5,0xDD,0x6D,0x65 } }; // 3333759F-FE4F-4975-B143-FEC0A5DD6D65
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IConsoleVerb>{ 0xE49F7A60,0x74AF,0x11D0,{ 0xA2,0x86,0x00,0xC0,0x4F,0xD8,0xFE,0x93 } }; // E49F7A60-74AF-11D0-A286-00C04FD8FE93
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IContextMenuCallback>{ 0x43136EB7,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB7-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IContextMenuCallback2>{ 0xE178BC0E,0x2ED0,0x4B5E,{ 0x80,0x97,0x42,0xC9,0x08,0x7E,0x8B,0x33 } }; // E178BC0E-2ED0-4B5E-8097-42C9087E8B33
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IContextMenuProvider>{ 0x43136EB6,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB6-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IControlbar>{ 0x69FB811E,0x6C1C,0x11D0,{ 0xA2,0xCB,0x00,0xC0,0x4F,0xD9,0x09,0xDD } }; // 69FB811E-6C1C-11D0-A2CB-00C04FD909DD
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IDisplayHelp>{ 0xCC593830,0xB926,0x11D1,{ 0x80,0x63,0x00,0x00,0xF8,0x75,0xA9,0xCE } }; // CC593830-B926-11D1-8063-0000F875A9CE
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IEnumTASK>{ 0x338698B1,0x5A02,0x11D1,{ 0x9F,0xEC,0x00,0x60,0x08,0x32,0xDB,0x4A } }; // 338698B1-5A02-11D1-9FEC-00600832DB4A
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IExtendContextMenu>{ 0x4F3B7A4F,0xCFAC,0x11CF,{ 0xB8,0xE3,0x00,0xC0,0x4F,0xD8,0xD5,0xB0 } }; // 4F3B7A4F-CFAC-11CF-B8E3-00C04FD8D5B0
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IExtendControlbar>{ 0x49506520,0x6F40,0x11D0,{ 0xA9,0x8B,0x00,0xC0,0x4F,0xD8,0xD5,0x65 } }; // 49506520-6F40-11D0-A98B-00C04FD8D565
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IExtendPropertySheet>{ 0x85DE64DC,0xEF21,0x11CF,{ 0xA2,0x85,0x00,0xC0,0x4F,0xD8,0xDB,0xE6 } }; // 85DE64DC-EF21-11CF-A285-00C04FD8DBE6
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IExtendPropertySheet2>{ 0xB7A87232,0x4A51,0x11D1,{ 0xA7,0xEA,0x00,0xC0,0x4F,0xD9,0x09,0xDD } }; // B7A87232-4A51-11D1-A7EA-00C04FD909DD
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IExtendTaskPad>{ 0x8DEE6511,0x554D,0x11D1,{ 0x9F,0xEA,0x00,0x60,0x08,0x32,0xDB,0x4A } }; // 8DEE6511-554D-11D1-9FEA-00600832DB4A
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IExtendView>{ 0x89995CEE,0xD2ED,0x4C0E,{ 0xAE,0x5E,0xDF,0x7E,0x76,0xF3,0xFA,0x53 } }; // 89995CEE-D2ED-4C0E-AE5E-DF7E76F3FA53
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IHeaderCtrl>{ 0x43136EB3,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB3-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IHeaderCtrl2>{ 0x9757ABB8,0x1B32,0x11D1,{ 0xA7,0xCE,0x00,0xC0,0x4F,0xD8,0xD5,0x65 } }; // 9757ABB8-1B32-11D1-A7CE-00C04FD8D565
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IImageList>{ 0x43136EB8,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB8-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IMMCVersionInfo>{ 0xA8D2C5FE,0xCDCB,0x4B9D,{ 0xBD,0xE5,0xA2,0x73,0x43,0xFF,0x54,0xBC } }; // A8D2C5FE-CDCB-4B9D-BDE5-A27343FF54BC
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IMenuButton>{ 0x951ED750,0xD080,0x11D0,{ 0xB1,0x97,0x00,0x00,0x00,0x00,0x00,0x00 } }; // 951ED750-D080-11D0-B197-000000000000
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IMessageView>{ 0x80F94174,0xFCCC,0x11D2,{ 0xB9,0x91,0x00,0xC0,0x4F,0x8E,0xCD,0x78 } }; // 80F94174-FCCC-11D2-B991-00C04F8ECD78
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::INodeProperties>{ 0x15BC4D24,0xA522,0x4406,{ 0xAA,0x55,0x07,0x49,0x53,0x7A,0x68,0x65 } }; // 15BC4D24-A522-4406-AA55-0749537A6865
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IPropertySheetCallback>{ 0x85DE64DD,0xEF21,0x11CF,{ 0xA2,0x85,0x00,0xC0,0x4F,0xD8,0xDB,0xE6 } }; // 85DE64DD-EF21-11CF-A285-00C04FD8DBE6
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IPropertySheetProvider>{ 0x85DE64DE,0xEF21,0x11CF,{ 0xA2,0x85,0x00,0xC0,0x4F,0xD8,0xDB,0xE6 } }; // 85DE64DE-EF21-11CF-A285-00C04FD8DBE6
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IRequiredExtensions>{ 0x72782D7A,0xA4A0,0x11D1,{ 0xAF,0x0F,0x00,0xC0,0x4F,0xB6,0xDD,0x2C } }; // 72782D7A-A4A0-11D1-AF0F-00C04FB6DD2C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IResultData>{ 0x31DA5FA0,0xE0EB,0x11CF,{ 0x9F,0x21,0x00,0xAA,0x00,0x3C,0xA9,0xF6 } }; // 31DA5FA0-E0EB-11CF-9F21-00AA003CA9F6
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IResultData2>{ 0x0F36E0EB,0xA7F1,0x4A81,{ 0xBE,0x5A,0x92,0x47,0xF7,0xDE,0x4B,0x1B } }; // 0F36E0EB-A7F1-4A81-BE5A-9247F7DE4B1B
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IResultDataCompare>{ 0xE8315A52,0x7A1A,0x11D0,{ 0xA2,0xD2,0x00,0xC0,0x4F,0xD9,0x09,0xDD } }; // E8315A52-7A1A-11D0-A2D2-00C04FD909DD
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IResultDataCompareEx>{ 0x96933476,0x0251,0x11D3,{ 0xAE,0xB0,0x00,0xC0,0x4F,0x8E,0xCD,0x78 } }; // 96933476-0251-11D3-AEB0-00C04F8ECD78
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IResultOwnerData>{ 0x9CB396D8,0xEA83,0x11D0,{ 0xAE,0xF1,0x00,0xC0,0x4F,0xB6,0xDD,0x2C } }; // 9CB396D8-EA83-11D0-AEF1-00C04FB6DD2C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ISnapinAbout>{ 0x1245208C,0xA151,0x11D0,{ 0xA7,0xD7,0x00,0xC0,0x4F,0xD9,0x09,0xDD } }; // 1245208C-A151-11D0-A7D7-00C04FD909DD
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ISnapinHelp>{ 0xA6B15ACE,0xDF59,0x11D0,{ 0xA7,0xDD,0x00,0xC0,0x4F,0xD9,0x09,0xDD } }; // A6B15ACE-DF59-11D0-A7DD-00C04FD909DD
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ISnapinHelp2>{ 0x4861A010,0x20F9,0x11D2,{ 0xA5,0x10,0x00,0xC0,0x4F,0xB6,0xDD,0x2C } }; // 4861A010-20F9-11D2-A510-00C04FB6DD2C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ISnapinProperties>{ 0xF7889DA9,0x4A02,0x4837,{ 0xBF,0x89,0x1A,0x6F,0x2A,0x02,0x10,0x10 } }; // F7889DA9-4A02-4837-BF89-1A6F2A021010
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ISnapinPropertiesCallback>{ 0xA50FA2E5,0x7E61,0x45EB,{ 0xA8,0xD4,0x9A,0x07,0xB3,0xE8,0x51,0xA8 } }; // A50FA2E5-7E61-45EB-A8D4-9A07B3E851A8
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IStringTable>{ 0xDE40B7A4,0x0F65,0x11D2,{ 0x8E,0x25,0x00,0xC0,0x4F,0x8E,0xCD,0x78 } }; // DE40B7A4-0F65-11D2-8E25-00C04F8ECD78
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IToolbar>{ 0x43136EB9,0xD36C,0x11CF,{ 0xAD,0xBC,0x00,0xAA,0x00,0xA8,0x00,0x33 } }; // 43136EB9-D36C-11CF-ADBC-00AA00A80033
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::IViewExtensionCallback>{ 0x34DD928A,0x7599,0x41E5,{ 0x9F,0x5E,0xD6,0xBC,0x30,0x62,0xC2,0xDA } }; // 34DD928A-7599-41E5-9F5E-D6BC3062C2DA
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::MMCVersionInfo>{ 0xD6FEDB1D,0xCF21,0x4BD9,{ 0xAF,0x3B,0xC5,0x46,0x8E,0x9C,0x66,0x84 } }; // D6FEDB1D-CF21-4BD9-AF3B-C5468E9C6684
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::MenuItem>{ 0x0178FAD1,0xB361,0x4B27,{ 0x96,0xAD,0x67,0xC5,0x7E,0xBF,0x2E,0x1D } }; // 0178FAD1-B361-4B27-96AD-67C57EBF2E1D
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Node>{ 0xF81ED800,0x7839,0x4447,{ 0x94,0x5D,0x8E,0x15,0xDA,0x59,0xCA,0x55 } }; // F81ED800-7839-4447-945D-8E15DA59CA55
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Nodes>{ 0x313B01DF,0xB22F,0x4D42,{ 0xB1,0xB8,0x48,0x3C,0xDC,0xF5,0x1D,0x35 } }; // 313B01DF-B22F-4D42-B1B8-483CDCF51D35
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Properties>{ 0x2886ABC2,0xA425,0x42B2,{ 0x91,0xC6,0xE2,0x5C,0x0E,0x04,0x58,0x1C } }; // 2886ABC2-A425-42B2-91C6-E25C0E04581C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Property>{ 0x4600C3A5,0xE301,0x41D8,{ 0xB6,0xD0,0xEF,0x2E,0x42,0x12,0xE0,0xCA } }; // 4600C3A5-E301-41D8-B6D0-EF2E4212E0CA
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::ScopeNamespace>{ 0xEBBB48DC,0x1A3B,0x4D86,{ 0xB7,0x86,0xC2,0x1B,0x28,0x38,0x90,0x12 } }; // EBBB48DC-1A3B-4D86-B786-C21B28389012
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::SnapIn>{ 0x3BE910F6,0x3459,0x49C6,{ 0xA1,0xBB,0x41,0xE6,0xBE,0x9D,0xF3,0xEA } }; // 3BE910F6-3459-49C6-A1BB-41E6BE9DF3EA
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::SnapIns>{ 0x2EF3DE1D,0xB12A,0x49D1,{ 0x92,0xC5,0x0B,0x00,0x79,0x87,0x68,0xF1 } }; // 2EF3DE1D-B12A-49D1-92C5-0B00798768F1
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::View>{ 0x6EFC2DA2,0xB38C,0x457E,{ 0x9A,0xBB,0xED,0x2D,0x18,0x9B,0x8C,0x38 } }; // 6EFC2DA2-B38C-457E-9ABB-ED2D189B8C38
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::Views>{ 0xD6B8C29D,0xA1FF,0x4D72,{ 0xAA,0xB0,0xE3,0x81,0xE9,0xB9,0x33,0x8D } }; // D6B8C29D-A1FF-4D72-AAB0-E381E9B9338D
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::_AppEvents>{ 0xDE46CBDD,0x53F5,0x4635,{ 0xAF,0x54,0x4F,0xE7,0x1E,0x92,0x3D,0x3F } }; // DE46CBDD-53F5-4635-AF54-4FE71E923D3F
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::_Application>{ 0xA3AFB9CC,0xB653,0x4741,{ 0x86,0xAB,0xF0,0x47,0x0E,0xC1,0x38,0x4C } }; // A3AFB9CC-B653-4741-86AB-F0470EC1384C
    template <> inline constexpr guid guid_v<Windows::Win32::Mmc::_EventConnector>{ 0xC0BCCD30,0xDE44,0x4528,{ 0x84,0x03,0xA0,0x5A,0x6A,0x1C,0xC8,0xEA } }; // C0BCCD30-DE44-4528-8403-A05A6A1CC8EA
#pragma endregion guids

}
#endif
