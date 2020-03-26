//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <SettingsCellularUI/CTCarrierSpaceClientDelegate-Protocol.h>
#import <SettingsCellularUI/RemoteUIControllerDelegate-Protocol.h>

@class CTCarrierSpaceClient, NSObject, RemoteUIController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    RemoteUIController *_remoteUIController;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
// - (void).cxx_destruct;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)dismissPlanDetail;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)stringFromGroupCategory:(long long)arg1;
- (id)detailForPlanOption:(id)arg1;
- (void)moreDetailsButtonTapped:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)carrierSpaceChanged;
- (void)simStatusChanged;

@end
