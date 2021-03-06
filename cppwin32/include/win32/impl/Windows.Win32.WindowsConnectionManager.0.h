// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsConnectionManager_0_H
#define WIN32_Windows_Win32_WindowsConnectionManager_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsConnectionManager
{
#pragma region enums
    enum class WCM_CONNECTION_COST : int32_t
    {
        WCM_CONNECTION_COST_UNKNOWN = 0,
        WCM_CONNECTION_COST_UNRESTRICTED = 1,
        WCM_CONNECTION_COST_FIXED = 2,
        WCM_CONNECTION_COST_VARIABLE = 4,
        WCM_CONNECTION_COST_OVERDATALIMIT = 65536,
        WCM_CONNECTION_COST_CONGESTED = 131072,
        WCM_CONNECTION_COST_ROAMING = 262144,
        WCM_CONNECTION_COST_APPROACHINGDATALIMIT = 524288,
    };
    enum class WCM_CONNECTION_COST_SOURCE : int32_t
    {
        WCM_CONNECTION_COST_SOURCE_DEFAULT = 0,
        WCM_CONNECTION_COST_SOURCE_GP = 1,
        WCM_CONNECTION_COST_SOURCE_USER = 2,
        WCM_CONNECTION_COST_SOURCE_OPERATOR = 3,
    };
    enum class WCM_MEDIA_TYPE : int32_t
    {
        wcm_media_unknown = 0,
        wcm_media_ethernet = 1,
        wcm_media_wlan = 2,
        wcm_media_mbn = 3,
        wcm_media_invalid = 4,
        wcm_media_max = 5,
    };
    enum class WCM_PROPERTY : int32_t
    {
        wcm_global_property_domain_policy = 0,
        wcm_global_property_minimize_policy = 1,
        wcm_global_property_roaming_policy = 2,
        wcm_global_property_powermanagement_policy = 3,
        wcm_intf_property_connection_cost = 4,
        wcm_intf_property_dataplan_status = 5,
        wcm_intf_property_hotspot_profile = 6,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct WCM_BILLING_CYCLE_INFO;
    struct WCM_CONNECTION_COST_DATA;
    struct WCM_DATAPLAN_STATUS;
    struct WCM_POLICY_VALUE;
    struct WCM_PROFILE_INFO;
    struct WCM_PROFILE_INFO_LIST;
    struct WCM_TIME_INTERVAL;
    struct WCM_USAGE_DATA;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
