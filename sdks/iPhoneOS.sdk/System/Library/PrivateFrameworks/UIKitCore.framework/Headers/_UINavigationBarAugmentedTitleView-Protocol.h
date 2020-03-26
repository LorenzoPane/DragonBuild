//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UINavigationItem, UITraitCollection;
@protocol _UINavigationBarTitleViewDataSource;

@protocol _UINavigationBarAugmentedTitleView <NSObject>
@property(readonly, nonatomic) long long _preferredAlignment;
@property(readonly, nonatomic) double _navigationBarTrailingBarButtonsAlpha;
@property(readonly, nonatomic) double _navigationBarLeadingBarButtonsAlpha;
@property(readonly, nonatomic) double _navigationBarBackButtonAlpha;
@property(readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property(readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property(readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property(readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property(readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property(readonly, nonatomic) double _navigationBarContentHeight;
@property(readonly, nonatomic) BOOL _underlayNavigationBarContent;
- (void)_navigationBarTraitCollectionDidChangeTo:(UITraitCollection *)arg1 from:(UITraitCollection *)arg2;
- (void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (BOOL)_wantsTwoPartTransition;
- (void)_contentDidChange;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id <_UINavigationBarTitleViewDataSource>)arg1 navigationItem:(UINavigationItem *)arg2 titleLocation:(long long)arg3;
@end
