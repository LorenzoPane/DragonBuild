//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>


@class NSData, NSString;

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding>
{
    NSString *_referenceIdentifier;
    NSData *_nonce;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
