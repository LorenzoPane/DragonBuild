//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TVTemplateFeatureContextHandle : NSObject
{
    id _context;
    long long _rank;
}

+ (id)handleWithContext:(id)arg1;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end
