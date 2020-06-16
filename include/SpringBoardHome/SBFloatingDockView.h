//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBDockIconListView, SBFloatingDockPlatterView, UIView;

@interface SBFloatingDockView : SBFTouchPassThroughView
{
    SBDockIconListView *_userIconListView;
    SBDockIconListView *_recentIconListView;
    double _platterVerticalMargin;
    NSUInteger _minimumUserIconSpaces;
    SBFloatingDockPlatterView *_mainPlatterView;
    UIView *_dividerView;
    UIView *_touchReceivingView;
    double _iconContentScale;
    UIEdgeInsets _paddingEdgeInsets;
}

+ (void)getMetrics:(CDStruct_c0971cc5 )arg1 forBounds:(CGRect)arg2 numberOfUserIcons:(NSUInteger)arg3 numberOfRecentIcons:(NSUInteger)arg4 paddingEdgeInsets:(UIEdgeInsets)arg5 referenceIconSize:(CGSize)arg6 maximumIconSize:(CGSize)arg7 referenceInterIconSpacing:(double)arg8 maximumInterIconSpacing:(double)arg9 platterVerticalMargin:(double)arg10;
+ (double)contentHeightForBounds:(CGRect)arg1 mainPlatterViewFrame:(CGRect)arg2;
+ (CGSize)maximumIconSizeWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)minimumPlatterMargin;
+ (double)maximumPlatterHeightWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)maximumInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)maximumDockContinuousCornerRadiusWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)_referenceInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo)arg1;
@property(nonatomic) double iconContentScale; // @synthesize iconContentScale=_iconContentScale;
@property(retain, nonatomic) UIView *touchReceivingView; // @synthesize touchReceivingView=_touchReceivingView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) SBFloatingDockPlatterView *mainPlatterView; // @synthesize mainPlatterView=_mainPlatterView;
@property(nonatomic) NSUInteger minimumUserIconSpaces; // @synthesize minimumUserIconSpaces=_minimumUserIconSpaces;
@property(nonatomic) double platterVerticalMargin; // @synthesize platterVerticalMargin=_platterVerticalMargin;
@property(nonatomic) UIEdgeInsets paddingEdgeInsets; // @synthesize paddingEdgeInsets=_paddingEdgeInsets;
@property(retain, nonatomic) SBDockIconListView *recentIconListView; // @synthesize recentIconListView=_recentIconListView;
@property(retain, nonatomic) SBDockIconListView *userIconListView; // @synthesize userIconListView=_userIconListView;
// - (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateDividerVisualStyling;
- (void)bounce;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)getMetrics:(CDStruct_c0971cc5 )arg1 forBounds:(CGRect)arg2;
@property(readonly, nonatomic) double interIconSpacing;
- (double)iconContentScaleForNumberOfUserIcons:(NSUInteger)arg1;
- (double)contentHeightForBounds:(CGRect)arg1;
@property(readonly, nonatomic) double contentHeight;
- (UIEdgeInsets)platterShadowOutsetsForBounds:(CGRect)arg1;
@property(readonly, nonatomic) UIEdgeInsets platterShadowOutsets;
@property(nonatomic) BOOL hasPlatterShadow;
@property(readonly, nonatomic) CGRect platterFrame;
@property(retain, nonatomic) UIView *backgroundView;
- (id)initWithFrame:(CGRect)arg1;
@property(readonly, nonatomic) CGSize maximumIconSize;
@property(readonly, nonatomic) double maximumPlatterHeight;
@property(readonly, nonatomic) double maximumInterIconSpacing;
@property(readonly, nonatomic) double maximumDockContinuousCornerRadius;
- (double)_referenceInterIconSpacing;
- (CGSize)_referenceIconSize;
- (struct SBIconImageInfo)_iconImageInfo;

@end

