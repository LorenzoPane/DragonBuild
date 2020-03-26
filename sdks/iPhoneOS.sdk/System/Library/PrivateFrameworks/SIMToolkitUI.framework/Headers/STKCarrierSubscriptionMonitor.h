//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subscriptionInfo;
    CoreTelephonyClient *_telephonyClient;
}

// - (void).cxx_destruct;
- (void)carrierBundleChange:(id)arg1;
- (void)subscriptionInfoDidChange;
- (id)subscriptionInfoForSlot:(long long)arg1;
- (id)init;

@end
