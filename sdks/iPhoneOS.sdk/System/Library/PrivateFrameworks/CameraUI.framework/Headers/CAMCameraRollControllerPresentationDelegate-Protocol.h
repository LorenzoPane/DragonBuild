//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMCameraRollController, UIImage, UIViewController;

@protocol CAMCameraRollControllerPresentationDelegate <NSObject>
- (void)cameraRollController:(CAMCameraRollController *)arg1 didDismissPreviewControllerShouldStartCaptureSession:(BOOL)arg2;
- (void)cameraRollControllerWillPresentPreviewController:(CAMCameraRollController *)arg1;
- (void)cameraRollController:(CAMCameraRollController *)arg1 willShowPresentingViewControllerShouldStartCaptureSession:(BOOL)arg2;
- (void)cameraRollControllerRequestsCaptureSessionStopped:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerDidDismissFullyPresentedCameraRoll:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerDidFullyPresentCameraRoll:(CAMCameraRollController *)arg1;
- (UIViewController *)cameraRollControllerPresentingViewController:(CAMCameraRollController *)arg1;

@optional
- (long long)cameraRollControllerPreferredPresentationOrientation:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerRevealDidEnd:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerRevealWillBegin:(CAMCameraRollController *)arg1;
- (UIImage *)cameraRollControllerImageForReveal:(CAMCameraRollController *)arg1;
- (CGRect)cameraRollControllerPreviewSourceRect:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerPreviewGestureDidBecomeAvailable:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerPrefersPresentingStatusbarHiddenDidChange:(CAMCameraRollController *)arg1;
- (void)cameraRollController:(CAMCameraRollController *)arg1 shouldHideSourceAsset:(BOOL)arg2;
- (CGRect)cameraRollControllerSourceAssetRect:(CAMCameraRollController *)arg1;
- (void)cameraRollControllerWillPresentCameraRoll:(CAMCameraRollController *)arg1;
@end
