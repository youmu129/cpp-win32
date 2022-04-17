// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_QualityOfService_H
#define WIN32_Windows_Win32_QualityOfService_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.QualityOfService.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::QualityOfService
{
#pragma region methods
    inline Windows::Win32::SystemServices::BOOL QOSCreateHandle(Windows::Win32::QualityOfService::QOS_VERSION* Version, intptr_t* QOSHandle)
    {
        auto win32_impl_result = WIN32_IMPL_QOSCreateHandle(Version, QOSHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSCloseHandle(Windows::Win32::SystemServices::HANDLE QOSHandle)
    {
        auto win32_impl_result = WIN32_IMPL_QOSCloseHandle(QOSHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSStartTrackingClient(Windows::Win32::SystemServices::HANDLE QOSHandle, Windows::Win32::WinSock::SOCKADDR* DestAddr, uint32_t Flags)
    {
        auto win32_impl_result = WIN32_IMPL_QOSStartTrackingClient(QOSHandle, DestAddr, Flags);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSStopTrackingClient(Windows::Win32::SystemServices::HANDLE QOSHandle, Windows::Win32::WinSock::SOCKADDR* DestAddr, uint32_t Flags)
    {
        auto win32_impl_result = WIN32_IMPL_QOSStopTrackingClient(QOSHandle, DestAddr, Flags);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSEnumerateFlows(Windows::Win32::SystemServices::HANDLE QOSHandle, uint32_t* Size, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_QOSEnumerateFlows(QOSHandle, Size, Buffer);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSAddSocketToFlow(Windows::Win32::SystemServices::HANDLE QOSHandle, size_t Socket, Windows::Win32::WinSock::SOCKADDR* DestAddr, Windows::Win32::QualityOfService::QOS_TRAFFIC_TYPE TrafficType, uint32_t Flags, uint32_t* FlowId)
    {
        auto win32_impl_result = WIN32_IMPL_QOSAddSocketToFlow(QOSHandle, Socket, DestAddr, TrafficType, Flags, FlowId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSRemoveSocketFromFlow(Windows::Win32::SystemServices::HANDLE QOSHandle, size_t Socket, uint32_t FlowId, uint32_t Flags)
    {
        auto win32_impl_result = WIN32_IMPL_QOSRemoveSocketFromFlow(QOSHandle, Socket, FlowId, Flags);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSSetFlow(Windows::Win32::SystemServices::HANDLE QOSHandle, uint32_t FlowId, Windows::Win32::QualityOfService::QOS_SET_FLOW Operation, uint32_t Size, void* Buffer, uint32_t Flags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_QOSSetFlow(QOSHandle, FlowId, Operation, Size, Buffer, Flags, Overlapped);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSQueryFlow(Windows::Win32::SystemServices::HANDLE QOSHandle, uint32_t FlowId, Windows::Win32::QualityOfService::QOS_QUERY_FLOW Operation, uint32_t* Size, void* Buffer, uint32_t Flags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_QOSQueryFlow(QOSHandle, FlowId, Operation, Size, Buffer, Flags, Overlapped);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSNotifyFlow(Windows::Win32::SystemServices::HANDLE QOSHandle, uint32_t FlowId, Windows::Win32::QualityOfService::QOS_NOTIFY_FLOW Operation, uint32_t* Size, void* Buffer, uint32_t Flags, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_QOSNotifyFlow(QOSHandle, FlowId, Operation, Size, Buffer, Flags, Overlapped);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL QOSCancel(Windows::Win32::SystemServices::HANDLE QOSHandle, Windows::Win32::SystemServices::OVERLAPPED* Overlapped)
    {
        auto win32_impl_result = WIN32_IMPL_QOSCancel(QOSHandle, Overlapped);
        return win32_impl_result;
    }
    inline uint32_t TcRegisterClient(uint32_t TciVersion, Windows::Win32::SystemServices::HANDLE ClRegCtx, Windows::Win32::QualityOfService::TCI_CLIENT_FUNC_LIST* ClientHandlerList, intptr_t* pClientHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcRegisterClient(TciVersion, ClRegCtx, ClientHandlerList, pClientHandle);
        return win32_impl_result;
    }
    inline uint32_t TcEnumerateInterfaces(Windows::Win32::SystemServices::HANDLE ClientHandle, uint32_t* pBufferSize, Windows::Win32::QualityOfService::TC_IFC_DESCRIPTOR* InterfaceBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcEnumerateInterfaces(ClientHandle, pBufferSize, InterfaceBuffer);
        return win32_impl_result;
    }
    inline uint32_t TcOpenInterfaceA(int8_t* pInterfaceName, Windows::Win32::SystemServices::HANDLE ClientHandle, Windows::Win32::SystemServices::HANDLE ClIfcCtx, intptr_t* pIfcHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcOpenInterfaceA(pInterfaceName, ClientHandle, ClIfcCtx, pIfcHandle);
        return win32_impl_result;
    }
    inline uint32_t TcOpenInterfaceW(uint16_t* pInterfaceName, Windows::Win32::SystemServices::HANDLE ClientHandle, Windows::Win32::SystemServices::HANDLE ClIfcCtx, intptr_t* pIfcHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcOpenInterfaceW(pInterfaceName, ClientHandle, ClIfcCtx, pIfcHandle);
        return win32_impl_result;
    }
    inline uint32_t TcCloseInterface(Windows::Win32::SystemServices::HANDLE IfcHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcCloseInterface(IfcHandle);
        return win32_impl_result;
    }
    inline uint32_t TcQueryInterface(Windows::Win32::SystemServices::HANDLE IfcHandle, ::win32::guid* pGuidParam, uint8_t NotifyChange, uint32_t* pBufferSize, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcQueryInterface(IfcHandle, pGuidParam, NotifyChange, pBufferSize, Buffer);
        return win32_impl_result;
    }
    inline uint32_t TcSetInterface(Windows::Win32::SystemServices::HANDLE IfcHandle, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcSetInterface(IfcHandle, pGuidParam, BufferSize, Buffer);
        return win32_impl_result;
    }
    inline uint32_t TcQueryFlowA(int8_t* pFlowName, ::win32::guid* pGuidParam, uint32_t* pBufferSize, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcQueryFlowA(pFlowName, pGuidParam, pBufferSize, Buffer);
        return win32_impl_result;
    }
    inline uint32_t TcQueryFlowW(uint16_t* pFlowName, ::win32::guid* pGuidParam, uint32_t* pBufferSize, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcQueryFlowW(pFlowName, pGuidParam, pBufferSize, Buffer);
        return win32_impl_result;
    }
    inline uint32_t TcSetFlowA(int8_t* pFlowName, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcSetFlowA(pFlowName, pGuidParam, BufferSize, Buffer);
        return win32_impl_result;
    }
    inline uint32_t TcSetFlowW(uint16_t* pFlowName, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcSetFlowW(pFlowName, pGuidParam, BufferSize, Buffer);
        return win32_impl_result;
    }
    inline uint32_t TcAddFlow(Windows::Win32::SystemServices::HANDLE IfcHandle, Windows::Win32::SystemServices::HANDLE ClFlowCtx, uint32_t Flags, Windows::Win32::QualityOfService::TC_GEN_FLOW* pGenericFlow, intptr_t* pFlowHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcAddFlow(IfcHandle, ClFlowCtx, Flags, pGenericFlow, pFlowHandle);
        return win32_impl_result;
    }
    inline uint32_t TcGetFlowNameA(Windows::Win32::SystemServices::HANDLE FlowHandle, uint32_t StrSize, int8_t* pFlowName)
    {
        auto win32_impl_result = WIN32_IMPL_TcGetFlowNameA(FlowHandle, StrSize, pFlowName);
        return win32_impl_result;
    }
    inline uint32_t TcGetFlowNameW(Windows::Win32::SystemServices::HANDLE FlowHandle, uint32_t StrSize, uint16_t* pFlowName)
    {
        auto win32_impl_result = WIN32_IMPL_TcGetFlowNameW(FlowHandle, StrSize, pFlowName);
        return win32_impl_result;
    }
    inline uint32_t TcModifyFlow(Windows::Win32::SystemServices::HANDLE FlowHandle, Windows::Win32::QualityOfService::TC_GEN_FLOW* pGenericFlow)
    {
        auto win32_impl_result = WIN32_IMPL_TcModifyFlow(FlowHandle, pGenericFlow);
        return win32_impl_result;
    }
    inline uint32_t TcAddFilter(Windows::Win32::SystemServices::HANDLE FlowHandle, Windows::Win32::QualityOfService::TC_GEN_FILTER* pGenericFilter, intptr_t* pFilterHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcAddFilter(FlowHandle, pGenericFilter, pFilterHandle);
        return win32_impl_result;
    }
    inline uint32_t TcDeregisterClient(Windows::Win32::SystemServices::HANDLE ClientHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcDeregisterClient(ClientHandle);
        return win32_impl_result;
    }
    inline uint32_t TcDeleteFlow(Windows::Win32::SystemServices::HANDLE FlowHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcDeleteFlow(FlowHandle);
        return win32_impl_result;
    }
    inline uint32_t TcDeleteFilter(Windows::Win32::SystemServices::HANDLE FilterHandle)
    {
        auto win32_impl_result = WIN32_IMPL_TcDeleteFilter(FilterHandle);
        return win32_impl_result;
    }
    inline uint32_t TcEnumerateFlows(Windows::Win32::SystemServices::HANDLE IfcHandle, intptr_t* pEnumHandle, uint32_t* pFlowCount, uint32_t* pBufSize, Windows::Win32::QualityOfService::ENUMERATION_BUFFER* Buffer)
    {
        auto win32_impl_result = WIN32_IMPL_TcEnumerateFlows(IfcHandle, pEnumHandle, pFlowCount, pBufSize, Buffer);
        return win32_impl_result;
    }

    inline constexpr int32_t IS_GUAR_RSPEC = 130;
    inline constexpr int32_t GUAR_ADSPARM_C = 131;
    inline constexpr int32_t GUAR_ADSPARM_D = 132;
    inline constexpr int32_t GUAR_ADSPARM_Ctot = 133;
    inline constexpr int32_t GUAR_ADSPARM_Dtot = 134;
    inline constexpr int32_t GUAR_ADSPARM_Csum = 135;
    inline constexpr int32_t GUAR_ADSPARM_Dsum = 136;
#pragma endregion methods

}
#endif