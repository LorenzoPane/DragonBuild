//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage
{
    MRAVOutputDevice *_route;
}

// - (void).cxx_destruct;
- (NSUInteger)type;
@property(readonly, nonatomic) long long inputType;
@property(readonly, nonatomic) MRAVOutputDevice *route;
- (id)initWithRoute:(id)arg1 inputType:(long long)arg2;

@end
