/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface MPUsageStatistics : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    NSString *_lastAggregateStatisticsDisplayCountKey;
    double _lastAggregateStatisticsDisplayCountTime;
}

+ (id)sharedStatistics;

- (void)setAggregateStatisticsDomain:(id)arg1;
- (void)incrementViewDisplayCountForKey:(id)arg1;
- (void)incrementViewDisplayCountForViewController:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)domain;

@end