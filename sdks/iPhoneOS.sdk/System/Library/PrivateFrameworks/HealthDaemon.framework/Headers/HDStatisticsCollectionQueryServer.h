//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDQuantitySeriesObserver-Protocol.h>

@class HDStatisticsCollectionCalculator, HDStatisticsCollectionCalculatorDefaultDataSource, HDStatisticsCollectionCalculatorDefaultSourceOrderProvider, HKQuantityType, NSDate, NSMutableDictionary, _HKDateIntervalCollection;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver>
{
    _HKDateIntervalCollection *_intervalCollection;
    HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider *_sourceOrderProvider;
    HDStatisticsCollectionCalculator *_calculator;
    NSMutableDictionary *_pendingQuantitiesBySeries;
    BOOL _addedSamplesRequireProtectedData;
    BOOL _requiresFetch;
    BOOL _hasScheduledUpdate;
    BOOL _deliversUpdates;
    NSUInteger _mergeStrategy;
    HKQuantityType *_quantityType;
    NSDate *_anchorDate;
    NSUInteger _statisticsOptions;
    id /* CDUnknownBlockType */ _unitTest_queryServerStatisticsEnumerationHandler;
    id /* CDUnknownBlockType */ _unitTest_queryServerUpdateStatisticsHandler;
    id /* CDUnknownBlockType */ _unitTest_queryServerUnableToUpdateStatisticsHandler;
}

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
@property(copy, nonatomic) id /* CDUnknownBlockType */ unitTest_queryServerUnableToUpdateStatisticsHandler; // @synthesize unitTest_queryServerUnableToUpdateStatisticsHandler=_unitTest_queryServerUnableToUpdateStatisticsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ unitTest_queryServerUpdateStatisticsHandler; // @synthesize unitTest_queryServerUpdateStatisticsHandler=_unitTest_queryServerUpdateStatisticsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ unitTest_queryServerStatisticsEnumerationHandler; // @synthesize unitTest_queryServerStatisticsEnumerationHandler=_unitTest_queryServerStatisticsEnumerationHandler;
@property(readonly, nonatomic) NSUInteger statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
@property(readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
// - (void).cxx_destruct;
- (BOOL)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatistics;
- (void)_queue_accumulateUpdatedStatistics:(id)arg1 accumulatedStatistics:(id)arg2 sendHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_queue_sendAccumulatedStatistics:(id)arg1 isFinal:(BOOL)arg2 statisticsCount:(long long )arg3 shouldResetStatistics:(BOOL )arg4;
- (void)_queue_updateStatistics;
- (id)_queue_filteredPendingSeriesWithError:(id )arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (id /* CDUnknownBlockType */)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(BOOL)arg2 count:(long long)arg3;
- (void)_queue_didReceiveQuantity:(id)arg1 type:(id)arg2 dateInterval:(id)arg3 series:(id)arg4 anchor:(id)arg5;
- (id)quantityType;
- (void)_queue_performUpdate;
- (void)_queue_scheduleUpdate;
- (BOOL)_shouldObserveDatabaseProtectedDataAvailability;
- (void)_queue_start;
- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
