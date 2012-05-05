/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark -

/*
 * File: /Applications/Xcode.app/Contents/PlugIns/GPUTraceDebugger.ideplugin/Contents/MacOS/GPUTraceDebugger
 * UUID: CACE011E-9A00-3E7C-B24D-C9C3E3D134FA
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 1.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Required
 */

@protocol IDEDebuggingAddition <NSObject>
@property(readonly) NSString *identifier;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
- (void)invalidate;
- (void)processFinalLaunchParameters:(id)arg1;
- (id)adjustedLaunchParametersForLaunchParameters:(id)arg1;
@end

@protocol NSObject
- (id)description;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (struct _NSZone *)zone;
- (id)self;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@end

@interface GPUDebuggingAddition : NSObject <IDEDebuggingAddition>
{
    NSString *_identifier;
    IDELaunchSession *_launchSession;
    GPUInferiorSession *_gpuSession;
    NSString *_locCaptureUnavailReason;
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property(copy) NSString *localizedCaptureUnavailabilityReason; // @synthesize localizedCaptureUnavailabilityReason=_locCaptureUnavailReason;
@property(readonly) GPUInferiorSession *gpuSession; // @synthesize gpuSession=_gpuSession;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;
- (BOOL)isValid;
- (void)captureGPUTraceFromBreakpoint:(id)arg1;
- (void)captureGPUTrace;
- (void)processFinalLaunchParameters:(id)arg1;
- (id)adjustedLaunchParametersForLaunchParameters:(id)arg1;
- (void)_loadInferiorSessionForDeviceIdentifier:(id)arg1 forAppWithName:(id)arg2 error:(id *)arg3;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

@end

// Not exported
@interface GPUTraceBreakpointAction : IDEBreakpointAction
{
}

- (void)performActionUsingConsole:(id)arg1 andBreakpoint:(id)arg2;
- (id)displayName;

@end
