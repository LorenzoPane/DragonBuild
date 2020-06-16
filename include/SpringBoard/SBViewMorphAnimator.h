//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBViewMorphAnimatorObserver-Protocol.h>

@class BSTimer, NSHashTable, NSUUID, SBHomeGestureSettings, SBViewMorphAnimatorContentClippingView, UIView;
@protocol SBViewMorphAnimatorDataSource;

@interface SBViewMorphAnimator : NSObject <SBViewMorphAnimatorObserver>
{
    BOOL _automaticallyStartSourceAnimations;
    BOOL _automaticallyStartTargetAnimations;
    BOOL _invalidated;
    BOOL _sourceScaleAndPositionEnded;
    NSUUID *_uuid;
    UIView *_sourceView;
    UIView *_sourceContentView;
    UIView *_targetView;
    UIView *_targetContentView;
    id <SBViewMorphAnimatorDataSource> _targetDataSource;
    double _sourceFinalScale;
    double _targetCornerRadius;
    NSHashTable *_observers;
    long long _startedSourceAnimations;
    long long _completedSourceAnimations;
    long long _startedTargetAnimations;
    long long _completedTargetAnimations;
    id /* CDUnknownBlockType */ _sourceAllAnimationsCompletionBlock;
    BSTimer *_animationTimeoutTimer;
    BSTimer *_sourceAnimationsCompletionContinueBlockTimeoutTimer;
    SBHomeGestureSettings *_homeGestureSettings;
    SBViewMorphAnimatorContentClippingView *_sourceContentClippingView;
    SBViewMorphAnimatorContentClippingView *_targetContentClippingView;
    CGPoint _sourceFinalCenter;
    CGRect _sourceContentFrame;
    CGRect _targetSourcePinningFrame;
    CGRect _targetFinalFrame;
    CGRect _sourceContentClippingViewInitialFrame;
    CGRect _targetContentClippingViewInitialFrame;
}

