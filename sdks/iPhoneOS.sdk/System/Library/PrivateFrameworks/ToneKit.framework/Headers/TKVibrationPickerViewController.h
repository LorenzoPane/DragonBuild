//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ToneKit/PSStateRestoration-Protocol.h>
#import <ToneKit/TKVibrationPickerTableViewCellDelegate-Protocol.h>
#import <ToneKit/TKVibrationRecorderViewControllerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, NSTimer, TKVibratorController, TLVibrationManager;
@protocol TKVibrationPickerStyleProvider, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate;

@interface TKVibrationPickerViewController : UITableViewController <PSStateRestoration, TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate>
{
    long long _alertType;
    BOOL _showsDefault;
    BOOL _showsUserGenerated;
    BOOL _showsNone;
    BOOL _showsNothingSelected;
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _allowsDeletingDefaultVibration;
    NSString *_noneString;
    BOOL _canEnterEditingMode;
    BOOL _viewHasAppearedAtLeastOnce;
    BOOL _isCallingParentViewController;
    BOOL _swipeToDeleteMode;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    BOOL _defaultVibrationIdentifierWasExplicitlySet;
    BOOL _showsSynchronized;
    NSString *_synchronizedVibrationIdentifier;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    NSMutableDictionary *_sectionHeaderViews;
    BOOL _showsEditButtonInNavigationBar;
    NSString *_topic;
    id <TKVibrationPickerViewControllerDelegate> _delegate;
    NSString *_defaultVibrationIdentifier;
    NSString *_correspondingToneIdentifier;
    NSString *_selectedVibrationIdentifier;
    id <TKVibrationPickerStyleProvider> _styleProvider;
    id <TKVibrationPickerViewControllerDelegate> __additionalDelegate;
    id <TKVibrationPickerViewControllerDismissalDelegate> __dismissalDelegate;
}

@property(nonatomic, setter=_setDismissalDelegate:) __weak id <TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate; // @synthesize _dismissalDelegate=__dismissalDelegate;
@property(nonatomic, setter=_setAdditionalDelegate:) __weak id <TKVibrationPickerViewControllerDelegate> _additionalDelegate; // @synthesize _additionalDelegate=__additionalDelegate;
@property(retain, nonatomic) id <TKVibrationPickerStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL showsEditButtonInNavigationBar; // @synthesize showsEditButtonInNavigationBar=_showsEditButtonInNavigationBar;
@property(nonatomic) BOOL allowsDeletingDefaultVibration; // @synthesize allowsDeletingDefaultVibration=_allowsDeletingDefaultVibration;
@property(retain, nonatomic) NSString *selectedVibrationIdentifier; // @synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier;
@property(nonatomic) BOOL showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property(copy, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property(nonatomic) BOOL showsNone; // @synthesize showsNone=_showsNone;
@property(nonatomic) BOOL showsUserGenerated; // @synthesize showsUserGenerated=_showsUserGenerated;
@property(copy, nonatomic) NSString *correspondingToneIdentifier; // @synthesize correspondingToneIdentifier=_correspondingToneIdentifier;
@property(copy, nonatomic) NSString *defaultVibrationIdentifier; // @synthesize defaultVibrationIdentifier=_defaultVibrationIdentifier;
@property(nonatomic) BOOL showsDefault; // @synthesize showsDefault=_showsDefault;
@property(nonatomic) __weak id <TKVibrationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
// - (void).cxx_destruct;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_presentVibrationRecorderViewController;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)_stopVibrating;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)_sectionForNoneGroup;
- (long long)_sectionForUserGeneratedGroup;
- (long long)_sectionForSystemGroup;
- (long long)_sectionForSynchronizedGroup;
- (long long)_sectionForDefaultGroup;
- (id)_customHeaderViewForHeaderInSection:(long long)arg1;
- (id)_localizationIdentifierForHeaderInSection:(long long)arg1;
- (void)_updateVisibilityOfSynchronizedGroup;
- (void)_updateCheckedStateOfAllVisibleCells;
- (void)_updateSectionVisibilityFlagToValue:(BOOL)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2 sectionIndexGetter:(id /* CDUnknownBlockType */)arg3;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateEditButtonItemWithAnimation:(BOOL)arg1;
- (void)_updateEditButtonItem;
- (id)_navigationItem;
- (void)_processCurrentVibrationSelection;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (id)_sortedVibrationIdentifiers;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2;
- (id)_selectedVibrationIndexPath;
- (id)_sanitizeVibrationIdentifierForPlayback:(id)arg1;
- (id)_sanitizedDefaultVibrationIdentifier;
- (id)_sanitizedCorrespondingToneIdentifier;
- (CDStruct_3d581f42)_cellAccessoriesDescriptorForRowAtIndexPath:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)applicationWillSuspend;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)_showsOnlyEditableSections;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
@property(readonly, nonatomic) BOOL canEnterEditingMode;
- (void)dealloc;
- (id)initWithAlertType:(long long)arg1;
- (id)initWithStyle:(long long)arg1;
@property(copy, nonatomic) NSString *accountIdentifier;
- (BOOL)canBeShownFromSuspendedState;

@end
