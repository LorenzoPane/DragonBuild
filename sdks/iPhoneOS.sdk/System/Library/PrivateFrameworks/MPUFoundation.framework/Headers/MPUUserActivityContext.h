//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData;

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying>
{
    NSArray *_containerItems;
    long long _originatorType;
    long long _originatorVersion;
}

@property(readonly, nonatomic) long long originatorVersion; // @synthesize originatorVersion=_originatorVersion;
@property(readonly, nonatomic) long long originatorType; // @synthesize originatorType=_originatorType;
@property(readonly, copy, nonatomic) NSArray *containerItems; // @synthesize containerItems=_containerItems;
// - (void).cxx_destruct;
- (id)contextByRemovingContainerItem:(id)arg1;
- (id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (id)containerItemFollowingContainerItem:(id)arg1;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithDataRepresentation:(id)arg1;

@end
