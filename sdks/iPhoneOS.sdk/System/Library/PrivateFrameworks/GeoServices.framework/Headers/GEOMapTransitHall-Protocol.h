//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapTransitPoint-Protocol.h>

@class GEOMapRequest;

@protocol GEOMapTransitHall <GEOMapTransitPoint>
@property(readonly, nonatomic) NSUInteger stationID;
- (GEOMapRequest *)findStops:(void (^)(id <GEOMapTransitStop>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findStation:(void (^)(id <GEOMapTransitStation>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
@end
