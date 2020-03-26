//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKAxisLabel, HKValueRange, NSArray;

@protocol HKAxisLabelDataSource <NSObject>
- (CGPoint)renderPositionForLabel:(HKAxisLabel *)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7;
- (NSArray *)findAxisLabelsInModelRange:(HKValueRange *)arg1 zoomScale:(double)arg2;

@optional
- (HKValueRange *)extendedModelRangeWithRange:(HKValueRange *)arg1 timeScope:(long long)arg2;
@end
