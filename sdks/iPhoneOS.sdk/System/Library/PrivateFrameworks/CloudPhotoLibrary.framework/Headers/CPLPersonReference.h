//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLReference-Protocol.h>

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference>
{
    NSDictionary *_extraProperties;
    NSString *_personIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
@property(copy, nonatomic) NSDictionary *extraProperties; // @synthesize extraProperties=_extraProperties;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)serializedString;
- (id)initWithSerializedString:(id)arg1;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

@end
