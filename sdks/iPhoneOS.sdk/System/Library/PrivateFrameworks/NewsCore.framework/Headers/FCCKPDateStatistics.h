//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class FCCKPDate;

@interface FCCKPDateStatistics : PBCodable <NSCopying>
{
    FCCKPDate *_creation;
    FCCKPDate *_modification;
}

@property(retain, nonatomic) FCCKPDate *modification; // @synthesize modification=_modification;
@property(retain, nonatomic) FCCKPDate *creation; // @synthesize creation=_creation;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasModification;
@property(readonly, nonatomic) BOOL hasCreation;
- (void)dealloc;

@end
