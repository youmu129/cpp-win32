// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Ldap_0_H
#define WIN32_Windows_Win32_Ldap_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Security
{
    struct CERT_CONTEXT;
    struct SecPkgContext_IssuerListInfoEx;
}
WIN32_EXPORT namespace win32::Windows::Win32::Ldap
{
#pragma region enums
    enum class LDAP_RETCODE : int32_t
    {
        LDAP_SUCCESS = 0,
        LDAP_OPERATIONS_ERROR = 1,
        LDAP_PROTOCOL_ERROR = 2,
        LDAP_TIMELIMIT_EXCEEDED = 3,
        LDAP_SIZELIMIT_EXCEEDED = 4,
        LDAP_COMPARE_FALSE = 5,
        LDAP_COMPARE_TRUE = 6,
        LDAP_AUTH_METHOD_NOT_SUPPORTED = 7,
        LDAP_STRONG_AUTH_REQUIRED = 8,
        LDAP_REFERRAL_V2 = 9,
        LDAP_PARTIAL_RESULTS = 9,
        LDAP_REFERRAL = 10,
        LDAP_ADMIN_LIMIT_EXCEEDED = 11,
        LDAP_UNAVAILABLE_CRIT_EXTENSION = 12,
        LDAP_CONFIDENTIALITY_REQUIRED = 13,
        LDAP_SASL_BIND_IN_PROGRESS = 14,
        LDAP_NO_SUCH_ATTRIBUTE = 16,
        LDAP_UNDEFINED_TYPE = 17,
        LDAP_INAPPROPRIATE_MATCHING = 18,
        LDAP_CONSTRAINT_VIOLATION = 19,
        LDAP_ATTRIBUTE_OR_VALUE_EXISTS = 20,
        LDAP_INVALID_SYNTAX = 21,
        LDAP_NO_SUCH_OBJECT = 32,
        LDAP_ALIAS_PROBLEM = 33,
        LDAP_INVALID_DN_SYNTAX = 34,
        LDAP_IS_LEAF = 35,
        LDAP_ALIAS_DEREF_PROBLEM = 36,
        LDAP_INAPPROPRIATE_AUTH = 48,
        LDAP_INVALID_CREDENTIALS = 49,
        LDAP_INSUFFICIENT_RIGHTS = 50,
        LDAP_BUSY = 51,
        LDAP_UNAVAILABLE = 52,
        LDAP_UNWILLING_TO_PERFORM = 53,
        LDAP_LOOP_DETECT = 54,
        LDAP_SORT_CONTROL_MISSING = 60,
        LDAP_OFFSET_RANGE_ERROR = 61,
        LDAP_NAMING_VIOLATION = 64,
        LDAP_OBJECT_CLASS_VIOLATION = 65,
        LDAP_NOT_ALLOWED_ON_NONLEAF = 66,
        LDAP_NOT_ALLOWED_ON_RDN = 67,
        LDAP_ALREADY_EXISTS = 68,
        LDAP_NO_OBJECT_CLASS_MODS = 69,
        LDAP_RESULTS_TOO_LARGE = 70,
        LDAP_AFFECTS_MULTIPLE_DSAS = 71,
        LDAP_VIRTUAL_LIST_VIEW_ERROR = 76,
        LDAP_OTHER = 80,
        LDAP_SERVER_DOWN = 81,
        LDAP_LOCAL_ERROR = 82,
        LDAP_ENCODING_ERROR = 83,
        LDAP_DECODING_ERROR = 84,
        LDAP_TIMEOUT = 85,
        LDAP_AUTH_UNKNOWN = 86,
        LDAP_FILTER_ERROR = 87,
        LDAP_USER_CANCELLED = 88,
        LDAP_PARAM_ERROR = 89,
        LDAP_NO_MEMORY = 90,
        LDAP_CONNECT_ERROR = 91,
        LDAP_NOT_SUPPORTED = 92,
        LDAP_NO_RESULTS_RETURNED = 94,
        LDAP_CONTROL_NOT_FOUND = 93,
        LDAP_MORE_RESULTS_TO_RETURN = 95,
        LDAP_CLIENT_LOOP = 96,
        LDAP_REFERRAL_LIMIT_EXCEEDED = 97,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct LDAPAPIFeatureInfoA;
    struct LDAPAPIFeatureInfoW;
    struct LDAPMessage;
    struct LDAP_BERVAL;
    struct LDAP_REFERRAL_CALLBACK;
    struct LDAP_TIMEVAL;
    struct berelement;
    struct ldap;
    struct ldap_version_info;
    struct ldapapiinfoA;
    struct ldapapiinfoW;
    struct ldapcontrolA;
    struct ldapcontrolW;
    struct ldapmodA;
    struct ldapmodW;
    struct ldapsearch;
    struct ldapsortkeyA;
    struct ldapsortkeyW;
    struct ldapvlvinfo;
#pragma endregion forward_declarations

#pragma region delegates
    using DBGPRINT = uint32_t __stdcall(int8_t*);
    using QUERYFORCONNECTION = uint32_t __stdcall(Windows::Win32::Ldap::ldap*, Windows::Win32::Ldap::ldap*, uint16_t*, int8_t*, uint32_t, void*, void*, Windows::Win32::Ldap::ldap**);
    using NOTIFYOFNEWCONNECTION = uint8_t __stdcall(Windows::Win32::Ldap::ldap*, Windows::Win32::Ldap::ldap*, uint16_t*, int8_t*, Windows::Win32::Ldap::ldap*, uint32_t, void*, void*, uint32_t);
    using DEREFERENCECONNECTION = uint32_t __stdcall(Windows::Win32::Ldap::ldap*, Windows::Win32::Ldap::ldap*);
    using QUERYCLIENTCERT = uint8_t __stdcall(Windows::Win32::Ldap::ldap*, Windows::Win32::Security::SecPkgContext_IssuerListInfoEx*, Windows::Win32::Security::CERT_CONTEXT**);
    using VERIFYSERVERCERT = uint8_t __stdcall(Windows::Win32::Ldap::ldap*, Windows::Win32::Security::CERT_CONTEXT**);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
