//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>


@class NSDate, NSString;

@interface WFAccount : MTLModel <NSSecureCoding>
{
    NSString *_accountID;
    NSDate *_createdAt;
    NSDate *_updatedAt;
}

+ (BOOL)allowsMultipleAccounts;
+ (Class)loginViewControllerClass;
+ (id)localizedServiceName;
+ (id)serviceID;
+ (BOOL)supportsSecureCoding;
+ (void)removeAccountObserver:(id)arg1;
+ (id)addAccountObserver:(id /* CDUnknownBlockType */)arg1;
+ (void)notifyAccountsChanged;
+ (BOOL)deleteAccount:(id)arg1;
+ (BOOL)saveAccount:(id)arg1;
+ (id)_accounts;
+ (NSUInteger)_numberOfAccounts;
+ (id)accounts;
+ (NSUInteger)numberOfAccounts;
+ (void)handleChangeForService:(id)arg1;
+ (void)addAccountObserver:(id /* CDUnknownBlockType */)arg1 forService:(id)arg2;
+ (void)setShouldIgnoreNotificationForService:(id)arg1;
+ (BOOL)shouldIgnoreNotificationForService:(id)arg1;
+ (void)useAccountObservers:(id /* CDUnknownBlockType */)arg1;
+ (id)pendingIgnoredNotifications;
+ (id)accountCache;
+ (id)migrate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
// - (void).cxx_destruct;
- (void)invalidateWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)refreshWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)init;

@end
