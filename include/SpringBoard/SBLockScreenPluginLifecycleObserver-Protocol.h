//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBLockScreenPlugin;

@protocol SBLockScreenPluginLifecycleObserver <NSObject>
- (void)didDismissLockScreenPlugin:(SBLockScreenPlugin *)arg1;
- (void)willDismissLockScreenPlugin:(SBLockScreenPlugin *)arg1;
- (void)didPresentLockScreenPlugin:(SBLockScreenPlugin *)arg1;
- (void)willPresentLockScreenPlugin:(SBLockScreenPlugin *)arg1;
@end
