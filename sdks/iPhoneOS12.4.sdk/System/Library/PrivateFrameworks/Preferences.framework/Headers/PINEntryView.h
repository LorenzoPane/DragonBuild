/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PINEntryView <UITextFieldDelegate>
@required
-(void)setBlocked:(BOOL)arg1;
-(void)showFailedAttempts:(long long)arg1;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
-(double)getCurrentTitleFontSize;
-(void)setTextFieldKeyboardType:(long long)arg1;
-(void)setTextFieldKeyboardAppearance:(long long)arg1;
-(void)showError:(id)arg1 animate:(BOOL)arg2;
-(void)setTitle:(id)arg1 font:(id)arg2;
-(void)hidePasscodeField:(BOOL)arg1;
-(void)setShowsOptionsButton:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id)stringValue;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1;
-(void)setStringValue:(id)arg1;
-(void)deleteLastCharacter;

@end

