/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark -

/*
 * File: /Applications/Xcode.app/Contents/PlugIns/GPUTraceDebugger.ideplugin/Contents/MacOS/GPUTraceDebugger
 * UUID: 783938A5-71B7-3286-B101-FFC97E44FE72
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

@optional
- (id)debugDescription;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface GPUDebuggingAddition : NSObject <IDEDebuggingAddition>
{
    NSString *_identifier;
    IDELaunchSession *_launchSession;
    GPUInferiorSession *_gpuSession;
    GPUDebuggerController *_debuggerController;
    NSString *_locCaptureUnavailReason;
    BOOL _breakpointsActiveBeforeCapture;
    BOOL _isFakeDebugSession;
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property BOOL isFakeDebugSession; // @synthesize isFakeDebugSession=_isFakeDebugSession;
@property BOOL breakpointsActiveBeforeCapture; // @synthesize breakpointsActiveBeforeCapture=_breakpointsActiveBeforeCapture;
@property(copy) NSString *localizedCaptureUnavailabilityReason; // @synthesize localizedCaptureUnavailabilityReason=_locCaptureUnavailReason;
@property(readonly) GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property(readonly) GPUInferiorSession *gpuSession; // @synthesize gpuSession=_gpuSession;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) BOOL isDebuggingLoadedArchive;
- (void)invalidate;
- (BOOL)isValid;
- (void)processFinalLaunchParameters:(id)arg1;
- (id)adjustedLaunchParametersForLaunchParameters:(id)arg1;
- (void)_loadInferiorSessionForDeviceIdentifier:(id)arg1 forAppWithName:(id)arg2 error:(id *)arg3;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

@end

// Not exported
@interface GPUTraceBreakpointAction : IDEBreakpointAction
{
}

- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (id)displayName;

@end

