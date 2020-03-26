//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_1e94be47 v;
    GEOFeatureStyleAttributes *_sharedAttributes;
    CDStruct_d008d4b8 extAttrs;
    unsigned char countExtAttrs;
    unsigned char countAttrs;
    BOOL featureType;
}

+ (BOOL)supportsSecureCoding;
+ (id)styleAttributesForPlace:(id)arg1;
+ (id)inviteStyleAttributes;
+ (id)ticketedEventStyleAttributes;
+ (id)carRentalStyleAttributes;
+ (id)hotelStyleAttributes;
+ (id)evChargerStyleAttributes;
+ (id)gasStationStyleAttributes;
+ (id)frequentLocationStyleAttributes;
+ (id)calendarEventStyleAttributes;
+ (id)restaurantStyleAttributes;
+ (id)parkedCarStyleAttributes;
+ (id)transitStationStyleAttributes;
+ (id)workStyleAttributes;
+ (id)homeStyleAttributes;
+ (id)searchResultStyleAttributes;
+ (id)airportStyleAttributes;
+ (id)addressMarkerStyleAttributes;
// - (void).cxx_destruct;
- (void)sort;
- (id)description;
- (NSUInteger)hash;
- (int)poiType;
- (BOOL)hasAttributes;
- (BOOL)isSuperset:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)removeKey:(unsigned int)arg1;
- (void)replaceAttributes:(const CDStruct_1e94be47 )arg1 count:(unsigned int)arg2;
- (void)setExtAttributes:(const CDStruct_d008d4b8 )arg1 count:(unsigned int)arg2;
- (BOOL)featureType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const CDStruct_d008d4b8 )arg2 extAttributeCount:(unsigned char)arg3;
- (id)initWithGEOStyleAttributes:(id)arg1;
- (id)initWithStyleAttributes:(id)arg1;
- (id)initWithAttributes:(unsigned int)arg1;
- (id)init;
- (id)dictionaryRepresentation;
- (BOOL)isTransit;
- (BOOL)isSearchResult;
- (BOOL)isLandmarkPOI;
- (BOOL)isLabelPOI;
- (id)copyWithAirportStyleAttributes;
- (id)initWithPlaceDataStyleAttributes:(id)arg1;
- (unsigned int)lineType;
- (BOOL)shouldSuppress3DBuildingStrokes;
- (BOOL)isDrivable;
- (BOOL)isWalkable;
- (int)walkableSide;
- (int)sidewalkSide;
- (BOOL)isRoadPedestrianNavigable;
- (int)drivingSide;
- (BOOL)hasDrivingSide;
- (BOOL)isBorder;
- (BOOL)isRailway;
- (BOOL)isFreeway;
- (int)rampDirection;
- (int)rampType;
- (BOOL)isRamp;
- (BOOL)isBridge;
- (BOOL)isTunnel;
- (id)initWithPlaceStyleAttributes:(id)arg1;

@end
