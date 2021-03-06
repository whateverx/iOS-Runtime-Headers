/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction> {
    AVVideoCompositionInstructionInternal *_instruction;
}

@property(retain) struct CGColor { }* backgroundColor;
@property(readonly) BOOL containsTweening;
@property(readonly) BOOL enablePostProcessing;
@property(readonly) NSArray * layerInstructions;
@property(readonly) int passthroughTrackID;
@property(readonly) NSArray * requiredSourceTrackIDs;
@property(readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)_setValuesFromDictionary:(id)arg1;
- (struct CGColor { }*)backgroundColor;
- (BOOL)containsTweening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enablePostProcessing;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)layerInstructions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)passthroughTrackID;
- (id)requiredSourceTrackIDs;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (void)setLayerInstructions:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
