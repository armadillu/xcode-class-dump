/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

#pragma mark -

/*
 * File: /Applications/Xcode.app/Contents/SharedFrameworks/DTGraphKit.framework/Versions/A/DTGraphKit
 * UUID: EEF9D111-F921-3059-8464-F7F5E4CB8C53
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 4305.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Supported
 *       Run path: @loader_path/../../../
 *               = /Applications/Xcode.app/Contents/SharedFrameworks
 */

@protocol DTNetworkGraphLayout <NSObject>
- (void)layoutGraph:(id)arg1;
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

@interface DTBarGraph : DTGraph
{
}

- (double)calculateVerticalBorderBuffer;
- (double)calculateHorizontalBorderBuffer;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

@interface DTGraph : NSView
{
    id _model;
    NSDictionary *_attributes;
    NSFont *_textFont;
    NSFont *_titleTextFont;
    NSFont *_subTitleTextFont;
    NSColor *_textColor;
    NSColor *_alternateTextColor;
    int _textPathStyle;
    NSColor *_lineColor;
    NSColor *_backgroundColor;
    NSString *_subTitle;
    int _borderType;
    NSMutableDictionary *_gradientMap;
    NSTimer *_updateTimer;
    BOOL _isObserving;
    NSString *_entriesKeyPath;
    NSString *_subEntriesKeyPath;
    NSString *_xAxisKeyPath;
    NSString *_yAxisKeyPath;
    NSString *_labelKeyPath;
    NSString *_colorKeyPath;
    NSString *_backgroundColorKeyPath;
    NSString *_iconKeyPath;
    NSString *_shapeKeyPath;
    NSString *_lineFilledKeyPath;
    NSString *_nodeAKeyPath;
    NSString *_nodeBKeyPath;
    struct {
        unsigned int labelKeyPathMissing:1;
        unsigned int colorKeyPathMissing:1;
        unsigned int backgroundColorKeyPathMissing:1;
        unsigned int iconKeyPathMissing:1;
        unsigned int lineFilledKeyPathMissing:1;
        unsigned int shapeKeyPathMissing:1;
        unsigned int RESERVED:25;
    } _keyPathFlags;
    id <DTGraphDelegate> _delegate;
    struct {
        unsigned int implementsDrawEntryInRect:1;
        unsigned int implementsDrawEntryInPath:1;
        unsigned int implementsDrawEntrySeriesInPath:1;
        unsigned int implementsDrawEntryNodeInPath:1;
        unsigned int implementsIconForGraphEntry:1;
        unsigned int implementsColorForGraphEntry:1;
        unsigned int implementsBackgroundColorForGraphEntry:1;
        unsigned int implementsLabelForGraphEntry:1;
        unsigned int implementsLineFilledForGraphEntry:1;
        unsigned int implementsShapeForGraphEntry:1;
        unsigned int implementsPathStyleForGraphEntry:1;
        unsigned int implementsWillDrawCellForGraphEntry:1;
        unsigned int RESERVED:19;
    } _delegateFlags;
    unsigned long long verboseLevel;
}

