//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class SBLayoutStateTransitionCoordinator;

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver>
{
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}

// - (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)_begin;
- (void)dealloc;
- (id)initWithSceneLayoutTransitionCoordinator:(id)arg1;

@end

