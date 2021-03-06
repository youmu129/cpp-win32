// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetShell_H
#define WIN32_Windows_Win32_NetShell_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.NetShell.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetShell
{
#pragma region methods
    inline uint32_t MatchEnumTag(Windows::Win32::SystemServices::HANDLE hModule, uint16_t* pwcArg, uint32_t dwNumArg, Windows::Win32::NetShell::TOKEN_VALUE* pEnumTable, uint32_t* pdwValue)
    {
        auto win32_impl_result = WIN32_IMPL_MatchEnumTag(hModule, pwcArg, dwNumArg, pEnumTable, pdwValue);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL MatchToken(uint16_t* pwszUserToken, uint16_t* pwszCmdToken)
    {
        auto win32_impl_result = WIN32_IMPL_MatchToken(pwszUserToken, pwszCmdToken);
        return win32_impl_result;
    }
    inline uint32_t PreprocessCommand(Windows::Win32::SystemServices::HANDLE hModule, uint16_t** ppwcArguments, uint32_t dwCurrentIndex, uint32_t dwArgCount, Windows::Win32::NetShell::TAG_TYPE* pttTags, uint32_t dwTagCount, uint32_t dwMinArgs, uint32_t dwMaxArgs, uint32_t* pdwTagType)
    {
        auto win32_impl_result = WIN32_IMPL_PreprocessCommand(hModule, ppwcArguments, dwCurrentIndex, dwArgCount, pttTags, dwTagCount, dwMinArgs, dwMaxArgs, pdwTagType);
        return win32_impl_result;
    }
    inline uint32_t PrintError(Windows::Win32::SystemServices::HANDLE hModule, uint32_t dwErrId)
    {
        auto win32_impl_result = WIN32_IMPL_PrintError(hModule, dwErrId);
        return win32_impl_result;
    }
    inline uint32_t PrintMessageFromModule(Windows::Win32::SystemServices::HANDLE hModule, uint32_t dwMsgId)
    {
        auto win32_impl_result = WIN32_IMPL_PrintMessageFromModule(hModule, dwMsgId);
        return win32_impl_result;
    }
    inline uint32_t PrintMessage(uint16_t* pwszFormat)
    {
        auto win32_impl_result = WIN32_IMPL_PrintMessage(pwszFormat);
        return win32_impl_result;
    }
    inline uint32_t RegisterContext(Windows::Win32::NetShell::NS_CONTEXT_ATTRIBUTES* pChildContext)
    {
        auto win32_impl_result = WIN32_IMPL_RegisterContext(pChildContext);
        return win32_impl_result;
    }
    inline uint32_t RegisterHelper(::win32::guid* pguidParentContext, Windows::Win32::NetShell::NS_HELPER_ATTRIBUTES* pfnRegisterSubContext)
    {
        auto win32_impl_result = WIN32_IMPL_RegisterHelper(pguidParentContext, pfnRegisterSubContext);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