+ (id)basicColorForNumber:(long long)arg1;
+ (id)translateValue:(id)arg1 ofType:(id)arg2;
+ (id)sampleAttributes;
@property unsigned long long verboseLevel; // @synthesize verboseLevel;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_sizeToFit:(id)arg1;
- (void)drawPlaceholder:(struct CGRect)arg1;
- (struct CGRect)calculatePlaceholderBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)requiresPlaceholder;
- (BOOL)isModelEmpty;
- (void)drawSubTitle:(struct CGRect)arg1;
- (void)drawTitle:(struct CGRect)arg1;
- (struct CGRect)calculateSubTitleBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateTitleBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)requiresTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)nodeBKeyPath;
- (id)nodeAKeyPath;
- (id)shapeKeyPath;
- (id)iconKeyPath;
- (id)lineFilledKeyPath;
- (id)backgroundColorKeyPath;
- (id)colorKeyPath;
- (id)labelKeyPath;
- (id)yAxisKeyPath;
- (id)xAxisKeyPath;
- (id)subEntriesKeyPath;
- (id)entriesKeyPath;
- (id)themeGradientWithColor:(id)arg1;
- (int)borderType;
- (void)setBorderType:(int)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)subTitleFont;
- (void)setSubTitleFont:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)alternateTextColor;
- (void)setAlternateTextColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)viewDidMoveToWindow;
- (int)shapeForEntry:(id)arg1;
- (id)iconForEntry:(id)arg1;
- (BOOL)lineFilledForEntry:(id)arg1;
- (id)labelForEntry:(id)arg1;
- (id)backgroundColorForEntry:(id)arg1;
- (id)colorForEntry:(id)arg1;
- (int)textPathStyle;
- (id)lineSelectionShadow;
- (id)emptyShadow;
- (id)alternateShadow;
- (id)lineShadow;
- (id)labelGraphShadow;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (void)clearCache;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@property(retain) id model;
- (void)clearAttributes;
- (void)observeModel:(BOOL)arg1;
- (void)_updateGraph:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface DTGroupGraph : DTGraph
{
    NSArray *_graphTypes;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setGraphTypes:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setModel:(id)arg1;
- (void)clearCache;
- (void)_createViewsInSize:(struct CGSize)arg1;
- (void)dealloc;

@end

@interface DTHorizontalLabelBarGraph : DTBarGraph
{
}

- (long long)_bestNumberOfDivsGuessing:(long long)arg1;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (long long)_maxValue;
- (void)clearCache;

@end

@interface DTLegendGraph : DTBarGraph
{
}

- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)clearCache;

@end

@interface DTPieGraph : DTGraph
{
}

- (void)drawContent:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

@interface DTBytesFormatter : NSNumberFormatter
{
}

+ (id)stringForObjectValue:(id)arg1;
+ (id)stringFromNumber:(id)arg1;
+ (id)stringForLongLong:(long long)arg1;
+ (void)initialize;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;

@end

@interface DTRulerTimeFormatter : NSNumberFormatter
{
    BOOL _fixedPrecision;
}

+ (id)stringForObjectValue:(id)arg1;
+ (id)stringFromNumber:(id)arg1;
+ (id)stringForDouble:(double)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (void)setFixedPrecision:(BOOL)arg1;

@end

@interface DTSystemTimeFormatter : NSFormatter
{
}

+ (id)stringForObjectValue:(id)arg1;
+ (id)stringFromJoinedString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromJoinedString:(id)arg1;

@end

@interface DTPercentageFormatter : NSFormatter
{
}

+ (id)stringForObjectValue:(id)arg1;
+ (id)stringForNumberValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForNumberValue:(id)arg1;

@end

@interface DTHexadecimalFormatter : NSFormatter
{
}

