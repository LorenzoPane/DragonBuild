//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol ICPaperStyleUIActivityDelegate;

@interface ICPaperStyleUIActivity : UIActivity
{
    id <ICPaperStyleUIActivityDelegate> _delegate;
}

@property(nonatomic) __weak id <ICPaperStyleUIActivityDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (long long)activityCategory;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)initWithDelegate:(id)arg1;

@end
