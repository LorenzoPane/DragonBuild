//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/SSXPCCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface SUCreditCardReaderOutput : SUScriptObject <SSXPCCoding, NSSecureCoding>
{
    BOOL _cancelled;
    BOOL _manualEntrySelected;
    NSString *_cardCardholderName;
    NSNumber *_cardExpirationDay;
    NSNumber *_cardExpirationMonth;
    NSNumber *_cardExpirationYear;
    NSString *_cardExpirationStringValue;
    NSString *_cardNumber;
    NSError *_error;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)webScriptNameForKeyName:(id)arg1;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL manualEntrySelected; // @synthesize manualEntrySelected=_manualEntrySelected;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *cardExpirationStringValue; // @synthesize cardExpirationStringValue=_cardExpirationStringValue;
@property(copy, nonatomic) NSNumber *cardExpirationYear; // @synthesize cardExpirationYear=_cardExpirationYear;
@property(copy, nonatomic) NSNumber *cardExpirationMonth; // @synthesize cardExpirationMonth=_cardExpirationMonth;
@property(copy, nonatomic) NSNumber *cardExpirationDay; // @synthesize cardExpirationDay=_cardExpirationDay;
@property(copy, nonatomic) NSString *cardCardholderName; // @synthesize cardCardholderName=_cardCardholderName;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)scriptAttributeKeys;
- (id)attributeKeys;

@end
