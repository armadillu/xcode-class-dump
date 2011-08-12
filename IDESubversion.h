/*
 *     Generated by class-dump 3.3.3 (64 bit) (Debug version compiled Aug 11 2011 13:55:57).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark -

/*
 * File: /Developer/Library/Xcode/PrivatePlugIns/IDESubversion.ideplugin/Contents/MacOS/IDESubversion
 * UUID: B1AB3BDE-5BFC-3DAD-BE64-9BBC4B6503EA
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 514.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Required
 */

@protocol IDESourceControlProtocol <NSObject>
- (id)operationForRequest:(id)arg1;
- (BOOL)authenticationRequiredForRequest:(id)arg1;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
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

@interface SVNController : NSObject <IDESourceControlProtocol>
{
}

- (id)operationForRequest:(id)arg1;
- (BOOL)authenticationRequiredForRequest:(id)arg1;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;

@end

@interface SVNOperation : IDESourceControlTaskOperation
{
}

- (int)statusValueForRepositoryStringValue:(id)arg1;
- (int)statusValueForWorkingCopyStringValue:(id)arg1 isCopied:(BOOL)arg2;
- (unsigned long long)propertyStatusValueForWorkingCopyStringValue:(id)arg1;
- (id)defaultArguments;
- (void)sanitizeFilenames;
- (id)errorFromErrorMessage:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNAddOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNBlameOperation : SVNOperation
{
    NSDateFormatter *_formatter;
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCommitOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCurrentBranchOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCopyOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNMakeDirectoryOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNMergeOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNMoveOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNRemoveOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNResolveOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNRevertOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNPropSetOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNPropDelOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNPropGetOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNIgnoreOperation : IDESourceControlOperation
{
    NSOperationQueue *_operationQueue;
}

@property NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)main;

@end

@interface SVNStatusOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNSwitchOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNUpdateOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

@interface SVNDiffOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNExportFileOperation : SVNOperation
{
    DVTFilePath *_exportedFilePath;
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNListOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNCheckoutOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNInfoOperation : SVNOperation
{
}

- (void)parseData;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNLogOperation : SVNOperation
{
    NSDateFormatter *_formatter;
}

- (void)parseData;
- (unsigned long long)statusValueForRepositoryShortStringValue:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

@interface SVNImportOperation : SVNOperation
{
}

- (id)initWithRequest:(id)arg1;

@end

