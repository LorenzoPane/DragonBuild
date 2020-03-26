//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface _EARAcousticFeature : NSObject <NSCopying>
{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

@property(readonly, nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame; // @synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithAcousticFeatureValues:(id)arg1 frameDuration:(float)arg2;

@end
