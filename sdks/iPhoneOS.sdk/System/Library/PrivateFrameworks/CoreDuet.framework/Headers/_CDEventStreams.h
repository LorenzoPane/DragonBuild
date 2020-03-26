//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _CDEventStreams : NSObject
{
    BOOL _allStreamsLoaded;
    NSDictionary *_allEventStreams;
    NSDictionary *_allKBEventStreams;
}

+ (id)privacyPolicyForEventStreamName:(id)arg1;
+ (id)rateLimiterForEventStreamName:(id)arg1;
+ (id)ephemeralitySchedule;
+ (id)eventStreamPropertiesForEventStream:(id)arg1;
+ (id)eventStreamPropertiesForKBName:(id)arg1;
+ (id)eventStreamPropertiesForName:(id)arg1;
+ (id)eventStreamForName:(id)arg1;
+ (id)contentProviderPlistEventStreamsForPath:(id)arg1;
+ (void)loadAllEventStreams;
+ (id)sharedInstance;
@property(nonatomic) BOOL allStreamsLoaded; // @synthesize allStreamsLoaded=_allStreamsLoaded;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *allKBEventStreams; // @synthesize allKBEventStreams=_allKBEventStreams;
@property(readonly, nonatomic) NSDictionary *allEventStreams; // @synthesize allEventStreams=_allEventStreams;
- (id)_eventStreamForName:(id)arg1 orKBName:(id)arg2;
- (id)init;

@end
