//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICAppearanceInfo : NSObject
{
    NSUInteger _type;
}

+ (void)enumerateAppearanceTypesUsingBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)appearanceInfoWithType:(NSUInteger)arg1;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
@property(readonly, nonatomic) BOOL isDark;

@end
