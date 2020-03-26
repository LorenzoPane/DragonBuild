//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACRemoteCommandHandler : NSObject
{
    ACAccountStore *_accountStore;
}

// - (void).cxx_destruct;
- (id)_localAccountMatchingRemoteAccount:(id)arg1;
- (void)_invalidateFetchedAccountsCacheWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchAccountsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_deleteAccount:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_updateAccount:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_saveAccount:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_removeAllAccountsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end
