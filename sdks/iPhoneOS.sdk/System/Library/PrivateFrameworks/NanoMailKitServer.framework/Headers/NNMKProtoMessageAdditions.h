//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageAdditions : PBCodable <NSCopying>
{
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    NSMutableArray *_messageAdditions;
    BOOL _messagesAreNew;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mailboxSyncVersion:1;
        unsigned int messagesAreNew:1;
    } _has;
}

+ (Class)messageAdditionType;
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) BOOL messagesAreNew; // @synthesize messagesAreNew=_messagesAreNew;
@property(retain, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property(retain, nonatomic) NSMutableArray *messageAdditions; // @synthesize messageAdditions=_messageAdditions;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMailboxSyncVersion;
@property(readonly, nonatomic) BOOL hasMailboxId;
@property(nonatomic) BOOL hasMessagesAreNew;
@property(readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
- (id)messageAdditionAtIndex:(NSUInteger)arg1;
- (NSUInteger)messageAdditionsCount;
- (void)addMessageAddition:(id)arg1;
- (void)clearMessageAdditions;
@property(readonly, nonatomic) BOOL hasDateSynced;
@property(nonatomic) BOOL hasFullSyncVersion;

@end
