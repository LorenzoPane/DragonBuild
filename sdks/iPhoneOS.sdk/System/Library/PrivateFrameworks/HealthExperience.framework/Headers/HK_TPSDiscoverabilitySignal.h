//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HK_TPSDiscoverabilitySignal : NSObject
{
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_context;
}

+ (id)osBuild;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)_discoverabilitySignalsStream;
- (id)_knowledgeStore;
- (void)donateSignalWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3;
- (id)initWithIdentifier:(id)arg1;

@end
