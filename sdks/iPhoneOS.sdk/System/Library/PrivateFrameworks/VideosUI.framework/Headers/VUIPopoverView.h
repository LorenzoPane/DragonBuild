//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class TVImageProxy, VUIButton, VUIPopoverDescriptor;

__attribute__((visibility("hidden")))
@interface VUIPopoverView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _imageLoaded;
    VUIPopoverDescriptor *_popoverDescriptor;
    VUIButton *_tvPopoverButton;
    TVImageProxy *_imageProxy;
}

@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(nonatomic, getter=isImageLoaded) BOOL imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) VUIButton *tvPopoverButton; // @synthesize tvPopoverButton=_tvPopoverButton;
@property(retain, nonatomic) VUIPopoverDescriptor *popoverDescriptor; // @synthesize popoverDescriptor=_popoverDescriptor;
// - (void).cxx_destruct;
- (void)_popoverButtonPressed:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;

@end
