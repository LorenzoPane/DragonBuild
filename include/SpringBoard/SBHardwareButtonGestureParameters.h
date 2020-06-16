//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBHardwareButtonGestureParameters : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    long long _maximumPressCount;
    double _longPressTimeInterval;
    double _multiplePressTimeInterval;
}

@property(readonly, nonatomic) double multiplePressTimeInterval; // @synthesize multiplePressTimeInterval=_multiplePressTimeInterval;
@property(readonly, nonatomic) double longPressTimeInterval; // @synthesize longPressTimeInterval=_longPressTimeInterval;
@property(readonly, nonatomic) long long maximumPressCount; // @synthesize maximumPressCount=_maximumPressCount;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

