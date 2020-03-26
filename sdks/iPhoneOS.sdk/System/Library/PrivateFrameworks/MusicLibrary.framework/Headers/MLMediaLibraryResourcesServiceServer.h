//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryAccountChangeObserver-Protocol.h>
#import <MusicLibrary/MLMediaLibraryResourcesServiceXPCProtocol-Protocol.h>

@class NSMutableSet, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_semaphore> *_accountChangeSemaphore;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSXPCListener *xpcServiceListener; // @synthesize xpcServiceListener=_xpcServiceListener;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore; // @synthesize accountChangeSemaphore=_accountChangeSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
// - (void).cxx_destruct;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_unblockExecutionForFutureAccountChange;
- (void)_blockExecutionForOnGoingAccountChangeIfNeeded;
- (id)initWithAccountChangeObserver:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)emergencyDisconnectWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)libraryContainerPathWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end
