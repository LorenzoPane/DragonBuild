//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAdornmentLayer.h>

@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer
{
    CAShapeLayer *_handlesLayer;
}

@property(retain) CAShapeLayer *handlesLayer; // @synthesize handlesLayer=_handlesLayer;
// - (void).cxx_destruct;
- (void)_removeHandles;
- (void)_updateHandles;
- (void)_addHandles;
- (BOOL)_shouldShowHandles;
- (void)updateSublayersWithScale:(double)arg1;
- (void)updateAdornmentElements;
- (BOOL)needsUpdateWhenDraggingStartsOrEnds;

@end
