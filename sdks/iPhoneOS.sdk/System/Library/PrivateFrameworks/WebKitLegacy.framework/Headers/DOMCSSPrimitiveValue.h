//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMCSSValue.h>

@interface DOMCSSPrimitiveValue : DOMCSSValue
{
}

- (id)getRGBColorValue;
- (id)getRectValue;
- (id)getCounterValue;
- (id)getStringValue;
- (void)setStringValue:(unsigned short)arg1 stringValue:(id)arg2;
- (float)getFloatValue:(unsigned short)arg1;
- (void)setFloatValue:(unsigned short)arg1 floatValue:(float)arg2;
@property(readonly) unsigned short primitiveType;
- (void)setStringValue:(unsigned short)arg1:(id)arg2;
- (void)setFloatValue:(unsigned short)arg1:(float)arg2;

@end
