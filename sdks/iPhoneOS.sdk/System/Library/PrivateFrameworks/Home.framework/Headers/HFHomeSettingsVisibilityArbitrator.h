//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol>
{
    BOOL _homesConfigured;
    int _homeKitPreferencesChangeNotifyToken;
    NSUInteger _visibilityState;
    id /* CDUnknownBlockType */ _visibilityStateChangeHandler;
    NSUInteger _homeAppInstallState;
}

+ (void)initialize;
@property(nonatomic) int homeKitPreferencesChangeNotifyToken; // @synthesize homeKitPreferencesChangeNotifyToken=_homeKitPreferencesChangeNotifyToken;
@property(nonatomic) NSUInteger homeAppInstallState; // @synthesize homeAppInstallState=_homeAppInstallState;
@property(nonatomic) BOOL homesConfigured; // @synthesize homesConfigured=_homesConfigured;
@property(copy, nonatomic) id /* CDUnknownBlockType */ visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) NSUInteger visibilityState; // @synthesize visibilityState=_visibilityState;
// - (void).cxx_destruct;
- (void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_queryHomeAppInstallStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_reloadVisibilityStateIncludingInstallState:(BOOL)arg1;
- (void)reloadVisibilityState;
- (void)dealloc;
- (id)init;

@end
