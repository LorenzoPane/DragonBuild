//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface MFGradientView : UIView
{
}

+ (Class)layerClass;
@property(nonatomic) CGPoint endPoint;
@property(nonatomic) CGPoint startPoint;
@property(retain, nonatomic) NSArray *locations;
@property(retain, nonatomic) NSArray *gradientColors;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;

@end
