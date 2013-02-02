/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark -

/*
 * File: /Applications/Xcode.app/Contents/PlugIns/IDEStructureNavigator.ideplugin/Contents/MacOS/IDEStructureNavigator
 * UUID: 558FC76C-B0A0-3443-A6D2-3F70DB5BB3F9
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 2053.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Required
 */

@protocol IDENavigableItemFileReferenceProxy <NSObject>
@property(readonly) IDENavigableItem *primaryChildItem;

@optional
- (BOOL)showSubitems;
@end

@protocol IDEStructureEditing
- (BOOL)allowRemovingContainerGroup;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (BOOL)structureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (id)structureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
@end

@protocol IDEStructureEditingTarget
- (id)structureEditingRemoveSubitemsTargetForParentNavigableItem:(id)arg1;
- (id)structureEditingGroupingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2;
- (id)structureEditingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2;
- (id)structureEditingDraggingSource;
@end

@protocol IDETemplateSupportingNavigator <NSObject>
- (id)defaultDestinationGroupForTemplateInstantiationWithDestinationIndex:(long long *)arg1;
- (void)addTemplateInstantiatedItems:(id)arg1 primaryItem:(id)arg2;
- (void)setupTemplateContext:(id)arg1;
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

@protocol NSOpenSavePanelDelegate <NSObject>

@optional
- (void)panelSelectionDidChange:(id)arg1;
- (void)panel:(id)arg1 willExpand:(BOOL)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface IDESupportStructureEditingValueTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

@interface _IDEStructureNavigatorAddFilesOpenPanelDelegate : NSObject <NSOpenSavePanelDelegate>
{
    NSSet *_urls;
}

- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (id)initWithContainer:(id)arg1;

@end

@interface IDEStructureNavigator : IDEOutlineBasedNavigator <IDETemplateSupportingNavigator>
{
    NSTableColumn *_mainTableColumn;
    IDENavigatorDataCell *_containerFileRefCell;
    IDENavigatorDataCell *_aggregateContainerFileRefCell;
    IDENavigatorDataCell *_groupCell;
    IDENavigatorDataCell *_fileReferenceCell;
    IDENavigatorDataCell *_plainObjectCell;
    NSSet *_expandedItems;
    NSSet *_expandedItemsBeforeFiltering;
    id <IDEStructureEditingDropTarget> _dropTarget;
    BOOL _restoringState;
    BOOL _clearingFilterPredicate;
    BOOL _scmStatusFilteringEnabled;
    BOOL _recentDocumentFilteringEnabled;
    BOOL _unsavedDocumentFilteringEnabled;
    NSString *_fileNamePatternString;
    NSDictionary *_previouslyRestoredStateDictionary;
    NSMutableArray *_stateChangeObservingTokens;
    id <DVTObservingToken> _selectedObjectsObservingToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)_structureNavigatorDragTypes;
+ (void)initialize;
@property(nonatomic) BOOL unsavedDocumentFilteringEnabled; // @synthesize unsavedDocumentFilteringEnabled=_unsavedDocumentFilteringEnabled;
@property(nonatomic) BOOL recentDocumentFilteringEnabled; // @synthesize recentDocumentFilteringEnabled=_recentDocumentFilteringEnabled;
@property(nonatomic) BOOL scmStatusFilteringEnabled; // @synthesize scmStatusFilteringEnabled=_scmStatusFilteringEnabled;
@property(copy, nonatomic) NSString *fileNamePatternString; // @synthesize fileNamePatternString=_fileNamePatternString;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_handleCancelAction;
- (BOOL)_testOrDeleteItems:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_isNavigableItem:(id)arg1 childOfNavigableItems:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 hasUserFocus:(BOOL)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (struct _NSRange)outlineView:(id)arg1 initialSelectionRangeForCell:(id)arg2 proposedRange:(struct _NSRange)arg3;
- (id)plainObjectCell;
- (id)groupCell;
- (id)fileReferenceCell;
- (id)aggregateContainerFileRefCell;
- (id)containerFileRefCell;
- (id)newBasicContainerFileRefCell;
- (id)aggregateSourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
@property(copy) NSString *visibleRectString;
- (id)_selectedItemsAsNameTree;
- (void)_setSelectedItemsFromNameTree:(id)arg1;
- (id)_expandedItemsAsNameTree;
- (id)_expandedItemsBeforeFilteringAsNameTree;
- (void)_setExpandedItemsFromNameTree:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)configureStateSavingObservers;
- (void)revealNavigableItems:(id)arg1;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (void)filterButton_addFiles:(id)arg1;
- (void)fiterButton_newProject:(id)arg1;
- (void)filterButton_newFile:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)_synchronizeFilteringWithOutlineView;
- (id)filterDefinitionIdentifier;
- (void)_noteEditorDocumentIsEditedStatusDidChange:(id)arg1;
- (void)triggerFilteringForDocumentURLs:(id)arg1;
- (void)updateFilterPredicate;
- (void)clearFilterPredicate;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)domainIdentifier;
- (void)loadView;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_showFileInspector:(id)arg1;
- (void)contextMenu_delete:(id)arg1;
- (void)delete:(id)arg1;
- (void)contextMenu_newProject:(id)arg1;
- (void)contextMenu_newDocument:(id)arg1;
- (void)newTemplateWithTemplateKind:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (id)_titleForAddFilesMenuItemUsingContextualMenuSelection:(BOOL)arg1;
- (id)_containerNameForNavigableItem:(id)arg1;
- (void)contextMenu_addFiles:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)contextMenu_sortFilesByType:(id)arg1;
- (void)sortFilesByType:(id)arg1;
- (void)contextMenu_sortFilesByName:(id)arg1;
- (void)sortFilesByName:(id)arg1;
- (void)contextMenu_groupSelected:(id)arg1;
- (void)groupSelected:(id)arg1;
- (void)contextMenu_newGroup:(id)arg1;
- (void)newGroup:(id)arg1;
- (void)addTemplateInstantiatedItems:(id)arg1 primaryItem:(id)arg2;
- (void)expandInstantiatedTemplateItem:(id)arg1;
- (void)setupTemplateContext:(id)arg1;
- (id)defaultDestinationGroupForTemplateInstantiationWithDestinationIndex:(long long *)arg1;
- (void)_setupTemplateContext:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (id)_destinationGroupForSelectedItem:(id)arg1 destinationIndex:(long long *)arg2;
- (BOOL)shouldOpenNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (void)_toggleExpandedStateOf:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_testOrAddFiles:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrSort:(BOOL)arg1 byNameOrByType:(BOOL)arg2 useContextualMenuSelection:(BOOL)arg3;
- (BOOL)_testOrGroupSelected:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrAddNewGroup:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (void)_editChildItemAtIndex:(unsigned long long)arg1 ofParentItem:(id)arg2;
- (void)_expandNavigableItem:(id)arg1;
- (void)_expandOutlineViewItem:(id)arg1;
- (id)_outlineViewItemForNavigableItem:(id)arg1;
- (id)_navigableItemForOutlineViewItem:(id)arg1 representedObject:(id *)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;

@end

@interface _IDEStructureNavigatorPrivateClassForFindingBundle : NSObject
{
}

@end

