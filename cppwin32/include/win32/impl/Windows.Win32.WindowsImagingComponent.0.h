// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsImagingComponent_0_H
#define WIN32_Windows_Win32_WindowsImagingComponent_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsImagingComponent
{
#pragma region enums
    enum class WIC8BIMIptcDigestProperties : uint32_t
    {
        WIC8BIMIptcDigestPString = 0x1,
        WIC8BIMIptcDigestIptcDigest = 0x2,
        WIC8BIMIptcDigestProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WIC8BIMIptcProperties : uint32_t
    {
        WIC8BIMIptcPString = 0x0,
        WIC8BIMIptcEmbeddedIPTC = 0x1,
        WIC8BIMIptcProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WIC8BIMResolutionInfoProperties : uint32_t
    {
        WIC8BIMResolutionInfoPString = 0x1,
        WIC8BIMResolutionInfoHResolution = 0x2,
        WIC8BIMResolutionInfoHResolutionUnit = 0x3,
        WIC8BIMResolutionInfoWidthUnit = 0x4,
        WIC8BIMResolutionInfoVResolution = 0x5,
        WIC8BIMResolutionInfoVResolutionUnit = 0x6,
        WIC8BIMResolutionInfoHeightUnit = 0x7,
        WIC8BIMResolutionInfoProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICBitmapAlphaChannelOption : int32_t
    {
        WICBitmapUseAlpha = 0,
        WICBitmapUsePremultipliedAlpha = 1,
        WICBitmapIgnoreAlpha = 2,
        WICBITMAPALPHACHANNELOPTIONS_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapCreateCacheOption : int32_t
    {
        WICBitmapNoCache = 0,
        WICBitmapCacheOnDemand = 1,
        WICBitmapCacheOnLoad = 2,
        WICBITMAPCREATECACHEOPTION_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapDecoderCapabilities : int32_t
    {
        WICBitmapDecoderCapabilitySameEncoder = 1,
        WICBitmapDecoderCapabilityCanDecodeAllImages = 2,
        WICBitmapDecoderCapabilityCanDecodeSomeImages = 4,
        WICBitmapDecoderCapabilityCanEnumerateMetadata = 8,
        WICBitmapDecoderCapabilityCanDecodeThumbnail = 16,
        WICBITMAPDECODERCAPABILITIES_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapDitherType : int32_t
    {
        WICBitmapDitherTypeNone = 0,
        WICBitmapDitherTypeSolid = 0,
        WICBitmapDitherTypeOrdered4x4 = 1,
        WICBitmapDitherTypeOrdered8x8 = 2,
        WICBitmapDitherTypeOrdered16x16 = 3,
        WICBitmapDitherTypeSpiral4x4 = 4,
        WICBitmapDitherTypeSpiral8x8 = 5,
        WICBitmapDitherTypeDualSpiral4x4 = 6,
        WICBitmapDitherTypeDualSpiral8x8 = 7,
        WICBitmapDitherTypeErrorDiffusion = 8,
        WICBITMAPDITHERTYPE_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapEncoderCacheOption : int32_t
    {
        WICBitmapEncoderCacheInMemory = 0,
        WICBitmapEncoderCacheTempFile = 1,
        WICBitmapEncoderNoCache = 2,
        WICBITMAPENCODERCACHEOPTION_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapInterpolationMode : int32_t
    {
        WICBitmapInterpolationModeNearestNeighbor = 0,
        WICBitmapInterpolationModeLinear = 1,
        WICBitmapInterpolationModeCubic = 2,
        WICBitmapInterpolationModeFant = 3,
        WICBitmapInterpolationModeHighQualityCubic = 4,
        WICBITMAPINTERPOLATIONMODE_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapLockFlags : int32_t
    {
        WICBitmapLockRead = 1,
        WICBitmapLockWrite = 2,
        WICBITMAPLOCKFLAGS_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapPaletteType : int32_t
    {
        WICBitmapPaletteTypeCustom = 0,
        WICBitmapPaletteTypeMedianCut = 1,
        WICBitmapPaletteTypeFixedBW = 2,
        WICBitmapPaletteTypeFixedHalftone8 = 3,
        WICBitmapPaletteTypeFixedHalftone27 = 4,
        WICBitmapPaletteTypeFixedHalftone64 = 5,
        WICBitmapPaletteTypeFixedHalftone125 = 6,
        WICBitmapPaletteTypeFixedHalftone216 = 7,
        WICBitmapPaletteTypeFixedWebPalette = 7,
        WICBitmapPaletteTypeFixedHalftone252 = 8,
        WICBitmapPaletteTypeFixedHalftone256 = 9,
        WICBitmapPaletteTypeFixedGray4 = 10,
        WICBitmapPaletteTypeFixedGray16 = 11,
        WICBitmapPaletteTypeFixedGray256 = 12,
        WICBITMAPPALETTETYPE_FORCE_DWORD = 2147483647,
    };
    enum class WICBitmapTransformOptions : int32_t
    {
        WICBitmapTransformRotate0 = 0,
        WICBitmapTransformRotate90 = 1,
        WICBitmapTransformRotate180 = 2,
        WICBitmapTransformRotate270 = 3,
        WICBitmapTransformFlipHorizontal = 8,
        WICBitmapTransformFlipVertical = 16,
        WICBITMAPTRANSFORMOPTIONS_FORCE_DWORD = 2147483647,
    };
    enum class WICColorContextType : int32_t
    {
        WICColorContextUninitialized = 0,
        WICColorContextProfile = 1,
        WICColorContextExifColorSpace = 2,
    };
    enum class WICComponentEnumerateOptions : int32_t
    {
        WICComponentEnumerateDefault = 0,
        WICComponentEnumerateRefresh = 1,
        WICComponentEnumerateDisabled = -2147483648,
        WICComponentEnumerateUnsigned = 1073741824,
        WICComponentEnumerateBuiltInOnly = 536870912,
        WICCOMPONENTENUMERATEOPTIONS_FORCE_DWORD = 2147483647,
    };
    enum class WICComponentSigning : int32_t
    {
        WICComponentSigned = 1,
        WICComponentUnsigned = 2,
        WICComponentSafe = 4,
        WICComponentDisabled = -2147483648,
        WICCOMPONENTSIGNING_FORCE_DWORD = 2147483647,
    };
    enum class WICComponentType : int32_t
    {
        WICDecoder = 1,
        WICEncoder = 2,
        WICPixelFormatConverter = 4,
        WICMetadataReader = 8,
        WICMetadataWriter = 16,
        WICPixelFormat = 32,
        WICAllComponents = 63,
        WICCOMPONENTTYPE_FORCE_DWORD = 2147483647,
    };
    enum class WICDdsAlphaMode : int32_t
    {
        WICDdsAlphaModeUnknown = 0,
        WICDdsAlphaModeStraight = 1,
        WICDdsAlphaModePremultiplied = 2,
        WICDdsAlphaModeOpaque = 3,
        WICDdsAlphaModeCustom = 4,
        WICDDSALPHAMODE_FORCE_DWORD = 2147483647,
    };
    enum class WICDdsDimension : int32_t
    {
        WICDdsTexture1D = 0,
        WICDdsTexture2D = 1,
        WICDdsTexture3D = 2,
        WICDdsTextureCube = 3,
        WICDDSTEXTURE_FORCE_DWORD = 2147483647,
    };
    enum class WICDecodeOptions : int32_t
    {
        WICDecodeMetadataCacheOnDemand = 0,
        WICDecodeMetadataCacheOnLoad = 1,
        WICMETADATACACHEOPTION_FORCE_DWORD = 2147483647,
    };
    enum class WICGifApplicationExtensionProperties : uint32_t
    {
        WICGifApplicationExtensionApplication = 0x1,
        WICGifApplicationExtensionData = 0x2,
        WICGifApplicationExtensionProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICGifCommentExtensionProperties : uint32_t
    {
        WICGifCommentExtensionText = 0x1,
        WICGifCommentExtensionProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICGifGraphicControlExtensionProperties : uint32_t
    {
        WICGifGraphicControlExtensionDisposal = 0x1,
        WICGifGraphicControlExtensionUserInputFlag = 0x2,
        WICGifGraphicControlExtensionTransparencyFlag = 0x3,
        WICGifGraphicControlExtensionDelay = 0x4,
        WICGifGraphicControlExtensionTransparentColorIndex = 0x5,
        WICGifGraphicControlExtensionProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICGifImageDescriptorProperties : uint32_t
    {
        WICGifImageDescriptorLeft = 0x1,
        WICGifImageDescriptorTop = 0x2,
        WICGifImageDescriptorWidth = 0x3,
        WICGifImageDescriptorHeight = 0x4,
        WICGifImageDescriptorLocalColorTableFlag = 0x5,
        WICGifImageDescriptorInterlaceFlag = 0x6,
        WICGifImageDescriptorSortFlag = 0x7,
        WICGifImageDescriptorLocalColorTableSize = 0x8,
        WICGifImageDescriptorProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICGifLogicalScreenDescriptorProperties : uint32_t
    {
        WICGifLogicalScreenSignature = 0x1,
        WICGifLogicalScreenDescriptorWidth = 0x2,
        WICGifLogicalScreenDescriptorHeight = 0x3,
        WICGifLogicalScreenDescriptorGlobalColorTableFlag = 0x4,
        WICGifLogicalScreenDescriptorColorResolution = 0x5,
        WICGifLogicalScreenDescriptorSortFlag = 0x6,
        WICGifLogicalScreenDescriptorGlobalColorTableSize = 0x7,
        WICGifLogicalScreenDescriptorBackgroundColorIndex = 0x8,
        WICGifLogicalScreenDescriptorPixelAspectRatio = 0x9,
        WICGifLogicalScreenDescriptorProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICHeifHdrProperties : uint32_t
    {
        WICHeifHdrMaximumLuminanceLevel = 0x1,
        WICHeifHdrMaximumFrameAverageLuminanceLevel = 0x2,
        WICHeifHdrMinimumMasteringDisplayLuminanceLevel = 0x3,
        WICHeifHdrMaximumMasteringDisplayLuminanceLevel = 0x4,
        WICHeifHdrCustomVideoPrimaries = 0x5,
        WICHeifHdrProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICHeifProperties : uint32_t
    {
        WICHeifOrientation = 0x1,
        WICHeifProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegChrominanceProperties : uint32_t
    {
        WICJpegChrominanceTable = 0x1,
        WICJpegChrominanceProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegCommentProperties : uint32_t
    {
        WICJpegCommentText = 0x1,
        WICJpegCommentProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegIndexingOptions : uint32_t
    {
        WICJpegIndexingOptionsGenerateOnDemand = 0x0,
        WICJpegIndexingOptionsGenerateOnLoad = 0x1,
        WICJpegIndexingOptions_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegLuminanceProperties : uint32_t
    {
        WICJpegLuminanceTable = 0x1,
        WICJpegLuminanceProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegScanType : uint32_t
    {
        WICJpegScanTypeInterleaved = 0x0,
        WICJpegScanTypePlanarComponents = 0x1,
        WICJpegScanTypeProgressive = 0x2,
        WICJpegScanType_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegTransferMatrix : uint32_t
    {
        WICJpegTransferMatrixIdentity = 0x0,
        WICJpegTransferMatrixBT601 = 0x1,
        WICJpegTransferMatrix_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICJpegYCrCbSubsamplingOption : int32_t
    {
        WICJpegYCrCbSubsamplingDefault = 0,
        WICJpegYCrCbSubsampling420 = 1,
        WICJpegYCrCbSubsampling422 = 2,
        WICJpegYCrCbSubsampling444 = 3,
        WICJpegYCrCbSubsampling440 = 4,
        WICJPEGYCRCBSUBSAMPLING_FORCE_DWORD = 2147483647,
    };
    enum class WICMetadataCreationOptions : int32_t
    {
        WICMetadataCreationDefault = 0,
        WICMetadataCreationAllowUnknown = 0,
        WICMetadataCreationFailUnknown = 65536,
        WICMetadataCreationMask = -65536,
    };
    enum class WICNamedWhitePoint : int32_t
    {
        WICWhitePointDefault = 1,
        WICWhitePointDaylight = 2,
        WICWhitePointCloudy = 4,
        WICWhitePointShade = 8,
        WICWhitePointTungsten = 16,
        WICWhitePointFluorescent = 32,
        WICWhitePointFlash = 64,
        WICWhitePointUnderwater = 128,
        WICWhitePointCustom = 256,
        WICWhitePointAutoWhiteBalance = 512,
        WICWhitePointAsShot = 1,
        WICNAMEDWHITEPOINT_FORCE_DWORD = 2147483647,
    };
    enum class WICPersistOptions : int32_t
    {
        WICPersistOptionDefault = 0,
        WICPersistOptionLittleEndian = 0,
        WICPersistOptionBigEndian = 1,
        WICPersistOptionStrictFormat = 2,
        WICPersistOptionNoCacheStream = 4,
        WICPersistOptionPreferUTF8 = 8,
        WICPersistOptionMask = 65535,
    };
    enum class WICPixelFormatNumericRepresentation : uint32_t
    {
        WICPixelFormatNumericRepresentationUnspecified = 0x0,
        WICPixelFormatNumericRepresentationIndexed = 0x1,
        WICPixelFormatNumericRepresentationUnsignedInteger = 0x2,
        WICPixelFormatNumericRepresentationSignedInteger = 0x3,
        WICPixelFormatNumericRepresentationFixed = 0x4,
        WICPixelFormatNumericRepresentationFloat = 0x5,
        WICPixelFormatNumericRepresentation_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPlanarOptions : int32_t
    {
        WICPlanarOptionsDefault = 0,
        WICPlanarOptionsPreserveSubsampling = 1,
        WICPLANAROPTIONS_FORCE_DWORD = 2147483647,
    };
    enum class WICPngBkgdProperties : uint32_t
    {
        WICPngBkgdBackgroundColor = 0x1,
        WICPngBkgdProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngChrmProperties : uint32_t
    {
        WICPngChrmWhitePointX = 0x1,
        WICPngChrmWhitePointY = 0x2,
        WICPngChrmRedX = 0x3,
        WICPngChrmRedY = 0x4,
        WICPngChrmGreenX = 0x5,
        WICPngChrmGreenY = 0x6,
        WICPngChrmBlueX = 0x7,
        WICPngChrmBlueY = 0x8,
        WICPngChrmProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngFilterOption : int32_t
    {
        WICPngFilterUnspecified = 0,
        WICPngFilterNone = 1,
        WICPngFilterSub = 2,
        WICPngFilterUp = 3,
        WICPngFilterAverage = 4,
        WICPngFilterPaeth = 5,
        WICPngFilterAdaptive = 6,
        WICPNGFILTEROPTION_FORCE_DWORD = 2147483647,
    };
    enum class WICPngGamaProperties : uint32_t
    {
        WICPngGamaGamma = 0x1,
        WICPngGamaProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngHistProperties : uint32_t
    {
        WICPngHistFrequencies = 0x1,
        WICPngHistProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngIccpProperties : uint32_t
    {
        WICPngIccpProfileName = 0x1,
        WICPngIccpProfileData = 0x2,
        WICPngIccpProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngItxtProperties : uint32_t
    {
        WICPngItxtKeyword = 0x1,
        WICPngItxtCompressionFlag = 0x2,
        WICPngItxtLanguageTag = 0x3,
        WICPngItxtTranslatedKeyword = 0x4,
        WICPngItxtText = 0x5,
        WICPngItxtProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngSrgbProperties : uint32_t
    {
        WICPngSrgbRenderingIntent = 0x1,
        WICPngSrgbProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICPngTimeProperties : uint32_t
    {
        WICPngTimeYear = 0x1,
        WICPngTimeMonth = 0x2,
        WICPngTimeDay = 0x3,
        WICPngTimeHour = 0x4,
        WICPngTimeMinute = 0x5,
        WICPngTimeSecond = 0x6,
        WICPngTimeProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICProgressNotification : int32_t
    {
        WICProgressNotificationBegin = 65536,
        WICProgressNotificationEnd = 131072,
        WICProgressNotificationFrequent = 262144,
        WICProgressNotificationAll = -65536,
        WICPROGRESSNOTIFICATION_FORCE_DWORD = 2147483647,
    };
    enum class WICProgressOperation : int32_t
    {
        WICProgressOperationCopyPixels = 1,
        WICProgressOperationWritePixels = 2,
        WICProgressOperationAll = 65535,
        WICPROGRESSOPERATION_FORCE_DWORD = 2147483647,
    };
    enum class WICRawCapabilities : int32_t
    {
        WICRawCapabilityNotSupported = 0,
        WICRawCapabilityGetSupported = 1,
        WICRawCapabilityFullySupported = 2,
        WICRAWCAPABILITIES_FORCE_DWORD = 2147483647,
    };
    enum class WICRawParameterSet : int32_t
    {
        WICAsShotParameterSet = 1,
        WICUserAdjustedParameterSet = 2,
        WICAutoAdjustedParameterSet = 3,
        WICRAWPARAMETERSET_FORCE_DWORD = 2147483647,
    };
    enum class WICRawRenderMode : int32_t
    {
        WICRawRenderModeDraft = 1,
        WICRawRenderModeNormal = 2,
        WICRawRenderModeBestQuality = 3,
        WICRAWRENDERMODE_FORCE_DWORD = 2147483647,
    };
    enum class WICRawRotationCapabilities : int32_t
    {
        WICRawRotationCapabilityNotSupported = 0,
        WICRawRotationCapabilityGetSupported = 1,
        WICRawRotationCapabilityNinetyDegreesSupported = 2,
        WICRawRotationCapabilityFullySupported = 3,
        WICRAWROTATIONCAPABILITIES_FORCE_DWORD = 2147483647,
    };
    enum class WICSectionAccessLevel : uint32_t
    {
        WICSectionAccessLevelRead = 0x1,
        WICSectionAccessLevelReadWrite = 0x3,
        WICSectionAccessLevel_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICTiffCompressionOption : int32_t
    {
        WICTiffCompressionDontCare = 0,
        WICTiffCompressionNone = 1,
        WICTiffCompressionCCITT3 = 2,
        WICTiffCompressionCCITT4 = 3,
        WICTiffCompressionLZW = 4,
        WICTiffCompressionRLE = 5,
        WICTiffCompressionZIP = 6,
        WICTiffCompressionLZWHDifferencing = 7,
        WICTIFFCOMPRESSIONOPTION_FORCE_DWORD = 2147483647,
    };
    enum class WICWebpAnimProperties : uint32_t
    {
        WICWebpAnimLoopCount = 0x1,
        WICWebpAnimProperties_FORCE_DWORD = 0x7fffffff,
    };
    enum class WICWebpAnmfProperties : uint32_t
    {
        WICWebpAnmfFrameDuration = 0x1,
        WICWebpAnmfProperties_FORCE_DWORD = 0x7fffffff,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct WICBitmapPattern;
    struct WICBitmapPlane;
    struct WICBitmapPlaneDescription;
    struct WICDdsFormatInfo;
    struct WICDdsParameters;
    struct WICImageParameters;
    struct WICJpegFrameHeader;
    struct WICJpegScanHeader;
    struct WICMetadataHeader;
    struct WICMetadataPattern;
    struct WICRawCapabilitiesInfo;
    struct WICRawToneCurve;
    struct WICRawToneCurvePoint;
    struct WICRect;
    struct IWICBitmap;
    struct IWICBitmapClipper;
    struct IWICBitmapCodecInfo;
    struct IWICBitmapCodecProgressNotification;
    struct IWICBitmapDecoder;
    struct IWICBitmapDecoderInfo;
    struct IWICBitmapEncoder;
    struct IWICBitmapEncoderInfo;
    struct IWICBitmapFlipRotator;
    struct IWICBitmapFrameDecode;
    struct IWICBitmapFrameEncode;
    struct IWICBitmapLock;
    struct IWICBitmapScaler;
    struct IWICBitmapSource;
    struct IWICBitmapSourceTransform;
    struct IWICColorContext;
    struct IWICColorTransform;
    struct IWICComponentFactory;
    struct IWICComponentInfo;
    struct IWICDdsDecoder;
    struct IWICDdsEncoder;
    struct IWICDdsFrameDecode;
    struct IWICDevelopRaw;
    struct IWICDevelopRawNotificationCallback;
    struct IWICEnumMetadataItem;
    struct IWICFastMetadataEncoder;
    struct IWICFormatConverter;
    struct IWICFormatConverterInfo;
    struct IWICImageEncoder;
    struct IWICImagingFactory;
    struct IWICImagingFactory2;
    struct IWICJpegFrameDecode;
    struct IWICJpegFrameEncode;
    struct IWICMetadataBlockReader;
    struct IWICMetadataBlockWriter;
    struct IWICMetadataHandlerInfo;
    struct IWICMetadataQueryReader;
    struct IWICMetadataQueryWriter;
    struct IWICMetadataReader;
    struct IWICMetadataReaderInfo;
    struct IWICMetadataWriter;
    struct IWICMetadataWriterInfo;
    struct IWICPalette;
    struct IWICPersistStream;
    struct IWICPixelFormatInfo;
    struct IWICPixelFormatInfo2;
    struct IWICPlanarBitmapFrameEncode;
    struct IWICPlanarBitmapSourceTransform;
    struct IWICPlanarFormatConverter;
    struct IWICProgressCallback;
    struct IWICProgressiveLevelControl;
    struct IWICStream;
    struct IWICStreamProvider;
#pragma endregion forward_declarations

#pragma region delegates
    using PFNProgressNotification = int32_t __stdcall(void*, uint32_t, Windows::Win32::WindowsImagingComponent::WICProgressOperation, double);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmap>{ 0x00000121,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000121-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapClipper>{ 0xE4FBCF03,0x223D,0x4E81,{ 0x93,0x33,0xD6,0x35,0x55,0x6D,0xD1,0xB5 } }; // E4FBCF03-223D-4E81-9333-D635556DD1B5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapCodecInfo>{ 0xE87A44C4,0xB76E,0x4C47,{ 0x8B,0x09,0x29,0x8E,0xB1,0x2A,0x27,0x14 } }; // E87A44C4-B76E-4C47-8B09-298EB12A2714
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapCodecProgressNotification>{ 0x64C1024E,0xC3CF,0x4462,{ 0x80,0x78,0x88,0xC2,0xB1,0x1C,0x46,0xD9 } }; // 64C1024E-C3CF-4462-8078-88C2B11C46D9
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapDecoder>{ 0x9EDDE9E7,0x8DEE,0x47EA,{ 0x99,0xDF,0xE6,0xFA,0xF2,0xED,0x44,0xBF } }; // 9EDDE9E7-8DEE-47EA-99DF-E6FAF2ED44BF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapDecoderInfo>{ 0xD8CD007F,0xD08F,0x4191,{ 0x9B,0xFC,0x23,0x6E,0xA7,0xF0,0xE4,0xB5 } }; // D8CD007F-D08F-4191-9BFC-236EA7F0E4B5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapEncoder>{ 0x00000103,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000103-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapEncoderInfo>{ 0x94C9B4EE,0xA09F,0x4F92,{ 0x8A,0x1E,0x4A,0x9B,0xCE,0x7E,0x76,0xFB } }; // 94C9B4EE-A09F-4F92-8A1E-4A9BCE7E76FB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapFlipRotator>{ 0x5009834F,0x2D6A,0x41CE,{ 0x9E,0x1B,0x17,0xC5,0xAF,0xF7,0xA7,0x82 } }; // 5009834F-2D6A-41CE-9E1B-17C5AFF7A782
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapFrameDecode>{ 0x3B16811B,0x6A43,0x4EC9,{ 0xA8,0x13,0x3D,0x93,0x0C,0x13,0xB9,0x40 } }; // 3B16811B-6A43-4EC9-A813-3D930C13B940
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapFrameEncode>{ 0x00000105,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000105-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapLock>{ 0x00000123,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000123-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapScaler>{ 0x00000302,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000302-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapSource>{ 0x00000120,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000120-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICBitmapSourceTransform>{ 0x3B16811B,0x6A43,0x4EC9,{ 0xB7,0x13,0x3D,0x5A,0x0C,0x13,0xB9,0x40 } }; // 3B16811B-6A43-4EC9-B713-3D5A0C13B940
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICColorContext>{ 0x3C613A02,0x34B2,0x44EA,{ 0x9A,0x7C,0x45,0xAE,0xA9,0xC6,0xFD,0x6D } }; // 3C613A02-34B2-44EA-9A7C-45AEA9C6FD6D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICColorTransform>{ 0xB66F034F,0xD0E2,0x40AB,{ 0xB4,0x36,0x6D,0xE3,0x9E,0x32,0x1A,0x94 } }; // B66F034F-D0E2-40AB-B436-6DE39E321A94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICComponentFactory>{ 0x412D0C3A,0x9650,0x44FA,{ 0xAF,0x5B,0xDD,0x2A,0x06,0xC8,0xE8,0xFB } }; // 412D0C3A-9650-44FA-AF5B-DD2A06C8E8FB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICComponentInfo>{ 0x23BC3F0A,0x698B,0x4357,{ 0x88,0x6B,0xF2,0x4D,0x50,0x67,0x13,0x34 } }; // 23BC3F0A-698B-4357-886B-F24D50671334
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICDdsDecoder>{ 0x409CD537,0x8532,0x40CB,{ 0x97,0x74,0xE2,0xFE,0xB2,0xDF,0x4E,0x9C } }; // 409CD537-8532-40CB-9774-E2FEB2DF4E9C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICDdsEncoder>{ 0x5CACDB4C,0x407E,0x41B3,{ 0xB9,0x36,0xD0,0xF0,0x10,0xCD,0x67,0x32 } }; // 5CACDB4C-407E-41B3-B936-D0F010CD6732
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICDdsFrameDecode>{ 0x3D4C0C61,0x18A4,0x41E4,{ 0xBD,0x80,0x48,0x1A,0x4F,0xC9,0xF4,0x64 } }; // 3D4C0C61-18A4-41E4-BD80-481A4FC9F464
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICDevelopRaw>{ 0xFBEC5E44,0xF7BE,0x4B65,{ 0xB7,0xF8,0xC0,0xC8,0x1F,0xEF,0x02,0x6D } }; // FBEC5E44-F7BE-4B65-B7F8-C0C81FEF026D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICDevelopRawNotificationCallback>{ 0x95C75A6E,0x3E8C,0x4EC2,{ 0x85,0xA8,0xAE,0xBC,0xC5,0x51,0xE5,0x9B } }; // 95C75A6E-3E8C-4EC2-85A8-AEBCC551E59B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICEnumMetadataItem>{ 0xDC2BB46D,0x3F07,0x481E,{ 0x86,0x25,0x22,0x0C,0x4A,0xED,0xBB,0x33 } }; // DC2BB46D-3F07-481E-8625-220C4AEDBB33
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICFastMetadataEncoder>{ 0xB84E2C09,0x78C9,0x4AC4,{ 0x8B,0xD3,0x52,0x4A,0xE1,0x66,0x3A,0x2F } }; // B84E2C09-78C9-4AC4-8BD3-524AE1663A2F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICFormatConverter>{ 0x00000301,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000301-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICFormatConverterInfo>{ 0x9F34FB65,0x13F4,0x4F15,{ 0xBC,0x57,0x37,0x26,0xB5,0xE5,0x3D,0x9F } }; // 9F34FB65-13F4-4F15-BC57-3726B5E53D9F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICImageEncoder>{ 0x04C75BF8,0x3CE1,0x473B,{ 0xAC,0xC5,0x3C,0xC4,0xF5,0xE9,0x49,0x99 } }; // 04C75BF8-3CE1-473B-ACC5-3CC4F5E94999
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICImagingFactory>{ 0xEC5EC8A9,0xC395,0x4314,{ 0x9C,0x77,0x54,0xD7,0xA9,0x35,0xFF,0x70 } }; // EC5EC8A9-C395-4314-9C77-54D7A935FF70
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICImagingFactory2>{ 0x7B816B45,0x1996,0x4476,{ 0xB1,0x32,0xDE,0x9E,0x24,0x7C,0x8A,0xF0 } }; // 7B816B45-1996-4476-B132-DE9E247C8AF0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICJpegFrameDecode>{ 0x8939F66E,0xC46A,0x4C21,{ 0xA9,0xD1,0x98,0xB3,0x27,0xCE,0x16,0x79 } }; // 8939F66E-C46A-4C21-A9D1-98B327CE1679
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICJpegFrameEncode>{ 0x2F0C601F,0xD2C6,0x468C,{ 0xAB,0xFA,0x49,0x49,0x5D,0x98,0x3E,0xD1 } }; // 2F0C601F-D2C6-468C-ABFA-49495D983ED1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataBlockReader>{ 0xFEAA2A8D,0xB3F3,0x43E4,{ 0xB2,0x5C,0xD1,0xDE,0x99,0x0A,0x1A,0xE1 } }; // FEAA2A8D-B3F3-43E4-B25C-D1DE990A1AE1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataBlockWriter>{ 0x08FB9676,0xB444,0x41E8,{ 0x8D,0xBE,0x6A,0x53,0xA5,0x42,0xBF,0xF1 } }; // 08FB9676-B444-41E8-8DBE-6A53A542BFF1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataHandlerInfo>{ 0xABA958BF,0xC672,0x44D1,{ 0x8D,0x61,0xCE,0x6D,0xF2,0xE6,0x82,0xC2 } }; // ABA958BF-C672-44D1-8D61-CE6DF2E682C2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataQueryReader>{ 0x30989668,0xE1C9,0x4597,{ 0xB3,0x95,0x45,0x8E,0xED,0xB8,0x08,0xDF } }; // 30989668-E1C9-4597-B395-458EEDB808DF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataQueryWriter>{ 0xA721791A,0x0DEF,0x4D06,{ 0xBD,0x91,0x21,0x18,0xBF,0x1D,0xB1,0x0B } }; // A721791A-0DEF-4D06-BD91-2118BF1DB10B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataReader>{ 0x9204FE99,0xD8FC,0x4FD5,{ 0xA0,0x01,0x95,0x36,0xB0,0x67,0xA8,0x99 } }; // 9204FE99-D8FC-4FD5-A001-9536B067A899
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataReaderInfo>{ 0xEEBF1F5B,0x07C1,0x4447,{ 0xA3,0xAB,0x22,0xAC,0xAF,0x78,0xA8,0x04 } }; // EEBF1F5B-07C1-4447-A3AB-22ACAF78A804
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataWriter>{ 0xF7836E16,0x3BE0,0x470B,{ 0x86,0xBB,0x16,0x0D,0x0A,0xEC,0xD7,0xDE } }; // F7836E16-3BE0-470B-86BB-160D0AECD7DE
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICMetadataWriterInfo>{ 0xB22E3FBA,0x3925,0x4323,{ 0xB5,0xC1,0x9E,0xBF,0xC4,0x30,0xF2,0x36 } }; // B22E3FBA-3925-4323-B5C1-9EBFC430F236
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPalette>{ 0x00000040,0xA8F2,0x4877,{ 0xBA,0x0A,0xFD,0x2B,0x66,0x45,0xFB,0x94 } }; // 00000040-A8F2-4877-BA0A-FD2B6645FB94
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPersistStream>{ 0x00675040,0x6908,0x45F8,{ 0x86,0xA3,0x49,0xC7,0xDF,0xD6,0xD9,0xAD } }; // 00675040-6908-45F8-86A3-49C7DFD6D9AD
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPixelFormatInfo>{ 0xE8EDA601,0x3D48,0x431A,{ 0xAB,0x44,0x69,0x05,0x9B,0xE8,0x8B,0xBE } }; // E8EDA601-3D48-431A-AB44-69059BE88BBE
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPixelFormatInfo2>{ 0xA9DB33A2,0xAF5F,0x43C7,{ 0xB6,0x79,0x74,0xF5,0x98,0x4B,0x5A,0xA4 } }; // A9DB33A2-AF5F-43C7-B679-74F5984B5AA4
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPlanarBitmapFrameEncode>{ 0xF928B7B8,0x2221,0x40C1,{ 0xB7,0x2E,0x7E,0x82,0xF1,0x97,0x4D,0x1A } }; // F928B7B8-2221-40C1-B72E-7E82F1974D1A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPlanarBitmapSourceTransform>{ 0x3AFF9CCE,0xBE95,0x4303,{ 0xB9,0x27,0xE7,0xD1,0x6F,0xF4,0xA6,0x13 } }; // 3AFF9CCE-BE95-4303-B927-E7D16FF4A613
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICPlanarFormatConverter>{ 0xBEBEE9CB,0x83B0,0x4DCC,{ 0x81,0x32,0xB0,0xAA,0xA5,0x5E,0xAC,0x96 } }; // BEBEE9CB-83B0-4DCC-8132-B0AAA55EAC96
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICProgressCallback>{ 0x4776F9CD,0x9517,0x45FA,{ 0xBF,0x24,0xE8,0x9C,0x5E,0xC5,0xC6,0x0C } }; // 4776F9CD-9517-45FA-BF24-E89C5EC5C60C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICProgressiveLevelControl>{ 0xDAAC296F,0x7AA5,0x4DBF,{ 0x8D,0x15,0x22,0x5C,0x59,0x76,0xF8,0x91 } }; // DAAC296F-7AA5-4DBF-8D15-225C5976F891
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICStream>{ 0x135FF860,0x22B7,0x4DDF,{ 0xB0,0xF6,0x21,0x8F,0x4F,0x29,0x9A,0x43 } }; // 135FF860-22B7-4DDF-B0F6-218F4F299A43
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsImagingComponent::IWICStreamProvider>{ 0x449494BC,0xB468,0x4927,{ 0x96,0xD7,0xBA,0x90,0xD3,0x1A,0xB5,0x05 } }; // 449494BC-B468-4927-96D7-BA90D31AB505
#pragma endregion guids

}
#endif
