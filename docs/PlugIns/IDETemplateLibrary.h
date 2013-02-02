/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark -

/*
 * File: /Applications/Xcode.app/Contents/PlugIns/IDETemplateLibrary.ideplugin/Contents/MacOS/IDETemplateLibrary
 * UUID: 9AF9541B-174B-3059-8A89-910F4C7F0945
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 2053.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Required
 */

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface IDEFileTemplatesLibrary : DVTLibraryController
{
    BOOL _isLibraryPopulated;
    NSArray *_orderedPlatformFamilies;
}

- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (void)libraryDidLoad;
- (id)templateSections;
- (id)allValidPlatforms;
- (void)addLibraryGroupsIfNeeded;
- (id)platformIconForPlatformFamily:(id)arg1;
- (id)defaultPlatformIcon;

@end

@interface IDEFileTemplateChooserAssistant : IDETemplateChooserAssistant
{
}

+ (id)supportedTemplateKind;

@end

@interface IDEFileTemplateCompletionAssistant : IDETemplateCompletionAssistant
{
}

@end

