//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPaymentSetupBrowseProductsViewController, PKPaymentSetupProduct;

@protocol PKPaymentSetupBrowseProductsViewControllerDelegate <NSObject>
- (void)browseProductsViewController:(PKPaymentSetupBrowseProductsViewController *)arg1 didSelectProduct:(PKPaymentSetupProduct *)arg2 withCompletionHandler:(void (^)(BOOL, NSError *))arg3;
@end
