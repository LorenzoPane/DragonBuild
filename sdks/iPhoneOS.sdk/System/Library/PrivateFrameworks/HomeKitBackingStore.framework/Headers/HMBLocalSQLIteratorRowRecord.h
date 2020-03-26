//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

__attribute__((visibility("hidden")))
@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator
{
    int _zoneRowBindOffset;
    NSUInteger _returning;
    NSUInteger _zoneRow;
}

@property(readonly, nonatomic) int zoneRowBindOffset; // @synthesize zoneRowBindOffset=_zoneRowBindOffset;
@property(readonly, nonatomic) NSUInteger zoneRow; // @synthesize zoneRow=_zoneRow;
@property(readonly, nonatomic) NSUInteger returning; // @synthesize returning=_returning;
- (id)fetchRowFromStatement:(struct sqlite3_stmt )arg1 skip:(BOOL )arg2 updatedSequence:(NSUInteger )arg3 error:(id )arg4;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt )arg1 error:(id )arg2;
- (id)initWithSQLContext:(id)arg1 zoneRow:(NSUInteger)arg2 returning:(NSUInteger)arg3;

@end
