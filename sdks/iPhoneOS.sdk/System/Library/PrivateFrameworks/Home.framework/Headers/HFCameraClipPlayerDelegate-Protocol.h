//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;
@protocol HFCameraClipPlaying;

@protocol HFCameraClipPlayerDelegate <NSObject>

@optional
- (void)clipPlayerDidPlayToEndTime:(id <HFCameraClipPlaying>)arg1;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateMuted:(BOOL)arg2;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateError:(NSError *)arg2 isFatal:(BOOL)arg3;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateTimeControlStatus:(long long)arg2;
@end
