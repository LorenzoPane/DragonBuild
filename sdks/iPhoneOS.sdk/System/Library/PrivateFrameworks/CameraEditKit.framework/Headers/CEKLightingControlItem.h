//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface CEKLightingControlItem : NSObject
{
    long long _lightingType;
    NSString *_displayName;
    UIImage *_displayImage;
    UIImage *_displayShadowImage;
    UIImage *_displayOutlineImage;
    UIImage *_selectionBackgroundImage;
}

+ (id)_defaultOutlineImage;
@property(readonly, nonatomic) UIImage *selectionBackgroundImage; // @synthesize selectionBackgroundImage=_selectionBackgroundImage;
@property(readonly, nonatomic) UIImage *displayOutlineImage; // @synthesize displayOutlineImage=_displayOutlineImage;
@property(readonly, nonatomic) UIImage *displayShadowImage; // @synthesize displayShadowImage=_displayShadowImage;
@property(readonly, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long lightingType; // @synthesize lightingType=_lightingType;
// - (void).cxx_destruct;
- (id)initWithType:(long long)arg1;

@end
