//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TXRAssetCatalogSet : NSObject
{
    NSUInteger _interpretation;
    NSUInteger _origin;
    NSString *_name;
    BOOL _cubemap;
    NSMutableArray *_configs;
}

@property(readonly, nonatomic) BOOL cubemap; // @synthesize cubemap=_cubemap;
@property(readonly) NSArray *configs; // @synthesize configs=_configs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) NSUInteger origin; // @synthesize origin=_origin;
@property(nonatomic) NSUInteger interpretation; // @synthesize interpretation=_interpretation;
// - (void).cxx_destruct;
- (BOOL)addConfig:(id)arg1 error:(id )arg2;
- (id)exportAtLocation:(id)arg1 error:(id )arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end
