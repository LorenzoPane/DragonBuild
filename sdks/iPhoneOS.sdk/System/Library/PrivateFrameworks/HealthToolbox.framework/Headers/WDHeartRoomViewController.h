//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDHealthDataCategoryViewController.h>

#import <HealthToolbox/HKDisplayTypeContextViewDelegate-Protocol.h>
#import <HealthToolbox/HKHeartRateQueryHandler-Protocol.h>
#import <HealthToolbox/HKInteractiveChartViewObserver-Protocol.h>

@class HKHeartRateQueryUtility, NSArray, NSDate, NSDateInterval, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface WDHeartRoomViewController : WDHealthDataCategoryViewController <HKDisplayTypeContextViewDelegate, HKInteractiveChartViewObserver, HKHeartRateQueryHandler>
{
    long long _preferredSelectedContext;
    NSArray *_heartRateContextResults;
    NSArray *_heartRateContextItems;
    HKHeartRateQueryUtility *_heartRateQueryUtility;
    NSUUID *_heartRateQueryUUID;
    long long _currentHeartChartTimeScope;
    NSDateInterval *_currentHeartChartDateInterval;
    long long _currentSelectedContextIndex;
    NSDate *_displayDate;
}

@property(copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) long long currentSelectedContextIndex; // @synthesize currentSelectedContextIndex=_currentSelectedContextIndex;
@property(copy, nonatomic) NSDateInterval *currentHeartChartDateInterval; // @synthesize currentHeartChartDateInterval=_currentHeartChartDateInterval;
@property(nonatomic) long long currentHeartChartTimeScope; // @synthesize currentHeartChartTimeScope=_currentHeartChartTimeScope;
@property(copy, nonatomic) NSUUID *heartRateQueryUUID; // @synthesize heartRateQueryUUID=_heartRateQueryUUID;
@property(retain, nonatomic) HKHeartRateQueryUtility *heartRateQueryUtility; // @synthesize heartRateQueryUtility=_heartRateQueryUtility;
@property(retain, nonatomic) NSArray *heartRateContextItems; // @synthesize heartRateContextItems=_heartRateContextItems;
@property(retain, nonatomic) NSArray *heartRateContextResults; // @synthesize heartRateContextResults=_heartRateContextResults;
@property(nonatomic) long long preferredSelectedContext; // @synthesize preferredSelectedContext=_preferredSelectedContext;
// - (void).cxx_destruct;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(NSDictionary )arg2;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)pushControllerForSessionType:(long long)arg1 title:(id)arg2;
- (id)dateStringForContextResult:(id)arg1;
- (BOOL)infoButtonHiddenForTimeScope:(long long)arg1 contextResult:(id)arg2;
- (id)valueForDisplayTypeContextResult:(id)arg1;
- (id)titleForDisplayTypeContextResult:(id)arg1;
- (void)updateChartForCurrentlySelectedOverlay;
- (id)contextItemsFromDisplayTypeContextResults:(id)arg1;
- (long long)distributionStyleForHeartRateContext:(long long)arg1;
- (id)quantityTypeIdentifierForHeartRateContext:(long long)arg1;
- (void)dataForHeartRateContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(id /* CDUnknownBlockType */)arg4;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_allContextSampleTypes;
- (id)_chartedHeartRateTypes;
- (id)_displayTypeForContext:(long long)arg1;
- (void)selectContextItemAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setupHeartChartViewController;
- (BOOL)_shouldShowChartSection;
- (void)applyPreferredDisplayType;
- (void)_showChartRowIfNecessary;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSArray *defaultHeartRateContextResults;
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 displayDate:(id)arg2;

@end
