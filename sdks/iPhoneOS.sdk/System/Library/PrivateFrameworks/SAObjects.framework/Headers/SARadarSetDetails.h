//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand
{
}

+ (id)setDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setDetails;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *description;
@property(copy, nonatomic) NSString *classification;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
