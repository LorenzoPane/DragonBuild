//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer
{
    long long _groupingOption;
    NSCalendar *_conversionCalendar;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(retain, nonatomic) NSCalendar *conversionCalendar; // @synthesize conversionCalendar=_conversionCalendar;
@property(nonatomic) long long groupingOption; // @synthesize groupingOption=_groupingOption;
// - (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;
- (id)initWithGroupingOption:(long long)arg1;

@end
