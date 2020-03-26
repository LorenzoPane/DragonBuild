//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject
{
    long long _style;
    UIColor *_referenceColor;
    _UILegibilitySettings *_legibilitySettings;
    double _referenceContrast;
    UIColor *_tintColor;
    UIColor *_highlightLimitingColor;
    UIColor *_shimmerColor;
    UIColor *_chevronShimmerColor;
    UIColor *_highlightColor;
}

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *chevronShimmerColor; // @synthesize chevronShimmerColor=_chevronShimmerColor;
@property(retain, nonatomic) UIColor *shimmerColor; // @synthesize shimmerColor=_shimmerColor;
@property(retain, nonatomic) UIColor *highlightLimitingColor; // @synthesize highlightLimitingColor=_highlightLimitingColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) double referenceContrast; // @synthesize referenceContrast=_referenceContrast;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) UIColor *referenceColor; // @synthesize referenceColor=_referenceColor;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (id)highlightLimitingViewWithFrame:(CGRect)arg1;
- (id)tintViewWithFrame:(CGRect)arg1;
- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2;
- (long long)_style;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;

@end
