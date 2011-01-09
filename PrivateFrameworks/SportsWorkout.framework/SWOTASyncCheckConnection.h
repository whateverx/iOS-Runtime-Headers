/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class <SWSyncServiceConnectionDelegate><SWOTASyncCheckConnectionDelegate>;



@interface SWOTASyncCheckConnection : SWSyncServiceConnection 
{
    <SWSyncServiceConnectionDelegate><SWOTASyncCheckConnectionDelegate> *_delegate;
    NSInteger _responseStatusCode;
}

@property(readonly) NSInteger responseStatusCode;
@property <SWSyncServiceConnectionDelegate><SWOTASyncCheckConnectionDelegate> *delegate;


- (NSInteger)responseStatusCode;
- (id)initWithHost:(id)arg1 delegate:(id)arg2;
- (void)handleResponse:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end