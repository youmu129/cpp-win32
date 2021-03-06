// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Perf_2_H
#define WIN32_Windows_Win32_Perf_2_H
#include "win32/impl/Windows.Win32.Perf.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall WIN32_IMPL_LoadPerfCounterTextStringsA(int8_t* lpCommandLine, win32::Windows::Win32::SystemServices::BOOL bQuietModeArg) noexcept;
    uint32_t __stdcall WIN32_IMPL_LoadPerfCounterTextStringsW(uint16_t* lpCommandLine, win32::Windows::Win32::SystemServices::BOOL bQuietModeArg) noexcept;
    uint32_t __stdcall WIN32_IMPL_UnloadPerfCounterTextStringsW(uint16_t* lpCommandLine, win32::Windows::Win32::SystemServices::BOOL bQuietModeArg) noexcept;
    uint32_t __stdcall WIN32_IMPL_UnloadPerfCounterTextStringsA(int8_t* lpCommandLine, win32::Windows::Win32::SystemServices::BOOL bQuietModeArg) noexcept;
    uint32_t __stdcall WIN32_IMPL_UpdatePerfNameFilesA(int8_t* szNewCtrFilePath, int8_t* szNewHlpFilePath, int8_t* szLanguageID, size_t dwFlags) noexcept;
    uint32_t __stdcall WIN32_IMPL_UpdatePerfNameFilesW(uint16_t* szNewCtrFilePath, uint16_t* szNewHlpFilePath, uint16_t* szLanguageID, size_t dwFlags) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetServiceAsTrustedA(int8_t* szReserved, int8_t* szServiceName) noexcept;
    uint32_t __stdcall WIN32_IMPL_SetServiceAsTrustedW(uint16_t* szReserved, uint16_t* szServiceName) noexcept;
    uint32_t __stdcall WIN32_IMPL_BackupPerfRegistryToFileW(uint16_t* szFileName, uint16_t* szCommentString) noexcept;
    uint32_t __stdcall WIN32_IMPL_RestorePerfRegistryFromFileW(uint16_t* szFileName, uint16_t* szLangId) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfStartProvider(::win32::guid* ProviderGuid, win32::Windows::Win32::Perf::PERFLIBREQUEST* ControlCallback, win32::Windows::Win32::Perf::PerfProviderHandle* phProvider) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfStartProviderEx(::win32::guid* ProviderGuid, win32::Windows::Win32::Perf::PERF_PROVIDER_CONTEXT* ProviderContext, win32::Windows::Win32::Perf::PerfProviderHandle* Provider) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfStopProvider(win32::Windows::Win32::Perf::PerfProviderHandle ProviderHandle) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfSetCounterSetInfo(win32::Windows::Win32::SystemServices::HANDLE ProviderHandle, win32::Windows::Win32::Perf::PERF_COUNTERSET_INFO* Template, uint32_t TemplateSize) noexcept;
    win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* __stdcall WIN32_IMPL_PerfCreateInstance(win32::Windows::Win32::Perf::PerfProviderHandle ProviderHandle, ::win32::guid* CounterSetGuid, uint16_t* Name, uint32_t Id) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfDeleteInstance(win32::Windows::Win32::Perf::PerfProviderHandle Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* InstanceBlock) noexcept;
    win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* __stdcall WIN32_IMPL_PerfQueryInstance(win32::Windows::Win32::SystemServices::HANDLE ProviderHandle, ::win32::guid* CounterSetGuid, uint16_t* Name, uint32_t Id) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfSetCounterRefValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, void* Address) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfSetULongCounterValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint32_t Value) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfSetULongLongCounterValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint64_t Value) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfIncrementULongCounterValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint32_t Value) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfIncrementULongLongCounterValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint64_t Value) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfDecrementULongCounterValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint32_t Value) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfDecrementULongLongCounterValue(win32::Windows::Win32::SystemServices::HANDLE Provider, win32::Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint64_t Value) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfEnumerateCounterSet(uint16_t* szMachine, ::win32::guid* pCounterSetIds, uint32_t cCounterSetIds, uint32_t* pcCounterSetIdsActual) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfEnumerateCounterSetInstances(uint16_t* szMachine, ::win32::guid* pCounterSetId, win32::Windows::Win32::Perf::PERF_INSTANCE_HEADER* pInstances, uint32_t cbInstances, uint32_t* pcbInstancesActual) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfQueryCounterSetRegistrationInfo(uint16_t* szMachine, ::win32::guid* pCounterSetId, win32::Windows::Win32::Perf::PerfRegInfoType requestCode, uint32_t requestLangId, uint8_t* pbRegInfo, uint32_t cbRegInfo, uint32_t* pcbRegInfoActual) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfOpenQueryHandle(uint16_t* szMachine, win32::Windows::Win32::Perf::PerfQueryHandle* phQuery) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfCloseQueryHandle(win32::Windows::Win32::SystemServices::HANDLE hQuery) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfQueryCounterInfo(win32::Windows::Win32::Perf::PerfQueryHandle hQuery, win32::Windows::Win32::Perf::PERF_COUNTER_IDENTIFIER* pCounters, uint32_t cbCounters, uint32_t* pcbCountersActual) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfQueryCounterData(win32::Windows::Win32::Perf::PerfQueryHandle hQuery, win32::Windows::Win32::Perf::PERF_DATA_HEADER* pCounterBlock, uint32_t cbCounterBlock, uint32_t* pcbCounterBlockActual) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfAddCounters(win32::Windows::Win32::Perf::PerfQueryHandle hQuery, win32::Windows::Win32::Perf::PERF_COUNTER_IDENTIFIER* pCounters, uint32_t cbCounters) noexcept;
    uint32_t __stdcall WIN32_IMPL_PerfDeleteCounters(win32::Windows::Win32::Perf::PerfQueryHandle hQuery, win32::Windows::Win32::Perf::PERF_COUNTER_IDENTIFIER* pCounters, uint32_t cbCounters) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDllVersion(uint32_t* lpdwVersion) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhOpenQueryW(uint16_t* szDataSource, size_t dwUserData, intptr_t* phQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhOpenQueryA(int8_t* szDataSource, size_t dwUserData, intptr_t* phQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhAddCounterW(intptr_t hQuery, uint16_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhAddCounterA(intptr_t hQuery, int8_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhAddEnglishCounterW(intptr_t hQuery, uint16_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhAddEnglishCounterA(intptr_t hQuery, int8_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCollectQueryDataWithTime(intptr_t hQuery, int64_t* pllTimeStamp) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhValidatePathExW(intptr_t hDataSource, uint16_t* szFullPathBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhValidatePathExA(intptr_t hDataSource, int8_t* szFullPathBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhRemoveCounter(intptr_t hCounter) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCollectQueryData(intptr_t hQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCloseQuery(intptr_t hQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetFormattedCounterValue(intptr_t hCounter, uint32_t dwFormat, uint32_t* lpdwType, win32::Windows::Win32::Perf::PDH_FMT_COUNTERVALUE* pValue) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetFormattedCounterArrayA(intptr_t hCounter, uint32_t dwFormat, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, win32::Windows::Win32::Perf::PDH_FMT_COUNTERVALUE_ITEM_A* ItemBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetFormattedCounterArrayW(intptr_t hCounter, uint32_t dwFormat, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, win32::Windows::Win32::Perf::PDH_FMT_COUNTERVALUE_ITEM_W* ItemBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetRawCounterValue(intptr_t hCounter, uint32_t* lpdwType, win32::Windows::Win32::Perf::PDH_RAW_COUNTER* pValue) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetRawCounterArrayA(intptr_t hCounter, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, win32::Windows::Win32::Perf::PDH_RAW_COUNTER_ITEM_A* ItemBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetRawCounterArrayW(intptr_t hCounter, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, win32::Windows::Win32::Perf::PDH_RAW_COUNTER_ITEM_W* ItemBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCalculateCounterFromRawValue(intptr_t hCounter, uint32_t dwFormat, win32::Windows::Win32::Perf::PDH_RAW_COUNTER* rawValue1, win32::Windows::Win32::Perf::PDH_RAW_COUNTER* rawValue2, win32::Windows::Win32::Perf::PDH_FMT_COUNTERVALUE* fmtValue) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhComputeCounterStatistics(intptr_t hCounter, uint32_t dwFormat, uint32_t dwFirstEntry, uint32_t dwNumEntries, win32::Windows::Win32::Perf::PDH_RAW_COUNTER* lpRawValueArray, win32::Windows::Win32::Perf::PDH_STATISTICS* data) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetCounterInfoW(intptr_t hCounter, uint8_t bRetrieveExplainText, uint32_t* pdwBufferSize, win32::Windows::Win32::Perf::PDH_COUNTER_INFO_W* lpBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetCounterInfoA(intptr_t hCounter, uint8_t bRetrieveExplainText, uint32_t* pdwBufferSize, win32::Windows::Win32::Perf::PDH_COUNTER_INFO_A* lpBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhSetCounterScaleFactor(intptr_t hCounter, int32_t lFactor) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhConnectMachineW(uint16_t* szMachineName) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhConnectMachineA(int8_t* szMachineName) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumMachinesW(uint16_t* szDataSource, uint16_t* mszMachineList, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumMachinesA(int8_t* szDataSource, int8_t* mszMachineList, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectsW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, win32::Windows::Win32::SystemServices::BOOL bRefresh) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectsA(int8_t* szDataSource, int8_t* szMachineName, int8_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, win32::Windows::Win32::SystemServices::BOOL bRefresh) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectItemsW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* mszCounterList, uint32_t* pcchCounterListLength, uint16_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectItemsA(int8_t* szDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* mszCounterList, uint32_t* pcchCounterListLength, int8_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhMakeCounterPathW(win32::Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_W* pCounterPathElements, uint16_t* szFullPathBuffer, uint32_t* pcchBufferSize, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhMakeCounterPathA(win32::Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_A* pCounterPathElements, int8_t* szFullPathBuffer, uint32_t* pcchBufferSize, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhParseCounterPathW(uint16_t* szFullPathBuffer, win32::Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_W* pCounterPathElements, uint32_t* pdwBufferSize, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhParseCounterPathA(int8_t* szFullPathBuffer, win32::Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_A* pCounterPathElements, uint32_t* pdwBufferSize, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhParseInstanceNameW(uint16_t* szInstanceString, uint16_t* szInstanceName, uint32_t* pcchInstanceNameLength, uint16_t* szParentName, uint32_t* pcchParentNameLength, uint32_t* lpIndex) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhParseInstanceNameA(int8_t* szInstanceString, int8_t* szInstanceName, uint32_t* pcchInstanceNameLength, int8_t* szParentName, uint32_t* pcchParentNameLength, uint32_t* lpIndex) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhValidatePathW(uint16_t* szFullPathBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhValidatePathA(int8_t* szFullPathBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfObjectW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* szDefaultObjectName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfObjectA(int8_t* szDataSource, int8_t* szMachineName, int8_t* szDefaultObjectName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfCounterW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* szDefaultCounterName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfCounterA(int8_t* szDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* szDefaultCounterName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhBrowseCountersW(win32::Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_W* pBrowseDlgData) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhBrowseCountersA(win32::Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_A* pBrowseDlgData) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhExpandCounterPathW(uint16_t* szWildCardPath, uint16_t* mszExpandedPathList, uint32_t* pcchPathListLength) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhExpandCounterPathA(int8_t* szWildCardPath, int8_t* mszExpandedPathList, uint32_t* pcchPathListLength) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhLookupPerfNameByIndexW(uint16_t* szMachineName, uint32_t dwNameIndex, uint16_t* szNameBuffer, uint32_t* pcchNameBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhLookupPerfNameByIndexA(int8_t* szMachineName, uint32_t dwNameIndex, int8_t* szNameBuffer, uint32_t* pcchNameBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhLookupPerfIndexByNameW(uint16_t* szMachineName, uint16_t* szNameBuffer, uint32_t* pdwIndex) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhLookupPerfIndexByNameA(int8_t* szMachineName, int8_t* szNameBuffer, uint32_t* pdwIndex) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhExpandWildCardPathA(int8_t* szDataSource, int8_t* szWildCardPath, int8_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhExpandWildCardPathW(uint16_t* szDataSource, uint16_t* szWildCardPath, uint16_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhOpenLogW(uint16_t* szLogFileName, uint32_t dwAccessFlags, uint32_t* lpdwLogType, intptr_t hQuery, uint32_t dwMaxSize, uint16_t* szUserCaption, intptr_t* phLog) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhOpenLogA(int8_t* szLogFileName, uint32_t dwAccessFlags, uint32_t* lpdwLogType, intptr_t hQuery, uint32_t dwMaxSize, int8_t* szUserCaption, intptr_t* phLog) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhUpdateLogW(intptr_t hLog, uint16_t* szUserString) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhUpdateLogA(intptr_t hLog, int8_t* szUserString) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhUpdateLogFileCatalog(intptr_t hLog) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetLogFileSize(intptr_t hLog, int64_t* llSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCloseLog(intptr_t hLog, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhSelectDataSourceW(win32::Windows::Win32::WindowsAndMessaging::HWND hWndOwner, uint32_t dwFlags, uint16_t* szDataSource, uint32_t* pcchBufferLength) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhSelectDataSourceA(win32::Windows::Win32::WindowsAndMessaging::HWND hWndOwner, uint32_t dwFlags, int8_t* szDataSource, uint32_t* pcchBufferLength) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_PdhIsRealTimeQuery(intptr_t hQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhSetQueryTimeRange(intptr_t hQuery, win32::Windows::Win32::Perf::PDH_TIME_INFO* pInfo) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDataSourceTimeRangeW(uint16_t* szDataSource, uint32_t* pdwNumEntries, win32::Windows::Win32::Perf::PDH_TIME_INFO* pInfo, uint32_t* pdwBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDataSourceTimeRangeA(int8_t* szDataSource, uint32_t* pdwNumEntries, win32::Windows::Win32::Perf::PDH_TIME_INFO* pInfo, uint32_t* pdwBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCollectQueryDataEx(intptr_t hQuery, uint32_t dwIntervalTime, win32::Windows::Win32::SystemServices::HANDLE hNewDataEvent) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhFormatFromRawValue(uint32_t dwCounterType, uint32_t dwFormat, int64_t* pTimeBase, win32::Windows::Win32::Perf::PDH_RAW_COUNTER* pRawValue1, win32::Windows::Win32::Perf::PDH_RAW_COUNTER* pRawValue2, win32::Windows::Win32::Perf::PDH_FMT_COUNTERVALUE* pFmtValue) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetCounterTimeBase(intptr_t hCounter, int64_t* pTimeBase) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhReadRawLogRecord(intptr_t hLog, win32::Windows::Win32::WindowsProgramming::FILETIME ftRecord, win32::Windows::Win32::Perf::PDH_RAW_LOG_RECORD* pRawLogRecord, uint32_t* pdwBufferLength) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhSetDefaultRealTimeDataSource(uint32_t dwDataSourceId) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhBindInputDataSourceW(intptr_t* phDataSource, uint16_t* LogFileNameList) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhBindInputDataSourceA(intptr_t* phDataSource, int8_t* LogFileNameList) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhOpenQueryH(intptr_t hDataSource, size_t dwUserData, intptr_t* phQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumMachinesHW(intptr_t hDataSource, uint16_t* mszMachineList, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumMachinesHA(intptr_t hDataSource, int8_t* mszMachineList, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectsHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, win32::Windows::Win32::SystemServices::BOOL bRefresh) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectsHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, win32::Windows::Win32::SystemServices::BOOL bRefresh) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectItemsHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* mszCounterList, uint32_t* pcchCounterListLength, uint16_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumObjectItemsHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* mszCounterList, uint32_t* pcchCounterListLength, int8_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhExpandWildCardPathHW(intptr_t hDataSource, uint16_t* szWildCardPath, uint16_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhExpandWildCardPathHA(intptr_t hDataSource, int8_t* szWildCardPath, int8_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDataSourceTimeRangeH(intptr_t hDataSource, uint32_t* pdwNumEntries, win32::Windows::Win32::Perf::PDH_TIME_INFO* pInfo, uint32_t* pdwBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfObjectHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* szDefaultObjectName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfObjectHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* szDefaultObjectName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfCounterHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* szDefaultCounterName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetDefaultPerfCounterHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* szDefaultCounterName, uint32_t* pcchBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhBrowseCountersHW(win32::Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_HW* pBrowseDlgData) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhBrowseCountersHA(win32::Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_HA* pBrowseDlgData) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhVerifySQLDBW(uint16_t* szDataSource) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhVerifySQLDBA(int8_t* szDataSource) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCreateSQLTablesW(uint16_t* szDataSource) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhCreateSQLTablesA(int8_t* szDataSource) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumLogSetNamesW(uint16_t* szDataSource, uint16_t* mszDataSetNameList, uint32_t* pcchBufferLength) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhEnumLogSetNamesA(int8_t* szDataSource, int8_t* mszDataSetNameList, uint32_t* pcchBufferLength) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhGetLogSetGUID(intptr_t hLog, ::win32::guid* pGuid, int32_t* pRunId) noexcept;
    int32_t __stdcall WIN32_IMPL_PdhSetLogSetRunID(intptr_t hLog, int32_t RunId) noexcept;
}
WIN32_IMPL_LINK(LoadPerfCounterTextStringsA, 8)
WIN32_IMPL_LINK(LoadPerfCounterTextStringsW, 8)
WIN32_IMPL_LINK(UnloadPerfCounterTextStringsW, 8)
WIN32_IMPL_LINK(UnloadPerfCounterTextStringsA, 8)
WIN32_IMPL_LINK(UpdatePerfNameFilesA, 16)
WIN32_IMPL_LINK(UpdatePerfNameFilesW, 16)
WIN32_IMPL_LINK(SetServiceAsTrustedA, 8)
WIN32_IMPL_LINK(SetServiceAsTrustedW, 8)
WIN32_IMPL_LINK(BackupPerfRegistryToFileW, 8)
WIN32_IMPL_LINK(RestorePerfRegistryFromFileW, 8)
WIN32_IMPL_LINK(PerfStartProvider, 12)
WIN32_IMPL_LINK(PerfStartProviderEx, 12)
WIN32_IMPL_LINK(PerfStopProvider, 4)
WIN32_IMPL_LINK(PerfSetCounterSetInfo, 12)
WIN32_IMPL_LINK(PerfCreateInstance, 16)
WIN32_IMPL_LINK(PerfDeleteInstance, 8)
WIN32_IMPL_LINK(PerfQueryInstance, 16)
WIN32_IMPL_LINK(PerfSetCounterRefValue, 16)
WIN32_IMPL_LINK(PerfSetULongCounterValue, 16)
WIN32_IMPL_LINK(PerfSetULongLongCounterValue, 20)
WIN32_IMPL_LINK(PerfIncrementULongCounterValue, 16)
WIN32_IMPL_LINK(PerfIncrementULongLongCounterValue, 20)
WIN32_IMPL_LINK(PerfDecrementULongCounterValue, 16)
WIN32_IMPL_LINK(PerfDecrementULongLongCounterValue, 20)
WIN32_IMPL_LINK(PerfEnumerateCounterSet, 16)
WIN32_IMPL_LINK(PerfEnumerateCounterSetInstances, 20)
WIN32_IMPL_LINK(PerfQueryCounterSetRegistrationInfo, 28)
WIN32_IMPL_LINK(PerfOpenQueryHandle, 8)
WIN32_IMPL_LINK(PerfCloseQueryHandle, 4)
WIN32_IMPL_LINK(PerfQueryCounterInfo, 16)
WIN32_IMPL_LINK(PerfQueryCounterData, 16)
WIN32_IMPL_LINK(PerfAddCounters, 12)
WIN32_IMPL_LINK(PerfDeleteCounters, 12)
WIN32_IMPL_LINK(PdhGetDllVersion, 4)
WIN32_IMPL_LINK(PdhOpenQueryW, 12)
WIN32_IMPL_LINK(PdhOpenQueryA, 12)
WIN32_IMPL_LINK(PdhAddCounterW, 16)
WIN32_IMPL_LINK(PdhAddCounterA, 16)
WIN32_IMPL_LINK(PdhAddEnglishCounterW, 16)
WIN32_IMPL_LINK(PdhAddEnglishCounterA, 16)
WIN32_IMPL_LINK(PdhCollectQueryDataWithTime, 8)
WIN32_IMPL_LINK(PdhValidatePathExW, 8)
WIN32_IMPL_LINK(PdhValidatePathExA, 8)
WIN32_IMPL_LINK(PdhRemoveCounter, 4)
WIN32_IMPL_LINK(PdhCollectQueryData, 4)
WIN32_IMPL_LINK(PdhCloseQuery, 4)
WIN32_IMPL_LINK(PdhGetFormattedCounterValue, 16)
WIN32_IMPL_LINK(PdhGetFormattedCounterArrayA, 20)
WIN32_IMPL_LINK(PdhGetFormattedCounterArrayW, 20)
WIN32_IMPL_LINK(PdhGetRawCounterValue, 12)
WIN32_IMPL_LINK(PdhGetRawCounterArrayA, 16)
WIN32_IMPL_LINK(PdhGetRawCounterArrayW, 16)
WIN32_IMPL_LINK(PdhCalculateCounterFromRawValue, 20)
WIN32_IMPL_LINK(PdhComputeCounterStatistics, 24)
WIN32_IMPL_LINK(PdhGetCounterInfoW, 16)
WIN32_IMPL_LINK(PdhGetCounterInfoA, 16)
WIN32_IMPL_LINK(PdhSetCounterScaleFactor, 8)
WIN32_IMPL_LINK(PdhConnectMachineW, 4)
WIN32_IMPL_LINK(PdhConnectMachineA, 4)
WIN32_IMPL_LINK(PdhEnumMachinesW, 12)
WIN32_IMPL_LINK(PdhEnumMachinesA, 12)
WIN32_IMPL_LINK(PdhEnumObjectsW, 24)
WIN32_IMPL_LINK(PdhEnumObjectsA, 24)
WIN32_IMPL_LINK(PdhEnumObjectItemsW, 36)
WIN32_IMPL_LINK(PdhEnumObjectItemsA, 36)
WIN32_IMPL_LINK(PdhMakeCounterPathW, 16)
WIN32_IMPL_LINK(PdhMakeCounterPathA, 16)
WIN32_IMPL_LINK(PdhParseCounterPathW, 16)
WIN32_IMPL_LINK(PdhParseCounterPathA, 16)
WIN32_IMPL_LINK(PdhParseInstanceNameW, 24)
WIN32_IMPL_LINK(PdhParseInstanceNameA, 24)
WIN32_IMPL_LINK(PdhValidatePathW, 4)
WIN32_IMPL_LINK(PdhValidatePathA, 4)
WIN32_IMPL_LINK(PdhGetDefaultPerfObjectW, 16)
WIN32_IMPL_LINK(PdhGetDefaultPerfObjectA, 16)
WIN32_IMPL_LINK(PdhGetDefaultPerfCounterW, 20)
WIN32_IMPL_LINK(PdhGetDefaultPerfCounterA, 20)
WIN32_IMPL_LINK(PdhBrowseCountersW, 4)
WIN32_IMPL_LINK(PdhBrowseCountersA, 4)
WIN32_IMPL_LINK(PdhExpandCounterPathW, 12)
WIN32_IMPL_LINK(PdhExpandCounterPathA, 12)
WIN32_IMPL_LINK(PdhLookupPerfNameByIndexW, 16)
WIN32_IMPL_LINK(PdhLookupPerfNameByIndexA, 16)
WIN32_IMPL_LINK(PdhLookupPerfIndexByNameW, 12)
WIN32_IMPL_LINK(PdhLookupPerfIndexByNameA, 12)
WIN32_IMPL_LINK(PdhExpandWildCardPathA, 20)
WIN32_IMPL_LINK(PdhExpandWildCardPathW, 20)
WIN32_IMPL_LINK(PdhOpenLogW, 28)
WIN32_IMPL_LINK(PdhOpenLogA, 28)
WIN32_IMPL_LINK(PdhUpdateLogW, 8)
WIN32_IMPL_LINK(PdhUpdateLogA, 8)
WIN32_IMPL_LINK(PdhUpdateLogFileCatalog, 4)
WIN32_IMPL_LINK(PdhGetLogFileSize, 8)
WIN32_IMPL_LINK(PdhCloseLog, 8)
WIN32_IMPL_LINK(PdhSelectDataSourceW, 16)
WIN32_IMPL_LINK(PdhSelectDataSourceA, 16)
WIN32_IMPL_LINK(PdhIsRealTimeQuery, 4)
WIN32_IMPL_LINK(PdhSetQueryTimeRange, 8)
WIN32_IMPL_LINK(PdhGetDataSourceTimeRangeW, 16)
WIN32_IMPL_LINK(PdhGetDataSourceTimeRangeA, 16)
WIN32_IMPL_LINK(PdhCollectQueryDataEx, 12)
WIN32_IMPL_LINK(PdhFormatFromRawValue, 24)
WIN32_IMPL_LINK(PdhGetCounterTimeBase, 8)
WIN32_IMPL_LINK(PdhReadRawLogRecord, 16)
WIN32_IMPL_LINK(PdhSetDefaultRealTimeDataSource, 4)
WIN32_IMPL_LINK(PdhBindInputDataSourceW, 8)
WIN32_IMPL_LINK(PdhBindInputDataSourceA, 8)
WIN32_IMPL_LINK(PdhOpenQueryH, 12)
WIN32_IMPL_LINK(PdhEnumMachinesHW, 12)
WIN32_IMPL_LINK(PdhEnumMachinesHA, 12)
WIN32_IMPL_LINK(PdhEnumObjectsHW, 24)
WIN32_IMPL_LINK(PdhEnumObjectsHA, 24)
WIN32_IMPL_LINK(PdhEnumObjectItemsHW, 36)
WIN32_IMPL_LINK(PdhEnumObjectItemsHA, 36)
WIN32_IMPL_LINK(PdhExpandWildCardPathHW, 20)
WIN32_IMPL_LINK(PdhExpandWildCardPathHA, 20)
WIN32_IMPL_LINK(PdhGetDataSourceTimeRangeH, 16)
WIN32_IMPL_LINK(PdhGetDefaultPerfObjectHW, 16)
WIN32_IMPL_LINK(PdhGetDefaultPerfObjectHA, 16)
WIN32_IMPL_LINK(PdhGetDefaultPerfCounterHW, 20)
WIN32_IMPL_LINK(PdhGetDefaultPerfCounterHA, 20)
WIN32_IMPL_LINK(PdhBrowseCountersHW, 4)
WIN32_IMPL_LINK(PdhBrowseCountersHA, 4)
WIN32_IMPL_LINK(PdhVerifySQLDBW, 4)
WIN32_IMPL_LINK(PdhVerifySQLDBA, 4)
WIN32_IMPL_LINK(PdhCreateSQLTablesW, 4)
WIN32_IMPL_LINK(PdhCreateSQLTablesA, 4)
WIN32_IMPL_LINK(PdhEnumLogSetNamesW, 12)
WIN32_IMPL_LINK(PdhEnumLogSetNamesA, 12)
WIN32_IMPL_LINK(PdhGetLogSetGUID, 12)
WIN32_IMPL_LINK(PdhSetLogSetRunID, 8)

#pragma endregion abi_methods

#endif
