//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, NSString, NSURL, SBFParallaxSettings, SBFolder, SBIcon, SBIconImageView, SBIconLabelImage, SBIconLabelImageParameters, SBIconView, SBSApplicationShortcutItem, UIColor, UIDragItem, UIDragPreviewParameters, UIGestureRecognizer, UITargetedDragPreview, UITouch, UIView, _UIContextMenuStyle;
@protocol SBIconAccessoryView, SBIconLabelAccessoryView, UIDragAnimating, UIDragSession;

@protocol SBIconViewDelegate <NSObject>

@optional
- (UIView *)customPresentingContainerViewForShortcutsPresentationWithIconView:(SBIconView *)arg1;
- (BOOL)iconView:(SBIconView *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(NSUInteger)arg3;
- (NSString *)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(SBIconView *)arg1;
- (NSURL *)applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg1;
- (NSArray *)iconView:(SBIconView *)arg1 applicationShortcutItemsWithProposedItems:(NSArray *)arg2;
- (void)iconViewShortcutsPresentationDidCancel:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(SBIconView *)arg1;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(SBIconView *)arg1;
- (void)iconViewWasRecycled:(SBIconView *)arg1;
- (UIColor *)accessibilityTintColorForIconView:(SBIconView *)arg1;
- (BOOL)iconView:(SBIconView *)arg1 shouldContinueToUseBackgroundViewForComponents:(UIView *)arg2;
- (UIView *)backgroundViewForComponentsOfIconView:(SBIconView *)arg1;
- (long long)closeBoxTypeForIconView:(SBIconView *)arg1;
- (double)additionalDragLiftScaleForIconView:(SBIconView *)arg1;
- (SBIconLabelImage *)iconView:(SBIconView *)arg1 labelImageWithParameters:(SBIconLabelImageParameters *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconLabelAccessoryView:(UIView<SBIconLabelAccessoryView> *)arg2;
- (UIView<SBIconLabelAccessoryView> *)iconView:(SBIconView *)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (SBFParallaxSettings *)iconView:(SBIconView *)arg1 parallaxSettingsForIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (UIView<SBIconAccessoryView> *)iconView:(SBIconView *)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconImageView:(SBIconImageView *)arg2;
- (SBIconImageView *)imageViewForIconView:(SBIconView *)arg1;
- (UITargetedDragPreview *)iconView:(SBIconView *)arg1 dragPreviewForItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3 previewParameters:(UIDragPreviewParameters *)arg4;
- (void)iconView:(SBIconView *)arg1 willUseContextMenuStyle:(_UIContextMenuStyle *)arg2;
- (UIView *)containerViewForPresentingContextMenuForIconView:(SBIconView *)arg1;
- (NSURL *)launchURLForIconView:(SBIconView *)arg1;
- (NSSet *)launchActionsForIconView:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 item:(UIDragItem *)arg2 willAnimateDragCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (void)iconView:(SBIconView *)arg1 willUsePreviewForCancelling:(UITargetedDragPreview *)arg2 targetIconView:(SBIconView *)arg3;
- (SBIconView *)iconViewWillCancelDrag:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 didEndDragSession:(id <UIDragSession>)arg2 withOperation:(NSUInteger)arg3;
- (void)iconView:(SBIconView *)arg1 session:(id <UIDragSession>)arg2 willEndWithOperation:(NSUInteger)arg3;
- (void)iconView:(SBIconView *)arg1 willAddDragItems:(NSArray *)arg2 toSession:(id <UIDragSession>)arg3;
- (BOOL)iconView:(SBIconView *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1 session:(id <UIDragSession>)arg2;
- (void)iconView:(SBIconView *)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (long long)iconView:(SBIconView *)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (BOOL)iconView:(SBIconView *)arg1 editingModeGestureRecognizerDidFire:(UIGestureRecognizer *)arg2;
- (BOOL)iconViewCanBeginDrags:(SBIconView *)arg1;
- (double)scale;
- (BOOL)iconViewDisplaysCloseBox:(SBIconView *)arg1;
- (BOOL)iconViewDisplaysBadges:(SBIconView *)arg1;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (BOOL)iconShouldAllowCloseBoxTap:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 openFolder:(SBFolder *)arg2 animated:(BOOL)arg3;
- (BOOL)icon:(SBIconView *)arg1 canReceiveGrabbedIcon:(SBIcon *)arg2;
- (void)iconTapped:(SBIconView *)arg1;
- (BOOL)iconShouldAllowTap:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 touchEnded:(BOOL)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconTouchBegan:(SBIconView *)arg1;
@end

