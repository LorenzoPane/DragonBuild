//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerTimeConditionDetailEditorDelegate-Protocol.h>

@class HUTriggerConditionDetailEditingContext;
@protocol HUTriggerConditionEditorItemModuleControllerDelegate;

@interface HUTriggerConditionEditorItemModuleController : HUItemTableModuleController <HUSwitchCellDelegate, HUTriggerTimeConditionDetailEditorDelegate>
{
    id <HUTriggerConditionEditorItemModuleControllerDelegate> _delegate;
    HUTriggerConditionDetailEditingContext *_detailEditingContext;
}

@property(retain, nonatomic) HUTriggerConditionDetailEditingContext *detailEditingContext; // @synthesize detailEditingContext=_detailEditingContext;
@property(readonly, nonatomic) __weak id <HUTriggerConditionEditorItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_presentDetailEditorForConditionOptionItem:(id)arg1;
- (void)_dismissDetailEditor:(id)arg1;
- (BOOL)_canEditConditionOptionItem:(id)arg1;
- (void)timeConditionEditorDidCancel:(id)arg1;
- (void)timeConditionEditor:(id)arg1 didFinishWithCondition:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;

@end
