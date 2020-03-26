//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManager-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncServiceDelegate-Protocol.h>

@class DNDSClientDetailsProvider, NSDate;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSSyncService, OS_dispatch_queue;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSAssertionSyncManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSSyncService> _syncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    NSDate *_lastReceivedStoreDate;
    NSDate *_lastSentStoreDate;
    id <DNDSAssertionSyncManagerDataSource> _dataSource;
    id <DNDSAssertionSyncManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)_queue_sendStateSnapshotToPairedDevice:(id)arg1 force:(BOOL)arg2;
- (void)_queue_handleMessage:(id)arg1 withVersionNumber:(NSUInteger)arg2;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(NSUInteger)arg3 fromDeviceIdentifier:(id)arg4;
- (BOOL)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(NSUInteger)arg3 fromDeviceIdentifier:(id)arg4;
- (void)updateForModeAssertionUpdateResult:(id)arg1;
- (void)resume;
- (id)initWithClientDetailsProvider:(id)arg1 syncService:(id)arg2;

@end
