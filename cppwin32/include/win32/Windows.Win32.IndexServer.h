// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_IndexServer_H
#define WIN32_Windows_Win32_IndexServer_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.IndexServer.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::IndexServer
{
#pragma region methods
    inline int32_t LoadIFilter(uint16_t* pwcsPath, Windows::Win32::Com::IUnknown* pUnkOuter, void** ppIUnk)
    {
        auto win32_impl_result = WIN32_IMPL_LoadIFilter(pwcsPath, pUnkOuter, ppIUnk);
        return win32_impl_result;
    }
    inline int32_t LoadIFilterEx(uint16_t* pwcsPath, uint32_t dwFlags, ::win32::guid* riid, void** ppIUnk)
    {
        auto win32_impl_result = WIN32_IMPL_LoadIFilterEx(pwcsPath, dwFlags, riid, ppIUnk);
        return win32_impl_result;
    }
    inline int32_t BindIFilterFromStorage(Windows::Win32::StructuredStorage::IStorage* pStg, Windows::Win32::Com::IUnknown* pUnkOuter, void** ppIUnk)
    {
        auto win32_impl_result = WIN32_IMPL_BindIFilterFromStorage(pStg, pUnkOuter, ppIUnk);
        return win32_impl_result;
    }
    inline int32_t BindIFilterFromStream(Windows::Win32::StructuredStorage::IStream* pStm, Windows::Win32::Com::IUnknown* pUnkOuter, void** ppIUnk)
    {
        auto win32_impl_result = WIN32_IMPL_BindIFilterFromStream(pStm, pUnkOuter, ppIUnk);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
