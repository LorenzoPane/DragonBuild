//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>

@interface BSStateCaptureInvalidator : NSObject <BSInvalidatable>
{
    NSUInteger _handle;
    BOOL _invalidated;
}

- (void)invalidate;
- (id)initWithHandle:(NSUInteger)arg1;

@end
