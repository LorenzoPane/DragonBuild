//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBookmark-Protocol.h>

@class NSString;

@interface SXComponentBookmark : NSObject <SXBookmark>
{
    NSString *_componentIdentifier;
}

@property(readonly, copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
// - (void).cxx_destruct;
- (id)initWithComponentIdentifier:(id)arg1;

@end
