//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

// - (void).cxx_destruct;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (long long)layoutUpdateMode;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (BOOL)wantsResignActiveAssertion;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
