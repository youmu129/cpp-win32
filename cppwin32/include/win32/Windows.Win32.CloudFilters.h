// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_CloudFilters_H
#define WIN32_Windows_Win32_CloudFilters_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.CloudFilters.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::CloudFilters
{
#pragma region methods
    inline int32_t CfGetPlatformInfo(Windows::Win32::CloudFilters::CF_PLATFORM_INFO* PlatformVersion)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetPlatformInfo(PlatformVersion);
        return win32_impl_result;
    }
    inline int32_t CfRegisterSyncRoot(uint16_t* SyncRootPath, Windows::Win32::CloudFilters::CF_SYNC_REGISTRATION* Registration, Windows::Win32::CloudFilters::CF_SYNC_POLICIES* Policies, Windows::Win32::CloudFilters::CF_REGISTER_FLAGS RegisterFlags)
    {
        auto win32_impl_result = WIN32_IMPL_CfRegisterSyncRoot(SyncRootPath, Registration, Policies, RegisterFlags);
        return win32_impl_result;
    }
    inline int32_t CfUnregisterSyncRoot(uint16_t* SyncRootPath)
    {
        auto win32_impl_result = WIN32_IMPL_CfUnregisterSyncRoot(SyncRootPath);
        return win32_impl_result;
    }
    inline int32_t CfConnectSyncRoot(uint16_t* SyncRootPath, Windows::Win32::CloudFilters::CF_CALLBACK_REGISTRATION* CallbackTable, void* CallbackContext, Windows::Win32::CloudFilters::CF_CONNECT_FLAGS ConnectFlags, Windows::Win32::CloudFilters::CF_CONNECTION_KEY__* ConnectionKey)
    {
        auto win32_impl_result = WIN32_IMPL_CfConnectSyncRoot(SyncRootPath, CallbackTable, CallbackContext, ConnectFlags, ConnectionKey);
        return win32_impl_result;
    }
    inline int32_t CfDisconnectSyncRoot(Windows::Win32::CloudFilters::CF_CONNECTION_KEY__ ConnectionKey)
    {
        auto win32_impl_result = WIN32_IMPL_CfDisconnectSyncRoot(ConnectionKey);
        return win32_impl_result;
    }
    inline int32_t CfGetTransferKey(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::SystemServices::LARGE_INTEGER* TransferKey)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetTransferKey(FileHandle, TransferKey);
        return win32_impl_result;
    }
    inline void CfReleaseTransferKey(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::SystemServices::LARGE_INTEGER* TransferKey)
    {
        WIN32_IMPL_CfReleaseTransferKey(FileHandle, TransferKey);
    }
    inline int32_t CfExecute(Windows::Win32::CloudFilters::CF_OPERATION_INFO* OpInfo, Windows::Win32::CloudFilters::CF_OPERATION_PARAMETERS* OpParams)
    {
        auto win32_impl_result = WIN32_IMPL_CfExecute(OpInfo, OpParams);
        return win32_impl_result;
    }
    inline int32_t CfUpdateSyncProviderStatus(Windows::Win32::CloudFilters::CF_CONNECTION_KEY__ ConnectionKey, Windows::Win32::CloudFilters::CF_SYNC_PROVIDER_STATUS ProviderStatus)
    {
        auto win32_impl_result = WIN32_IMPL_CfUpdateSyncProviderStatus(ConnectionKey, ProviderStatus);
        return win32_impl_result;
    }
    inline int32_t CfQuerySyncProviderStatus(Windows::Win32::CloudFilters::CF_CONNECTION_KEY__ ConnectionKey, Windows::Win32::CloudFilters::CF_SYNC_PROVIDER_STATUS* ProviderStatus)
    {
        auto win32_impl_result = WIN32_IMPL_CfQuerySyncProviderStatus(ConnectionKey, ProviderStatus);
        return win32_impl_result;
    }
    inline int32_t CfReportSyncStatus(uint16_t* SyncRootPath, Windows::Win32::CloudFilters::CF_SYNC_STATUS* SyncStatus)
    {
        auto win32_impl_result = WIN32_IMPL_CfReportSyncStatus(SyncRootPath, SyncStatus);
        return win32_impl_result;
    }
    inline int32_t CfCreatePlaceholders(uint16_t* BaseDirectoryPath, Windows::Win32::CloudFilters::CF_PLACEHOLDER_CREATE_INFO* PlaceholderArray, uint32_t PlaceholderCount, Windows::Win32::CloudFilters::CF_CREATE_FLAGS CreateFlags, uint32_t* EntriesProcessed)
    {
        auto win32_impl_result = WIN32_IMPL_CfCreatePlaceholders(BaseDirectoryPath, PlaceholderArray, PlaceholderCount, CreateFlags, EntriesProcessed);
        return win32_impl_result;
    }
    inline int32_t CfOpenFileWithOplock(uint16_t* FilePath, Windows::Win32::CloudFilters::CF_OPEN_FILE_FLAGS Flags, intptr_t* ProtectedHandle)
    {
        auto win32_impl_result = WIN32_IMPL_CfOpenFileWithOplock(FilePath, Flags, ProtectedHandle);
        return win32_impl_result;
    }
    inline uint8_t CfReferenceProtectedHandle(Windows::Win32::SystemServices::HANDLE ProtectedHandle)
    {
        auto win32_impl_result = WIN32_IMPL_CfReferenceProtectedHandle(ProtectedHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::HANDLE CfGetWin32HandleFromProtectedHandle(Windows::Win32::SystemServices::HANDLE ProtectedHandle)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetWin32HandleFromProtectedHandle(ProtectedHandle);
        return win32_impl_result;
    }
    inline void CfReleaseProtectedHandle(Windows::Win32::SystemServices::HANDLE ProtectedHandle)
    {
        WIN32_IMPL_CfReleaseProtectedHandle(ProtectedHandle);
    }
    inline void CfCloseHandle(Windows::Win32::SystemServices::HANDLE FileHandle)
    {
        WIN32_IMPL_CfCloseHandle(FileHandle);
    }
    inline int32_t CfConvertToPlaceholder(Windows::Win32::SystemServices::HANDLE FileHandle, void* FileIdentity, uint32_t FileIdentityLength, Windows::Win32::CloudFilters::CF_CONVERT_FLAGS ConvertFlags, int64_t* ConvertUsn, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_CfConvertToPlaceholder(FileHandle, FileIdentity, FileIdentityLength, ConvertFlags, ConvertUsn, Overlapped);
        return win32_impl_result;
    }
    inline int32_t CfUpdatePlaceholder(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_FS_METADATA* FsMetadata, void* FileIdentity, uint32_t FileIdentityLength, Windows::Win32::CloudFilters::CF_FILE_RANGE* DehydrateRangeArray, uint32_t DehydrateRangeCount, Windows::Win32::CloudFilters::CF_UPDATE_FLAGS UpdateFlags, int64_t* UpdateUsn, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_CfUpdatePlaceholder(FileHandle, FsMetadata, FileIdentity, FileIdentityLength, DehydrateRangeArray, DehydrateRangeCount, UpdateFlags, UpdateUsn, Overlapped);
        return win32_impl_result;
    }
    inline int32_t CfRevertPlaceholder(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_REVERT_FLAGS RevertFlags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_CfRevertPlaceholder(FileHandle, RevertFlags, Overlapped);
        return win32_impl_result;
    }
    inline int32_t CfHydratePlaceholder(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::SystemServices::LARGE_INTEGER StartingOffset, Windows::Win32::SystemServices::LARGE_INTEGER Length, Windows::Win32::CloudFilters::CF_HYDRATE_FLAGS HydrateFlags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_CfHydratePlaceholder(FileHandle, StartingOffset, Length, HydrateFlags, Overlapped);
        return win32_impl_result;
    }
    inline int32_t CfDehydratePlaceholder(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::SystemServices::LARGE_INTEGER StartingOffset, Windows::Win32::SystemServices::LARGE_INTEGER Length, Windows::Win32::CloudFilters::CF_DEHYDRATE_FLAGS DehydrateFlags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_CfDehydratePlaceholder(FileHandle, StartingOffset, Length, DehydrateFlags, Overlapped);
        return win32_impl_result;
    }
    inline int32_t CfSetPinState(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_PIN_STATE PinState, Windows::Win32::CloudFilters::CF_SET_PIN_FLAGS PinFlags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_CfSetPinState(FileHandle, PinState, PinFlags, Overlapped);
        return win32_impl_result;
    }
    inline int32_t CfSetInSyncState(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_IN_SYNC_STATE InSyncState, Windows::Win32::CloudFilters::CF_SET_IN_SYNC_FLAGS InSyncFlags, int64_t* InSyncUsn)
    {
        auto win32_impl_result = WIN32_IMPL_CfSetInSyncState(FileHandle, InSyncState, InSyncFlags, InSyncUsn);
        return win32_impl_result;
    }
    inline int32_t CfSetCorrelationVector(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::SystemServices::CORRELATION_VECTOR* CorrelationVector)
    {
        auto win32_impl_result = WIN32_IMPL_CfSetCorrelationVector(FileHandle, CorrelationVector);
        return win32_impl_result;
    }
    inline int32_t CfGetCorrelationVector(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::SystemServices::CORRELATION_VECTOR* CorrelationVector)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetCorrelationVector(FileHandle, CorrelationVector);
        return win32_impl_result;
    }
    inline Windows::Win32::CloudFilters::CF_PLACEHOLDER_STATE CfGetPlaceholderStateFromAttributeTag(uint32_t FileAttributes, uint32_t ReparseTag)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetPlaceholderStateFromAttributeTag(FileAttributes, ReparseTag);
        return win32_impl_result;
    }
    inline Windows::Win32::CloudFilters::CF_PLACEHOLDER_STATE CfGetPlaceholderStateFromFileInfo(void* InfoBuffer, Windows::Win32::FileSystem::FILE_INFO_BY_HANDLE_CLASS InfoClass)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetPlaceholderStateFromFileInfo(InfoBuffer, InfoClass);
        return win32_impl_result;
    }
    inline Windows::Win32::CloudFilters::CF_PLACEHOLDER_STATE CfGetPlaceholderStateFromFindData(Windows::Win32::FileSystem::WIN32_FIND_DATAA* FindData)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetPlaceholderStateFromFindData(FindData);
        return win32_impl_result;
    }
    inline int32_t CfGetPlaceholderInfo(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_PLACEHOLDER_INFO_CLASS InfoClass, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetPlaceholderInfo(FileHandle, InfoClass, InfoBuffer, InfoBufferLength, ReturnedLength);
        return win32_impl_result;
    }
    inline int32_t CfGetSyncRootInfoByPath(uint16_t* FilePath, Windows::Win32::CloudFilters::CF_SYNC_ROOT_INFO_CLASS InfoClass, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetSyncRootInfoByPath(FilePath, InfoClass, InfoBuffer, InfoBufferLength, ReturnedLength);
        return win32_impl_result;
    }
    inline int32_t CfGetSyncRootInfoByHandle(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_SYNC_ROOT_INFO_CLASS InfoClass, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetSyncRootInfoByHandle(FileHandle, InfoClass, InfoBuffer, InfoBufferLength, ReturnedLength);
        return win32_impl_result;
    }
    inline int32_t CfGetPlaceholderRangeInfo(Windows::Win32::SystemServices::HANDLE FileHandle, Windows::Win32::CloudFilters::CF_PLACEHOLDER_RANGE_INFO_CLASS InfoClass, Windows::Win32::SystemServices::LARGE_INTEGER StartingOffset, Windows::Win32::SystemServices::LARGE_INTEGER Length, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength)
    {
        auto win32_impl_result = WIN32_IMPL_CfGetPlaceholderRangeInfo(FileHandle, InfoClass, StartingOffset, Length, InfoBuffer, InfoBufferLength, ReturnedLength);
        return win32_impl_result;
    }
    inline int32_t CfReportProviderProgress(Windows::Win32::CloudFilters::CF_CONNECTION_KEY__ ConnectionKey, Windows::Win32::SystemServices::LARGE_INTEGER TransferKey, Windows::Win32::SystemServices::LARGE_INTEGER ProviderProgressTotal, Windows::Win32::SystemServices::LARGE_INTEGER ProviderProgressCompleted)
    {
        auto win32_impl_result = WIN32_IMPL_CfReportProviderProgress(ConnectionKey, TransferKey, ProviderProgressTotal, ProviderProgressCompleted);
        return win32_impl_result;
    }
    inline int32_t CfReportProviderProgress2(Windows::Win32::CloudFilters::CF_CONNECTION_KEY__ ConnectionKey, Windows::Win32::SystemServices::LARGE_INTEGER TransferKey, Windows::Win32::SystemServices::LARGE_INTEGER RequestKey, Windows::Win32::SystemServices::LARGE_INTEGER ProviderProgressTotal, Windows::Win32::SystemServices::LARGE_INTEGER ProviderProgressCompleted, uint32_t TargetSessionId)
    {
        auto win32_impl_result = WIN32_IMPL_CfReportProviderProgress2(ConnectionKey, TransferKey, RequestKey, ProviderProgressTotal, ProviderProgressCompleted, TargetSessionId);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif