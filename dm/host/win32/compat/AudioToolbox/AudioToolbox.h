#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t OSStatus;
typedef void *AudioUnit;
typedef void *AudioComponent;
typedef void *AudioComponentInstance;
typedef uint32_t AudioUnitPropertyID;
typedef uint32_t AudioUnitScope;
typedef uint32_t AudioUnitElement;
typedef uint32_t UInt32;
typedef double   Float64;
typedef uint32_t AudioDeviceID;
typedef uint32_t AudioUnitRenderActionFlags;
typedef void *AudioConverterRef;

#define noErr 0
#define kAudioUnitScope_Global 0
#define kAudioUnitScope_Input 1
#define kAudioUnitScope_Output 2
#define kAudioOutputUnitProperty_CurrentDevice 2000
#define kAudioObjectUnknown 0

#define kAudioDevicePropertyBufferFrameSizeRange 0x66737a23
#define kAudioDevicePropertyBufferFrameSize      0x6673697a
#define kAudioUnitProperty_StreamFormat          2
#define kAudioUnitProperty_SetRenderCallback     23

#define kAudioUnitType_Output                    0x61756f75
#define kAudioUnitSubType_DefaultOutput          0x64656620
#define kAudioUnitSubType_RemoteIO               0x72696f63
#define kAudioUnitManufacturer_Apple             0x6170706c

#define kAudioFormatLinearPCM                    0x6c70636d
#define kAudioFormatMPEG4AAC                     0x61616320
#define kAudioConverterDecompressionMagicCookie  0x64656d63
#define kLinearPCMFormatFlagIsSignedInteger      (1U << 2)
#define kLinearPCMFormatFlagIsPacked             (1U << 3)

typedef struct AudioValueRange {
    Float64 mMinimum;
    Float64 mMaximum;
} AudioValueRange;

typedef struct AudioBuffer {
    UInt32 mNumberChannels;
    UInt32 mDataByteSize;
    void *mData;
} AudioBuffer;

typedef struct AudioBufferList {
    UInt32 mNumberBuffers;
    AudioBuffer mBuffers[1];
} AudioBufferList;

typedef struct AudioTimeStamp {
    Float64 mSampleTime;
    uint64_t mHostTime;
    Float64 mRateScalar;
    uint64_t mWordClockTime;
    UInt32 mFlags;
    UInt32 mReserved;
} AudioTimeStamp;

typedef struct AudioStreamBasicDescription {
    Float64 mSampleRate;
    UInt32 mFormatID;
    UInt32 mFormatFlags;
    UInt32 mBytesPerPacket;
    UInt32 mFramesPerPacket;
    UInt32 mBytesPerFrame;
    UInt32 mChannelsPerFrame;
    UInt32 mBitsPerChannel;
    UInt32 mReserved;
} AudioStreamBasicDescription;

typedef struct AudioStreamPacketDescription {
    int64_t mStartOffset;
    UInt32 mVariableFramesInPacket;
    UInt32 mDataByteSize;
} AudioStreamPacketDescription;

typedef struct AudioComponentDescription {
    UInt32 componentType;
    UInt32 componentSubType;
    UInt32 componentManufacturer;
    UInt32 componentFlags;
    UInt32 componentFlagsMask;
} AudioComponentDescription;

typedef OSStatus (*AURenderCallback)(void *inRefCon, AudioUnitRenderActionFlags *ioActionFlags, const AudioTimeStamp *inTimeStamp, UInt32 inBusNumber, UInt32 inNumberFrames, AudioBufferList *ioData);

typedef struct AURenderCallbackStruct {
    AURenderCallback inputProc;
    void *inputProcRefCon;
} AURenderCallbackStruct;

typedef void (*AudioUnitPropertyListenerProc)(void *inRefCon, AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitScope inScope, AudioUnitElement inElement);

