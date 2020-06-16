//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class CSCoverSheetDismissGestureSettings, UIGestureRecognizer, UIPanGestureRecognizer, UIViewController;
@protocol SBCoverSheetSystemGestureDelegatePositionProviding;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate>
{
    int _syntheticAppearState;
    id <SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
    UIPanGestureRecognizer *_presentGestureRecognizer;
    UIViewController *_viewController;
    UIGestureRecognizer *_dismissGestureRecognizer;
    UIGestureRecognizer *_dismissAddendumGestureRecognizer;
    UIGestureRecognizer *_preemptingGestureRecognizer;
    CSCoverSheetDismissGestureSettings *_dismissGestureSettings;
}

@property(retain, nonatomic) CSCoverSheetDismissGestureSettings *dismissGestureSettings; // @synthesize dismissGestureSettings=_dismissGestureSettings;
@property(nonatomic) __weak UIGestureRecognizer *preemptingGestureRecognizer; // @synthesize preemptingGestureRecognizer=_preemptingGestureRecognizer;
@property(nonatomic) __weak UIGestureRecognizer *dismissAddendumGestureRecognizer; // @synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer;
@property(nonatomic) __weak UIGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) int syntheticAppearState; // @synthesize syntheticAppearState=_syntheticAppearState;
@property(retain, nonatomic) UIPanGestureRecognizer *presentGestureRecognizer; // @synthesize presentGestureRecognizer=_presentGestureRecognizer;
@property(nonatomic) __weak id <SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider; // @synthesize positionProvider=_positionProvider;
// - (void).cxx_destruct;
- (BOOL)isAnyGestureActivelyRecognized;
- (BOOL)_isGestureActivelyRecognized:(id)arg1;
- (BOOL)_canPresentGestureBegin;
- (BOOL)_canDismissGestureBegin;
- (BOOL)_isGestureAllowedByTransientOverlaysOrTopmostApp;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (BOOL)isPresentGestureActive;
- (BOOL)isDismissGestureActive;
- (id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;

@end