@property(nonatomic) CGRect targetContentClippingViewInitialFrame; // @synthesize targetContentClippingViewInitialFrame=_targetContentClippingViewInitialFrame;
@property(retain, nonatomic) SBViewMorphAnimatorContentClippingView *targetContentClippingView; // @synthesize targetContentClippingView=_targetContentClippingView;
@property(nonatomic) CGRect sourceContentClippingViewInitialFrame; // @synthesize sourceContentClippingViewInitialFrame=_sourceContentClippingViewInitialFrame;
@property(retain, nonatomic) SBViewMorphAnimatorContentClippingView *sourceContentClippingView; // @synthesize sourceContentClippingView=_sourceContentClippingView;
@property(nonatomic) __weak SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(retain, nonatomic) BSTimer *sourceAnimationsCompletionContinueBlockTimeoutTimer; // @synthesize sourceAnimationsCompletionContinueBlockTimeoutTimer=_sourceAnimationsCompletionContinueBlockTimeoutTimer;
@property(retain, nonatomic) BSTimer *animationTimeoutTimer; // @synthesize animationTimeoutTimer=_animationTimeoutTimer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sourceAllAnimationsCompletionBlock; // @synthesize sourceAllAnimationsCompletionBlock=_sourceAllAnimationsCompletionBlock;
@property(nonatomic) BOOL sourceScaleAndPositionEnded; // @synthesize sourceScaleAndPositionEnded=_sourceScaleAndPositionEnded;
@property(nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) long long completedTargetAnimations; // @synthesize completedTargetAnimations=_completedTargetAnimations;
@property(nonatomic) long long startedTargetAnimations; // @synthesize startedTargetAnimations=_startedTargetAnimations;
@property(nonatomic) long long completedSourceAnimations; // @synthesize completedSourceAnimations=_completedSourceAnimations;
@property(nonatomic) long long startedSourceAnimations; // @synthesize startedSourceAnimations=_startedSourceAnimations;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) CGRect targetFinalFrame; // @synthesize targetFinalFrame=_targetFinalFrame;
@property(readonly, nonatomic) CGRect targetSourcePinningFrame; // @synthesize targetSourcePinningFrame=_targetSourcePinningFrame;
@property(readonly, nonatomic) double targetCornerRadius; // @synthesize targetCornerRadius=_targetCornerRadius;
@property(readonly, nonatomic) CGRect sourceContentFrame; // @synthesize sourceContentFrame=_sourceContentFrame;
@property(readonly, nonatomic) double sourceFinalScale; // @synthesize sourceFinalScale=_sourceFinalScale;
@property(readonly, nonatomic) CGPoint sourceFinalCenter; // @synthesize sourceFinalCenter=_sourceFinalCenter;
@property(nonatomic) BOOL automaticallyStartTargetAnimations; // @synthesize automaticallyStartTargetAnimations=_automaticallyStartTargetAnimations;
@property(nonatomic) BOOL automaticallyStartSourceAnimations; // @synthesize automaticallyStartSourceAnimations=_automaticallyStartSourceAnimations;
@property(nonatomic) __weak id <SBViewMorphAnimatorDataSource> targetDataSource; // @synthesize targetDataSource=_targetDataSource;
@property(nonatomic) __weak UIView *targetContentView; // @synthesize targetContentView=_targetContentView;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) __weak UIView *sourceContentView; // @synthesize sourceContentView=_sourceContentView;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (void)_handleHandoffTimeout;
- (void)_continueSourceAnimationsCompletionPendingBlock;
- (void)_checkAnimationsDependencies:(id /* CDUnknownBlockType */)arg1;
- (void)didEndTargetAnimations:(NSUInteger)arg1 finished:(BOOL)arg2 continueBlock:(id /* CDUnknownBlockType */)arg3;
- (void)willStartTargetAnimations:(NSUInteger)arg1;
- (void)didEndSourceAnimations:(NSUInteger)arg1 finished:(BOOL)arg2 continueBlock:(id /* CDUnknownBlockType */)arg3;
- (void)willStartSourceAnimations:(NSUInteger)arg1;
- (BOOL)startTargetAnimations:(NSUInteger)arg1;
- (BOOL)startSourceAnimations:(NSUInteger)arg1;
- (CGRect)_targetInitialClippingBoundsWithSourceContentFrame:(CGRect)arg1 sourceFinalScale:(double)arg2 targetViewBounds:(CGRect)arg3;
- (CGRect)_targetSourcePinningFrameWithSourceContentFrame:(CGRect)arg1 targetFinalFrame:(CGRect)arg2;
- (CGPoint)_source:(id)arg1 finalCenterWithFinalScale:(double)arg2 contentFrame:(CGRect)arg3 targetFinalFrame:(CGRect)arg4;
- (double)_sourceFinalScaleWithContentFrame:(CGRect)arg1 targetFinalFrame:(CGRect)arg2;
- (CGRect)_sourceContentFrameForSourceView:(id)arg1 withTargetDataSource:(id)arg2;
- (void)_noteAnimatorWasInterrupted;
- (void)_noteAnimatorWasCanceled;
- (void)noteTargetAnimationsDidEnd:(NSUInteger)arg1 finished:(BOOL)arg2 continueBlock:(id /* CDUnknownBlockType */)arg3;
- (void)noteTargetAnimationsWillStart:(NSUInteger)arg1;
- (void)noteSourceAnimationsDidEnd:(NSUInteger)arg1 finished:(BOOL)arg2 continueBlock:(id /* CDUnknownBlockType */)arg3;
- (void)noteSourceAnimationsWillStart:(NSUInteger)arg1;
- (void)addObserver:(id)arg1;
- (void)_updateParameters;
- (BOOL)preflightCheck;
- (void)_removeSourceClippingView;
- (void)_resetAllAnimations;
- (void)interrupt:(id /* CDUnknownBlockType */)arg1;
- (void)cancel:(id /* CDUnknownBlockType */)arg1;
- (void)_reset;
- (void)dealloc;
- (id)init;
- (id)initWithUUID:(id)arg1;

@end

