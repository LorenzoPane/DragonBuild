//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBPressGestureStateInfo : NSObject
{
    BOOL _isCoalescing;
    long long _state;
    double _expirationTime;
    long long _stateUponExpiration;
}

@property(nonatomic) long long stateUponExpiration; // @synthesize stateUponExpiration=_stateUponExpiration;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) BOOL isCoalescing; // @synthesize isCoalescing=_isCoalescing;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)init;

@end

