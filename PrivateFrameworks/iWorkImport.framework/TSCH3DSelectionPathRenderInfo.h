/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCH3DSelectionPathRenderInfo : NSObject {
    float mRotation;
    NSString *mString;
    unsigned int mStyleIndex;
}

@property(readonly) float rotation;
@property(readonly) NSString * string;
@property(readonly) unsigned int styleIndex;

+ (id)renderInfoWithString:(id)arg1 styleIndex:(unsigned int)arg2 rotation:(float)arg3;

- (void)dealloc;
- (id)initWithString:(id)arg1 styleIndex:(unsigned int)arg2 rotation:(float)arg3;
- (float)rotation;
- (id)string;
- (unsigned int)styleIndex;

@end