+ (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end

@interface DTNanoTimestampFormatter : NSNumberFormatter
{
}

+ (id)stringForNanoseconds:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;

@end

@interface DTUserTimeFormatter : NSNumberFormatter
{
}

+ (id)stringForNanoseconds:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;

@end

@interface DTBytesFormattedTextFieldCell : NSTextFieldCell
{
    BOOL _formatObjectValue;
    NSString *_defaultsIdentifier;
}

+ (id)cellWithDefaultsIdentifier:(id)arg1;
- (void)_toggleFormatting:(id)arg1;
- (void)setFormatsObjectValue:(BOOL)arg1;
- (id)initWithDefaultsIdentifier:(id)arg1;

@end

@interface DTFilenameFormatter : NSFormatter
{
    BOOL _showPathExtensions;
}

- (id)stringForObjectValue:(id)arg1;
- (BOOL)showPathExtensions;
- (void)setShowPathExtensions:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

@interface DTVerticalLabelBarGraph : DTBarGraph
{
}

- (long long)_bestNumberOfDivsGuessing:(long long)arg1;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (long long)_maxValue;
- (void)clearCache;

@end

@interface DTPlotGraph : DTBarGraph
{
    unsigned long long _maxX;
    unsigned long long _maxY;
}

- (long long)_bestNumberOfYDivsGuessing:(long long)arg1;
- (long long)_bestNumberOfXDivsGuessing:(long long)arg1;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (long long)_maxValueY;
- (long long)_maxValueX;
- (void)drawBackground:(struct CGRect)arg1;
- (void)clearCache;

@end

@interface DTNetworkGraphObject : NSObject
{
    BOOL isSelected;
    NSBezierPath *path;
    NSBezierPath *decorativePath;
    id <NSObject> entity;
}

@property(retain) NSBezierPath *decorativePath; // @synthesize decorativePath;
@property(retain) NSBezierPath *path; // @synthesize path;
@property BOOL isSelected; // @synthesize isSelected;
@property(retain) id <NSObject> entity; // @synthesize entity;

@end

@interface DTNetworkGraphNode : DTNetworkGraphObject
{
    struct CGPoint position;
    struct CGPoint magnetPosition;
    struct CGPoint velocity;
    struct CGRect box;
    BOOL anchor;
}

@property BOOL anchor; // @synthesize anchor;
@property struct CGRect box; // @synthesize box;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

@interface DTNetworkGraphEdge : DTNetworkGraphObject
{
    DTNetworkGraphNode *nodeA;
    DTNetworkGraphNode *nodeB;
    struct CGPoint controlPoint1;
    struct CGPoint controlPoint2;
    BOOL straighLine;
    BOOL pointerToNodeA;
    BOOL pointerToNodeB;
    double length;
}

@property double length; // @synthesize length;
@property BOOL straighLine; // @synthesize straighLine;
@property BOOL pointerToNodeB; // @synthesize pointerToNodeB;
@property BOOL pointerToNodeA; // @synthesize pointerToNodeA;
@property struct CGPoint controlPoint2; // @synthesize controlPoint2;
@property struct CGPoint controlPoint1; // @synthesize controlPoint1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

@interface DTNetworkGraph : DTBarGraph
{
    struct CGRect _contentBox;
    NSArray *nodes;
    NSArray *edges;
    DTNetworkGraphObject *selectedObject;
    id <DTNetworkGraphLayout> layout;
}

@property(retain) id <DTNetworkGraphLayout> layout; // @synthesize layout;
@property(retain) DTNetworkGraphObject *selectedObject; // @synthesize selectedObject;
@property(retain) NSArray *edges; // @synthesize edges;
@property(retain) NSArray *nodes; // @synthesize nodes;
- (void)mouseDown:(id)arg1;
- (void)observeModel:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resetPaths;
- (void)createNodesAndEdges;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (double)calculateVerticalBorderBuffer;
- (double)calculateHorizontalBorderBuffer;
- (void)dealloc;
- (id)init;

@end

@interface DTNetworkGraphVerticalCycleLayout : NSObject <DTNetworkGraphLayout>
{
}

- (void)layoutGraph:(id)arg1;

@end

@interface DTNetworkGraphHorizontalCycleLayout : NSObject <DTNetworkGraphLayout>
{
}

- (void)layoutGraph:(id)arg1;

@end

@interface DTNetworkGraphVelocitySpreadLayout : NSObject <DTNetworkGraphLayout>
{
    unsigned long long iterationLength;
    BOOL _isLayoutComplete;
}

@property unsigned long long iterationLength; // @synthesize iterationLength;
- (void)layoutGraph:(id)arg1;

@end

@interface DTNetworkGraphCycleLayout : DTNetworkGraphVelocitySpreadLayout
{
}

- (void)layoutGraph:(id)arg1;

@end

@interface NSString (ByteStringComparsion)
- (long long)stringByteValue;
- (long long)byteValueCompare:(id)arg1;
@end