typedef OSStatus (*AudioConverterComplexInputDataProc)(
    AudioConverterRef inAudioConverter,
    UInt32 *ioNumberDataPackets,
    AudioBufferList *ioData,
    AudioStreamPacketDescription **outDataPacketDescription,
    void *inUserData);

static inline AudioComponent AudioComponentFindNext(AudioComponent inComponent, const AudioComponentDescription *inDesc) {
    (void)inComponent; (void)inDesc;
    return (AudioComponent)1;
}

static inline OSStatus AudioComponentInstanceNew(AudioComponent inComponent, AudioComponentInstance *outInstance) {
    (void)inComponent;
    if (outInstance) *outInstance = (AudioComponentInstance)1;
    return noErr;
}

static inline OSStatus AudioComponentInstanceDispose(AudioComponentInstance inInstance) {
    (void)inInstance;
    return noErr;
}

static inline OSStatus AudioUnitInitialize(AudioUnit inUnit) { (void)inUnit; return noErr; }
static inline OSStatus AudioUnitUninitialize(AudioUnit inUnit) { (void)inUnit; return noErr; }
static inline OSStatus AudioOutputUnitStart(AudioUnit inUnit) { (void)inUnit; return noErr; }
static inline OSStatus AudioOutputUnitStop(AudioUnit inUnit) { (void)inUnit; return noErr; }

static inline OSStatus AudioUnitSetProperty(AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitScope inScope, AudioUnitElement inElement, const void *inData, UInt32 inDataSize) {
    (void)inUnit; (void)inID; (void)inScope; (void)inElement; (void)inData; (void)inDataSize;
    return noErr;
}

static inline OSStatus AudioUnitGetProperty(AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitScope inScope, AudioUnitElement inElement, void *outData, UInt32 *ioDataSize) {
    (void)inUnit; (void)inID; (void)inScope; (void)inElement; (void)outData; (void)ioDataSize;
    return -1;
}

static inline OSStatus AudioUnitAddPropertyListener(AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitPropertyListenerProc inProc, void *inProcUserData) {
    (void)inUnit; (void)inID; (void)inProc; (void)inProcUserData;
    return noErr;
}

static inline OSStatus AudioUnitRemovePropertyListenerWithUserData(AudioUnit inUnit, AudioUnitPropertyID inID, AudioUnitPropertyListenerProc inProc, void *inProcUserData) {
    (void)inUnit; (void)inID; (void)inProc; (void)inProcUserData;
    return noErr;
}

static inline OSStatus AudioConverterNew(const AudioStreamBasicDescription *inSourceFormat, const AudioStreamBasicDescription *inDestinationFormat, AudioConverterRef *outAudioConverter) {
    (void)inSourceFormat; (void)inDestinationFormat;
    if (outAudioConverter) *outAudioConverter = (AudioConverterRef)1;
    return noErr;
}

static inline OSStatus AudioConverterDispose(AudioConverterRef inAudioConverter) {
    (void)inAudioConverter;
    return noErr;
}

static inline OSStatus AudioConverterFillComplexBuffer(
    AudioConverterRef inAudioConverter,
    AudioConverterComplexInputDataProc inInputDataProc,
    void *inInputDataProcUserData,
    UInt32 *ioOutputDataPacketSize,
    AudioBufferList *outOutputData,
    AudioStreamPacketDescription *outPacketDescription) {
    (void)inAudioConverter; (void)inInputDataProc; (void)inInputDataProcUserData; (void)ioOutputDataPacketSize; (void)outOutputData; (void)outPacketDescription;
    return noErr;
}

static inline OSStatus AudioConverterSetProperty(AudioConverterRef inAudioConverter, AudioUnitPropertyID inPropertyID, UInt32 inPropertyDataSize, const void *inPropertyData) {
    (void)inAudioConverter; (void)inPropertyID; (void)inPropertyDataSize; (void)inPropertyData;
    return noErr;
}

#ifdef __cplusplus
}
#endif
