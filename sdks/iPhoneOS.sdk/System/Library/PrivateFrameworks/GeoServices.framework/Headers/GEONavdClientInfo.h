//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_canonicalName;
    NSString *_uniqueClientId;
}

+ (id)clientInfoForNavdPredictions;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *uniqueClientId; // @synthesize uniqueClientId=_uniqueClientId;
@property(copy, nonatomic) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNavdClientInfo;
- (BOOL)isCalendarClientInfo;
- (id)initWithCanonicalName:(id)arg1 instanceId:(NSUInteger)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
