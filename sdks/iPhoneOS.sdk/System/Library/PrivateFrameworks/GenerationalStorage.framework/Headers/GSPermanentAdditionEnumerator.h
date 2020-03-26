//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import <GenerationalStorage/GSAdditionEnumerating-Protocol.h>

@class GSDaemonProxySync, GSPermanentStorage, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating>
{
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    NSUInteger _withOptions;
    NSUInteger _withoutOptions;
    NSArray *_array;
    NSUInteger _pos;
    GSDaemonProxySync *_proxy;
    NSError *_error;
    id _token;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)nextObject;
- (void)_fetchNextBatch;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(NSUInteger)arg3 withoutOptions:(NSUInteger)arg4 ordering:(int)arg5;

@end
