//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSDate *_localDate;
}

+ (NSUInteger)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (id)_monthNodeForMomentNode:(id)arg1;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
// - (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_lastMonthPotentialMemory;

@end
