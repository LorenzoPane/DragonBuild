//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand
{
}

+ (id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addResultObjects;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *resultObjects;
@property(copy, nonatomic) NSArray *objects;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
