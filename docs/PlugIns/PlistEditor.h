/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark -

/*
 * File: /Applications/Xcode.app/Contents/PlugIns/PlistEditor.ideplugin/Contents/MacOS/PlistEditor
 * UUID: 3AEFC7D7-054C-3765-8218-AAACF500BFCA
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 1168.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Required
 */

@protocol DVTDiffTextFilter <NSObject>
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

@optional
+ (id)pathToKeyConflictResolutionFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (id)pathToTextFileFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (BOOL)filterInputFilePath:(id)arg1 toOutputFilePath:(id)arg2 error:(id *)arg3;
@end

@protocol DVTFindBarFindable

@optional
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
@end

@protocol DVTInvalidation <NSObject>
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
@end

@protocol DVTPlistDocumentProtocol
@property(retain) DVTPlistStructureDefinition *plistStructureDefinition;
- (void)revealNode:(id)arg1;
- (void)propertyListChanged:(id)arg1;
- (id)model;
- (id)plist;
@end

@protocol DVTPlistViewControllerProtocol <NSObject>
- (void)revealNode:(id)arg1;
- (void)propertyListChanged:(id)arg1;

@optional
- (void)selectDocumentLocations:(id)arg1;
- (void)setSelection:(id)arg1 edit:(BOOL)arg2;
- (id)currentSelection;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
@end

@protocol DVTSourceExpressionSource <NSObject, DVTInvalidation>
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
- (struct CGRect)expressionFrameForExpression:(id)arg1;

@optional
@property(readonly) DVTSourceExpression *quickHelpExpression;
- (void)unregisterMouseOverExpressionObserver:(id)arg1;
- (void)registerMouseOverExpressionObserver:(id)arg1;
- (void)unregisterSelectedExpressionObserver:(id)arg1;
- (void)registerSelectedExpressionObserver:(id)arg1;
@end

@protocol DVTTextFindable <NSObject>
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;

@optional
@property unsigned long long supportedMatchingOptions;
@end

@protocol DVTTextReplacable <NSObject>
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;

@optional
- (BOOL)replaceTextWithContentsOfURL:(id)arg1 error:(id *)arg2;
@end

@protocol IDEDocumentStructureProviding <NSObject>
@property(readonly) NSArray *ideTopLevelStructureObjects;
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

@protocol NSUserInterfaceValidations
- (BOOL)validateUserInterfaceItem:(id)arg1;
@end

@interface IDEPlistEditor : IDEEditor <DVTPlistViewControllerProtocol, DVTSourceExpressionSource, DVTFindBarFindable, NSUserInterfaceValidations>
{
    DVTPlistViewController *_plistViewController;
    DVTSourceExpression *_selectedExpression;
    id <DVTObservingToken> _selectionObservingToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain, nonatomic) DVTSourceExpression *selectedExpression; // @synthesize selectedExpression=_selectedExpression;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)revealNode:(id)arg1;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
- (void)propertyListChanged:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
- (void)updateSelectedExpression;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)changeStructureDefinitionAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)takeFocus;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (BOOL)canBecomeMainViewController;

// Remaining properties
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

@interface IDEPlistDocument : IDEEditorDocument <DVTPlistDocumentProtocol, DVTTextFindable, DVTTextReplacable, IDEDocumentStructureProviding>
{
    DVTPlistModel *_model;
    NSMutableArray *_editors;
}

+ (void)initialize;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)revealNode:(id)arg1;
- (void)propertyListChanged:(id)arg1;
- (BOOL)commitEdits;
- (BOOL)isDocumentEdited;
- (void)removeEditorsAtIndexes:(id)arg1;
- (void)insertEditors:(id)arg1 atIndexes:(id)arg2;
- (id)mutableEditors;
- (id)editors;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (id)model;
- (id)plist;
- (void)changeStructureDefinitionAction:(id)arg1;
@property(retain) DVTPlistStructureDefinition *plistStructureDefinition;
- (void)printDocument:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)updateChangeCount:(unsigned long long)arg1;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)canSaveAs;
- (BOOL)canSave;
- (BOOL)_checkASCIIFileTypeCompatability;
- (void)editorDocumentWillClose;

// Remaining properties
@property unsigned long long supportedMatchingOptions;

@end

@interface IDEPlistNodeNavigable : NSObject
{
    IDEPlistDocument *_document;
    DVTPlistNode *_node;
}

@property(retain) DVTPlistNode *node; // @synthesize node=_node;
@property(retain) IDEPlistDocument *document; // @synthesize document=_document;
- (id)ideModelObjectTypeIdentifier;
- (id)navigableItem_fileReference;
- (id)navigableItem_documentType;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)navigableItem_contentDocumentLocation;

@end

@interface IDEPlistTextConversionProvider : NSObject <DVTDiffTextFilter>
{
}

+ (id)pathToKeyConflictResolutionFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (BOOL)filterInputFilePath:(id)arg1 toOutputFilePath:(id)arg2 error:(id *)arg3;
+ (id)pathToTextFileFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

@end

@interface IDEPlistRefactoringFileChangeSet : IDERefactoringFileChangeSet
{
    NSArray *_findResults;
    NSString *_newClassName;
    struct dispatch_semaphore_s *_saveWaiter;
}

+ (id)changeSetForFileAtPath:(id)arg1 transformation:(id)arg2 error:(id *)arg3;
@property(retain) NSString *newClassName; // @synthesize newClassName=_newClassName;
@property(retain) NSArray *findResults; // @synthesize findResults=_findResults;
- (void)writeTempResults;
- (BOOL)writesOwnTempResults;
- (BOOL)resultIsEditable;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (BOOL)applyChangesWithError:(id *)arg1;

@end
