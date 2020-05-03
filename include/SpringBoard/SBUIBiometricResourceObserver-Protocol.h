//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBUIBiometricResource;

@protocol SBUIBiometricResourceObserver <NSObject>

@optional
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingEnabledDidChange:(BOOL)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingAllowedDidChange:(BOOL)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 observeEvent:(NSUInteger)arg2;
@end
