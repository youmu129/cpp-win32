// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DirectManipulation_0_H
#define WIN32_Windows_Win32_DirectManipulation_0_H
WIN32_EXPORT namespace win32::Windows::Win32::DirectManipulation
{
#pragma region enums
    enum class DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION : int32_t
    {
        DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_STOP = 0,
        DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_FORWARD = 1,
        DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_REVERSE = 2,
    };
    enum class DIRECTMANIPULATION_CONFIGURATION : int32_t
    {
        DIRECTMANIPULATION_CONFIGURATION_NONE = 0,
        DIRECTMANIPULATION_CONFIGURATION_INTERACTION = 1,
        DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_X = 2,
        DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_Y = 4,
        DIRECTMANIPULATION_CONFIGURATION_SCALING = 16,
        DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_INERTIA = 32,
        DIRECTMANIPULATION_CONFIGURATION_SCALING_INERTIA = 128,
        DIRECTMANIPULATION_CONFIGURATION_RAILS_X = 256,
        DIRECTMANIPULATION_CONFIGURATION_RAILS_Y = 512,
    };
    enum class DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION : int32_t
    {
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_VERTICAL = 1,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_HORIZONTAL = 2,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_SELECT_ONLY = 16,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_SELECT_DRAG = 32,
        DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_HOLD_DRAG = 64,
    };
    enum class DIRECTMANIPULATION_DRAG_DROP_STATUS : int32_t
    {
        DIRECTMANIPULATION_DRAG_DROP_READY = 0,
        DIRECTMANIPULATION_DRAG_DROP_PRESELECT = 1,
        DIRECTMANIPULATION_DRAG_DROP_SELECTING = 2,
        DIRECTMANIPULATION_DRAG_DROP_DRAGGING = 3,
        DIRECTMANIPULATION_DRAG_DROP_CANCELLED = 4,
        DIRECTMANIPULATION_DRAG_DROP_COMMITTED = 5,
    };
    enum class DIRECTMANIPULATION_GESTURE_CONFIGURATION : int32_t
    {
        DIRECTMANIPULATION_GESTURE_NONE = 0,
        DIRECTMANIPULATION_GESTURE_DEFAULT = 0,
        DIRECTMANIPULATION_GESTURE_CROSS_SLIDE_VERTICAL = 8,
        DIRECTMANIPULATION_GESTURE_CROSS_SLIDE_HORIZONTAL = 16,
        DIRECTMANIPULATION_GESTURE_PINCH_ZOOM = 32,
    };
    enum class DIRECTMANIPULATION_HITTEST_TYPE : int32_t
    {
        DIRECTMANIPULATION_HITTEST_TYPE_ASYNCHRONOUS = 0,
        DIRECTMANIPULATION_HITTEST_TYPE_SYNCHRONOUS = 1,
        DIRECTMANIPULATION_HITTEST_TYPE_AUTO_SYNCHRONOUS = 2,
    };
    enum class DIRECTMANIPULATION_HORIZONTALALIGNMENT : int32_t
    {
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_NONE = 0,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_LEFT = 1,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_CENTER = 2,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_RIGHT = 4,
        DIRECTMANIPULATION_HORIZONTALALIGNMENT_UNLOCKCENTER = 8,
    };
    enum class DIRECTMANIPULATION_INPUT_MODE : int32_t
    {
        DIRECTMANIPULATION_INPUT_MODE_AUTOMATIC = 0,
        DIRECTMANIPULATION_INPUT_MODE_MANUAL = 1,
    };
    enum class DIRECTMANIPULATION_INTERACTION_TYPE : int32_t
    {
        DIRECTMANIPULATION_INTERACTION_BEGIN = 0,
        DIRECTMANIPULATION_INTERACTION_TYPE_MANIPULATION = 1,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_TAP = 2,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_HOLD = 3,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_CROSS_SLIDE = 4,
        DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_PINCH_ZOOM = 5,
        DIRECTMANIPULATION_INTERACTION_END = 100,
    };
    enum class DIRECTMANIPULATION_MOTION_TYPES : int32_t
    {
        DIRECTMANIPULATION_MOTION_NONE = 0,
        DIRECTMANIPULATION_MOTION_TRANSLATEX = 1,
        DIRECTMANIPULATION_MOTION_TRANSLATEY = 2,
        DIRECTMANIPULATION_MOTION_ZOOM = 4,
        DIRECTMANIPULATION_MOTION_CENTERX = 16,
        DIRECTMANIPULATION_MOTION_CENTERY = 32,
        DIRECTMANIPULATION_MOTION_ALL = 55,
    };
    enum class DIRECTMANIPULATION_SNAPPOINT_COORDINATE : int32_t
    {
        DIRECTMANIPULATION_COORDINATE_BOUNDARY = 0,
        DIRECTMANIPULATION_COORDINATE_ORIGIN = 1,
        DIRECTMANIPULATION_COORDINATE_MIRRORED = 16,
    };
    enum class DIRECTMANIPULATION_SNAPPOINT_TYPE : int32_t
    {
        DIRECTMANIPULATION_SNAPPOINT_MANDATORY = 0,
        DIRECTMANIPULATION_SNAPPOINT_OPTIONAL = 1,
        DIRECTMANIPULATION_SNAPPOINT_MANDATORY_SINGLE = 2,
        DIRECTMANIPULATION_SNAPPOINT_OPTIONAL_SINGLE = 3,
    };
    enum class DIRECTMANIPULATION_STATUS : int32_t
    {
        DIRECTMANIPULATION_BUILDING = 0,
        DIRECTMANIPULATION_ENABLED = 1,
        DIRECTMANIPULATION_DISABLED = 2,
        DIRECTMANIPULATION_RUNNING = 3,
        DIRECTMANIPULATION_INERTIA = 4,
        DIRECTMANIPULATION_READY = 5,
        DIRECTMANIPULATION_SUSPENDED = 6,
    };
    enum class DIRECTMANIPULATION_VERTICALALIGNMENT : int32_t
    {
        DIRECTMANIPULATION_VERTICALALIGNMENT_NONE = 0,
        DIRECTMANIPULATION_VERTICALALIGNMENT_TOP = 1,
        DIRECTMANIPULATION_VERTICALALIGNMENT_CENTER = 2,
        DIRECTMANIPULATION_VERTICALALIGNMENT_BOTTOM = 4,
        DIRECTMANIPULATION_VERTICALALIGNMENT_UNLOCKCENTER = 8,
    };
    enum class DIRECTMANIPULATION_VIEWPORT_OPTIONS : int32_t
    {
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_DEFAULT = 0,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_AUTODISABLE = 1,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_MANUALUPDATE = 2,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_INPUT = 4,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_EXPLICITHITTEST = 8,
        DIRECTMANIPULATION_VIEWPORT_OPTIONS_DISABLEPIXELSNAPPING = 16,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct IDirectManipulationCompositorPartner;
    struct IDirectManipulationContent2;
    struct IDirectManipulationManagerPartner;
    struct IDirectManipulationParametricMotionBehavior;
    struct IDirectManipulationParametricMotionCurve;
    struct IDirectManipulationParametricRestPointBehavior;
    struct IDirectManipulationParametricRestPointList;
    struct IDirectManipulationPrimaryContent2;
    struct IDirectManipulationSnapPointsInertiaBehavior;
    struct IDirectManipulationViewport3;
    struct IDirectManipulationViewportPartner;
    struct DCompManipulationCompositor;
    struct DirectManipulationManager;
    struct DirectManipulationPrimaryContent;
    struct DirectManipulationSharedManager;
    struct DirectManipulationUpdateManager;
    struct DirectManipulationViewport;
    struct IDirectManipulationAutoScrollBehavior;
    struct IDirectManipulationCompositor;
    struct IDirectManipulationCompositor2;
    struct IDirectManipulationContent;
    struct IDirectManipulationDeferContactService;
    struct IDirectManipulationDragDropBehavior;
    struct IDirectManipulationDragDropEventHandler;
    struct IDirectManipulationFrameInfoProvider;
    struct IDirectManipulationInteractionEventHandler;
    struct IDirectManipulationManager;
    struct IDirectManipulationManager2;
    struct IDirectManipulationManager3;
    struct IDirectManipulationPrimaryContent;
    struct IDirectManipulationUpdateHandler;
    struct IDirectManipulationUpdateManager;
    struct IDirectManipulationViewport;
    struct IDirectManipulationViewport2;
    struct IDirectManipulationViewportEventHandler;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::DCompManipulationCompositor>{ 0x79DEA627,0xA08A,0x43AC,{ 0x8E,0xF5,0x69,0x00,0xB9,0x29,0x91,0x26 } }; // 79DEA627-A08A-43AC-8EF5-6900B9299126
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::DirectManipulationManager>{ 0x54E211B6,0x3650,0x4F75,{ 0x83,0x34,0xFA,0x35,0x95,0x98,0xE1,0xC5 } }; // 54E211B6-3650-4F75-8334-FA359598E1C5
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::DirectManipulationPrimaryContent>{ 0xCAA02661,0xD59E,0x41C7,{ 0x83,0x93,0x3B,0xA3,0xBA,0xCB,0x6B,0x57 } }; // CAA02661-D59E-41C7-8393-3BA3BACB6B57
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::DirectManipulationSharedManager>{ 0x99793286,0x77CC,0x4B57,{ 0x96,0xDB,0x3B,0x35,0x4F,0x6F,0x9F,0xB5 } }; // 99793286-77CC-4B57-96DB-3B354F6F9FB5
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::DirectManipulationUpdateManager>{ 0x9FC1BFD5,0x1835,0x441A,{ 0xB3,0xB1,0xB6,0xCC,0x74,0xB7,0x27,0xD0 } }; // 9FC1BFD5-1835-441A-B3B1-B6CC74B727D0
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::DirectManipulationViewport>{ 0x34E211B6,0x3650,0x4F75,{ 0x83,0x34,0xFA,0x35,0x95,0x98,0xE1,0xC5 } }; // 34E211B6-3650-4F75-8334-FA359598E1C5
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationAutoScrollBehavior>{ 0x6D5954D4,0x2003,0x4356,{ 0x9B,0x31,0xD0,0x51,0xC9,0xFF,0x0A,0xF7 } }; // 6D5954D4-2003-4356-9B31-D051C9FF0AF7
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationCompositor>{ 0x537A0825,0x0387,0x4EFA,{ 0xB6,0x2F,0x71,0xEB,0x1F,0x08,0x5A,0x7E } }; // 537A0825-0387-4EFA-B62F-71EB1F085A7E
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationCompositor2>{ 0xD38C7822,0xF1CB,0x43CB,{ 0xB4,0xB9,0xAC,0x0C,0x76,0x7A,0x41,0x2E } }; // D38C7822-F1CB-43CB-B4B9-AC0C767A412E
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationContent>{ 0xB89962CB,0x3D89,0x442B,{ 0xBB,0x58,0x50,0x98,0xFA,0x0F,0x9F,0x16 } }; // B89962CB-3D89-442B-BB58-5098FA0F9F16
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationDeferContactService>{ 0x652D5C71,0xFE60,0x4A98,{ 0xBE,0x70,0xE5,0xF2,0x12,0x91,0xE7,0xF1 } }; // 652D5C71-FE60-4A98-BE70-E5F21291E7F1
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationDragDropBehavior>{ 0x814B5AF5,0xC2C8,0x4270,{ 0xA9,0xB7,0xA1,0x98,0xCE,0x8D,0x02,0xFA } }; // 814B5AF5-C2C8-4270-A9B7-A198CE8D02FA
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationDragDropEventHandler>{ 0x1FA11B10,0x701B,0x41AE,{ 0xB5,0xF2,0x49,0xE3,0x6B,0xD5,0x95,0xAA } }; // 1FA11B10-701B-41AE-B5F2-49E36BD595AA
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationFrameInfoProvider>{ 0xFB759DBA,0x6F4C,0x4C01,{ 0x87,0x4E,0x19,0xC8,0xA0,0x59,0x07,0xF9 } }; // FB759DBA-6F4C-4C01-874E-19C8A05907F9
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationInteractionEventHandler>{ 0xE43F45B8,0x42B4,0x403E,{ 0xB1,0xF2,0x27,0x3B,0x8F,0x51,0x08,0x30 } }; // E43F45B8-42B4-403E-B1F2-273B8F510830
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationManager>{ 0xFBF5D3B4,0x70C7,0x4163,{ 0x93,0x22,0x5A,0x6F,0x66,0x0D,0x6F,0xBC } }; // FBF5D3B4-70C7-4163-9322-5A6F660D6FBC
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationManager2>{ 0xFA1005E9,0x3D16,0x484C,{ 0xBF,0xC9,0x62,0xB6,0x1E,0x56,0xEC,0x4E } }; // FA1005E9-3D16-484C-BFC9-62B61E56EC4E
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationManager3>{ 0x2CB6B33D,0xFFE8,0x488C,{ 0xB7,0x50,0xFB,0xDF,0xE8,0x8D,0xCA,0x8C } }; // 2CB6B33D-FFE8-488C-B750-FBDFE88DCA8C
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationPrimaryContent>{ 0xC12851E4,0x1698,0x4625,{ 0xB9,0xB1,0x7C,0xA3,0xEC,0x18,0x63,0x0B } }; // C12851E4-1698-4625-B9B1-7CA3EC18630B
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationUpdateHandler>{ 0x790B6337,0x64F8,0x4FF5,{ 0xA2,0x69,0xB3,0x2B,0xC2,0xAF,0x27,0xA7 } }; // 790B6337-64F8-4FF5-A269-B32BC2AF27A7
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationUpdateManager>{ 0xB0AE62FD,0xBE34,0x46E7,{ 0x9C,0xAA,0xD3,0x61,0xFA,0xCB,0xB9,0xCC } }; // B0AE62FD-BE34-46E7-9CAA-D361FACBB9CC
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationViewport>{ 0x28B85A3D,0x60A0,0x48BD,{ 0x9B,0xA1,0x5C,0xE8,0xD9,0xEA,0x3A,0x6D } }; // 28B85A3D-60A0-48BD-9BA1-5CE8D9EA3A6D
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationViewport2>{ 0x923CCAAC,0x61E1,0x4385,{ 0xB7,0x26,0x01,0x7A,0xF1,0x89,0x88,0x2A } }; // 923CCAAC-61E1-4385-B726-017AF189882A
    template <> inline constexpr guid guid_v<Windows::Win32::DirectManipulation::IDirectManipulationViewportEventHandler>{ 0x952121DA,0xD69F,0x45F9,{ 0xB0,0xF9,0xF2,0x39,0x44,0x32,0x1A,0x6D } }; // 952121DA-D69F-45F9-B0F9-F23944321A6D
#pragma endregion guids

}
#endif
