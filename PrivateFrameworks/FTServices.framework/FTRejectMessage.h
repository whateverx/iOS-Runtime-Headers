/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;

@interface FTRejectMessage : FTMessage  {
    NSData *_peerPushToken;
    NSData *_selfPushToken;
    NSString *_peerID;
    NSNumber *_reason;
}

@property(copy) NSNumber * reason;
@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSData * selfPushToken;


- (void)setReason:(id)arg1;
- (id)peerID;
- (id)bagKey;
- (id)reason;
- (void)dealloc;
- (void)setSelfPushToken:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (id)peerPushToken;
- (void)setPeerID:(id)arg1;
- (id)selfPushToken;
- (id)requiredKeys;
- (id)messageBody;

@end