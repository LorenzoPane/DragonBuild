//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol SXBlueprintMarker, SXComponent, SXComponentInsertionCondition, SXComponentInsertionLayoutProvider;

@protocol SXComponentInsertionConditionEngine <NSObject>
- (void)addCondition:(id <SXComponentInsertionCondition>)arg1;
- (BOOL)validateMarker:(id <SXBlueprintMarker>)arg1 componentTraits:(NSUInteger)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (void)insertedComponent:(id <SXComponent>)arg1 approximateLocation:(CGPoint)arg2;
- (void)prepareWithComponents:(NSArray *)arg1 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg2;
@end
