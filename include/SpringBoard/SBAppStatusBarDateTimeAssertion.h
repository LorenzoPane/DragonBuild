//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSSimpleAssertion.h>

@class UIStatusBar;

@interface SBAppStatusBarDateTimeAssertion : BSSimpleAssertion
{
    BOOL _dateTimeHidden;
    UIStatusBar *_statusBar;
}

@property(nonatomic, getter=isDateTimeHidden) BOOL dateTimeHidden; // @synthesize dateTimeHidden=_dateTimeHidden;
@property(retain, nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
// - (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2;

@end

