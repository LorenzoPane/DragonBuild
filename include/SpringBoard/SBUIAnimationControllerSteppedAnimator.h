//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIAnimationControllerAnimator.h>

#import <SpringBoard/SBViewControllerInteractiveAnimatedTransitioning-Protocol.h>

@class SBAnimationStepper;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>
{
    SBAnimationStepper *_stepper;
}

@property(readonly, nonatomic) SBAnimationStepper *stepper; // @synthesize stepper=_stepper;
// - (void).cxx_destruct;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (id)initWithAnimationController:(id)arg1 stepper:(id)arg2;
- (id)initWithAnimationController:(id)arg1;

@end
