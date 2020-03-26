//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/CSSearchableIndexDelegate-Protocol.h>

@class NSCache, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SGBloomFilter, SGDatabaseJournal, SGJournal, SGKeyValueCacheManager, SGSGtoCNContactsCacheUpdateAdapter, SGSpotlightContactsAdapter, SGSqliteDatabase, SGSuggestHistory;
@protocol OS_dispatch_queue;

@interface SGSqlEntityStore : NSObject <CSSearchableIndexDelegate>
{
    SGSqliteDatabase *_db;
    SGSqliteDatabase *_snippetDb;
    SGDatabaseJournal *_snippetsJournal;
    SGSuggestHistory *_history;
    _Atomic BOOL _identityStoreDirty;
    NSDictionary *_entityMigrations;
    NSDictionary *_snippetsMigrations;
    unsigned int _entityVersion;
    unsigned int _snippetsVersion;
    BOOL _entityMigrationRequiresMergeBlobUpdate;
    NSUInteger _lostMessageOverflow;
    NSMutableArray *_deallocNotifications;
    struct atomic_flag _isClosed;
    SGJournal *_journal;
    SGSpotlightContactsAdapter *_spotlightContactsAdapter;
    SGSGtoCNContactsCacheUpdateAdapter *_sgToCNContactsCacheUpdateAdapter;
    NSUInteger _parentMessagesLimit;
    NSSet *_serializedContactEntityIDs;
    NSUInteger _serializedContactsLimit;
    NSCache *_recentlyDeletedEmailKeys;
    _Atomic int _spotlightReindexCount;
    NSObject<OS_dispatch_queue> *_spotlightReindexQueue;
    NSSet *_prematchedContactIdentifiers;
    NSObject<OS_dispatch_queue> *_precomputationQueue;
    SGBloomFilter *_messageRecipients;
    id /* CDUnknownBlockType */ _crLookup;
    NSString *_snippetDbPath;
    id _lockStateNotificationRegistrationToken;
    BOOL _executeJournals;
    NSMutableSet *_phoneNumbersWithNoContact;
    NSMutableOrderedSet *_otherDetailsWithNoContact;
    BOOL _isEphemeral;
    BOOL _waitForMigrations;
    SGKeyValueCacheManager *_kvCacheManager;
}

+ (id)_fieldValuesClassWhitelist;
+ (id)queryForContactMatchForContact:(id)arg1 floorEntityID:(long long)arg2 max:(NSUInteger)arg3;
+ (id /* CDUnknownBlockType */)binderForCNContactMatch:(id)arg1 floorEntityID:(long long)arg2 max:(NSUInteger)arg3;
+ (id)_recreateCorruptDatabase:(id)arg1 withProtection:(BOOL)arg2;
+ (void)releaseInstanceAndWaitForDealloc:(id )arg1;
+ (void)addPathToFutureDbSchemas:(id)arg1;
+ (BOOL)pathHasFutureDbSchema:(id)arg1;
+ (id)initializeDatabase:(id)arg1 withProtection:(BOOL)arg2 newDatabaseCreated:(BOOL )arg3;
+ (id)sqlStoreWithEntityDbPathNoMigrate:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(BOOL)arg3 executeJournals:(BOOL)arg4;
+ (id)sqlStoreWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(BOOL)arg3 executeJournals:(BOOL)arg4;
+ (void)deletePreparedSqlStoreInMemory;
+ (void)prepareSqlStoreInMemoryByClearingExistingStore:(id)arg1;
+ (void)prepareSqlStoreInMemory;
+ (id)sqlStoreInMemory;
+ (id)defaultHarvestStore;
+ (id)defaultStore;
+ (id)storeWithDefaultLocationAndExecuteJournals:(BOOL)arg1;
+ (id)defaultSnippetPath;
+ (id)defaultPath;
+ (id)defaultPathCreatingSuggestionsDirectoryIfNeeded:(BOOL)arg1;
+ (void)setCachedVIPEmailAddresses:(id)arg1;
+ (id)_cachedVIPEmailAddresses;
+ (id)_cachedVIPEmailAddressesLock;
+ (BOOL)canStoreEventsForAccountType:(id)arg1;
+ (void)clearMigrationCompletedForPaths;
+ (id)cnContactIdentifiersForContact:(id)arg1;
+ (id)cnContactIdentifiersSpotlightQueryStringForContact:(id)arg1;
+ (id)journalNameForDbPath:(id)arg1;
@property(readonly) SGKeyValueCacheManager *kvCacheManager; // @synthesize kvCacheManager=_kvCacheManager;
@property(readonly) SGSGtoCNContactsCacheUpdateAdapter *sgToCNContactsCacheUpdateAdapter; // @synthesize sgToCNContactsCacheUpdateAdapter=_sgToCNContactsCacheUpdateAdapter;
@property(readonly) SGSpotlightContactsAdapter *spotlightContactsAdapter; // @synthesize spotlightContactsAdapter=_spotlightContactsAdapter;
@property(readonly, nonatomic) BOOL waitForMigrations; // @synthesize waitForMigrations=_waitForMigrations;
@property(readonly, nonatomic) BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
// - (void).cxx_destruct;
- (void)resolveFullDownloadRequests:(id)arg1;
- (id)loadFullDownloadRequestBatch:(NSUInteger)arg1;
- (id)journal;
- (id)duplicateKeysMatchingInteractionBundleId:(id)arg1 andTags:(id)arg2;
- (id)_hashWithDuplicateKeysMatchingTags:(id)arg1;
- (id)duplicateKeysMatchingAnyReminderHash:(id)arg1;
- (id)duplicateKeysMatchingAnyEventHash:(id)arg1;
- (id)duplicateKeysMatchingAnyTag:(id)arg1;
- (id)duplicateKeysMatchingEmailAddressPrefix:(id)arg1 limitTo:(NSUInteger)arg2;
- (BOOL)reminderAlarmTriggeredForStorageReminder:(id)arg1 error:(id )arg2;
- (BOOL)rejectStoredReminder:(id)arg1 error:(id )arg2;
- (BOOL)confirmStoredReminder:(id)arg1 error:(id )arg2;
- (BOOL)reminderAlarmTriggeredForRecordId:(id)arg1 error:(id )arg2;
- (BOOL)rejectReminderByRecordId:(id)arg1 error:(id )arg2;
- (BOOL)confirmReminderByRecordId:(id)arg1 error:(id )arg2;
- (BOOL)rejectStoredEvent:(id)arg1 error:(id )arg2;
- (BOOL)rejectContactDetailByRecordID:(id)arg1 error:(id )arg2;
- (BOOL)confirmContactDetailByRecordID:(id)arg1 error:(id )arg2;
- (BOOL)rejectContactByRecordID:(id)arg1 error:(id )arg2;
- (BOOL)confirmContactByRecordID:(id)arg1 error:(id )arg2;
- (BOOL)confirm:(BOOL)arg1 orRejectContactByRecordID:(id)arg2 error:(id )arg3;
- (BOOL)rejectEventByRecordId:(id)arg1 error:(id )arg2;
- (BOOL)confirmStoredEvent:(id)arg1 error:(id )arg2;
- (BOOL)confirmEventByRecordId:(id)arg1 error:(id )arg2;
- (BOOL)confirmRealtimeContact:(id)arg1 error:(id )arg2;
- (BOOL)rejectRealtimeContact:(id)arg1 error:(id )arg2;
- (BOOL)confirmRealtimeEvent:(id)arg1 error:(id )arg2;
- (BOOL)rejectRealtimeEvent:(id)arg1 error:(id )arg2;
- (id)confirmedFieldValuesForEvent:(id)arg1;
- (id)confirmedFieldValuesForEntity:(id)arg1;
- (id)rejectFieldValuesForRecordId:(id)arg1;
- (void)confirmFieldValues:(id)arg1 forEntity:(id)arg2;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 limitTo:(NSUInteger)arg3 additionalWhereClause:(id)arg4 options:(unsigned int)arg5 onPrep:(id /* CDUnknownBlockType */)arg6;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 prefix:(id)arg3 limitTo:(NSUInteger)arg4;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 limitTo:(NSUInteger)arg3;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 prefix:(id)arg3 limitTo:(NSUInteger)arg4 options:(unsigned int)arg5;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 limitTo:(NSUInteger)arg3 options:(unsigned int)arg4;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)arg1;
- (id)_filterOutCancelledEvents:(id)arg1;
- (BOOL)eventIsCancelled:(id)arg1;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)arg1;
- (id)eventFromSqlResult:(struct sqlite3_stmt )arg1;
- (id)contactIdsMergedWithMasterEntityId:(id)arg1;
- (id)suggestContactMatchesByContactDetailTag:(id)arg1;
- (id)suggestContactByRecordId:(id)arg1;
- (id)storageContactByRecordId:(id)arg1;
- (id)suggestContactByIdentityKey:(id)arg1 parentKey:(id)arg2;
- (id)suggestContactByKey:(id)arg1;
- (id)storageContactByKey:(id)arg1;
- (id)suggestContactMatchesByEmailAddress:(id)arg1;
- (id)suggestContactMatchesByEmailAddress:(id)arg1 isMaybe:(BOOL)arg2 onlySignificant:(BOOL)arg3;
- (id)suggestContactMatchesByPhoneNumber:(id)arg1;
- (id)suggestContactMatchesByPhoneNumber:(id)arg1 isMaybe:(BOOL)arg2 onlySignificant:(BOOL)arg3;
- (id)allContactsMasterEntityIdsLimitedTo:(NSUInteger)arg1;
- (id)allContactsLimitedTo:(NSUInteger)arg1;
- (id)_queryForAllContactsWithLimit;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(NSUInteger)arg2;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(NSUInteger)arg2;
- (id)_matchinfoForFTSMatchWhere:(id)arg1 bindings:(id /* CDUnknownBlockType */)arg2;
- (id)suggestContactMatchesWithContact:(id)arg1 limitTo:(NSUInteger)arg2;
- (id)_rankSGContacts:(id)arg1 bySimilarityToContact:(id)arg2;
- (double)_scoreSGContact:(id)arg1 bySimilarityToContact:(id)arg2 cnContactFullname:(id)arg3;
- (id)_buildUnknownMatchContactMatchForSGContact:(id)arg1;
- (void)filterOutRejectedDetailsFromContact:(id)arg1;
- (id)suggestContactsWithContact:(id)arg1 limitTo:(NSUInteger)arg2;
- (id)suggestContactsWithPrefix:(id)arg1 limitTo:(NSUInteger)arg2;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 limit:(NSUInteger)arg2 bindings:(id /* CDUnknownBlockType */)arg3;
- (id)_contactsForMasterEntityIds:(id)arg1;
- (id)masterEntityIDsForMasterEntityQuery:(id)arg1 bindings:(id /* CDUnknownBlockType */)arg2;
- (id)storageContactByMasterEntityId:(long long)arg1;
- (BOOL)contactIsDisplayable:(id)arg1;
- (id)parentKeysForDuplicateKey:(id)arg1;
- (id)mostRecentParentKeyForDuplicateKey:(id)arg1;
- (id)nextPendingGeocode;
- (void)clearNoContactsCache;
- (BOOL)_isStringInNoContactsCache:(id)arg1;
- (BOOL)_isPhoneNumberInNoContactsCache:(id)arg1;
- (void)_addPhoneNumberToNoDetailsCache:(id)arg1;
- (void)removePhoneNumberFromNoDetailsCache:(id)arg1;
- (void)_addStringToNoContactsCache:(id)arg1;
- (void)removeStringFromNoContactsCache:(id)arg1;
- (void)_addPhoneNumberIntegerToNoContactsCache:(NSUInteger)arg1;
- (void)_removePhoneNumberIntegerFromNoContactsCache:(NSUInteger)arg1;
- (NSUInteger)_unsignedIntegerFromPhoneIfPossible:(id)arg1;
- (void)clearCaches;
- (void)clearMasterEntityCache;
- (void)_removeCorruptionMarker;
- (BOOL)corruptionMarkerPresent;
- (void)addDeallocNotification:(id /* CDUnknownBlockType */)arg1;
- (void)closeDatabases;
- (void)dealloc;
- (id)initWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(BOOL)arg3 executeJournals:(BOOL)arg4 noMigrate:(BOOL)arg5;
- (id)initForDbStatsOnlyWithError:(id )arg1;
- (id)initForRawDatabaseAccessWithEntityPath:(id)arg1 snippetsPath:(id)arg2 error:(id )arg3;
- (void)_postChangeNotification;
- (BOOL)deleteURLsFromBundleIdentifier:(id)arg1 documentIdentifiers:(id)arg2;
- (BOOL)deleteURLsFromBundleIdentifier:(id)arg1 groupIdentifierGlobs:(id)arg2;
- (BOOL)deleteURLsFromBundleIdentifier:(id)arg1;
- (BOOL)deleteURLsOlderThanDate:(id)arg1;
- (BOOL)trimURLTableDownToLimit:(long long)arg1;
- (BOOL)trimURLs;
- (BOOL)writeURL:(id)arg1;
- (struct _PASDBIterAction_)_updateURLs:(id)arg1 stmt:(struct sqlite3_stmt )arg2;
- (id)_columnList;
- (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(long long)arg4;
- (id)recentURLsWithLimit:(long long)arg1;
- (void)logConfirmPercentAfterContactDetailRejection;
- (void)logConfirmPercentAfterContactDetailConfirmation;
- (void)logConfirmPercentAfterContactRejection;
- (void)logConfirmPercentAfterContactConfirmation;
- (void)_logConfirmPercentWithConfirmCount:(double)arg1 rejectCount:(double)arg2 domain:(id)arg3 suffix:(id)arg4;
- (double)incStatsCounterWithKey:(id)arg1;
- (double)incStatsCounterWithKey:(id)arg1 byValue:(double)arg2;
- (id)loadStatsCounterWithKey:(id)arg1;
- (void)storeStatsCounterWithKey:(id)arg1 value:(double)arg2;
- (void)analyzeMergeBlobs:(id)arg1;
- (BOOL)_analyzeMergeBlobsIncremental:(id)arg1;
- (BOOL)_isBlobAnalysisQueueEmpty;
- (id)_popMergeBlobForAnalysis;
- (void)_writeMergeBlobSnapshotForAnalysis:(id)arg1;
- (id)makeInterdictsForBlob:(id)arg1 withContactStore:(id)arg2;
- (id)_uniqueGoodDetailMatchFrom:(id)arg1 toDetails:(id)arg2 nonUnique:(BOOL )arg3;
- (id)unmergedCandidatesLimitedTo:(int)arg1;
- (id)splitBlob:(id)arg1 withInterdicts:(id)arg2 edges:(id)arg3 curatedRecordIds:(id)arg4;
- (id)_makeBlobsFromConnectedComponents:(id)arg1 edges:(id)arg2;
- (id)computeBlobs;
- (id)_computeBlobsRaw:(id )arg1;
- (void)_linkNamelessPhonesIfAppropriate:(struct graph_t )arg1 nameToVertex:(id)arg2 disjointSets:(struct DisjointSetHandle )arg3 edges:(id)arg4;
- (void)_linkNamelessEmailsIfAppropriate:(struct graph_t )arg1 nameToVertex:(id)arg2 disjointSets:(struct DisjointSetHandle )arg3 edges:(id)arg4;
- (id)curatedRecordIds;
- (id)getAllLinks;
- (void)deleteByRecordId:(id)arg1;
- (void)link:(id)arg1 to:(id)arg2 type:(unsigned int)arg3 strength:(double)arg4;
- (void)_joinIncompleteIdentityPhonesWithOthersOfTheirIlk:(id)arg1 name:(id)arg2 recordId:(id)arg3;
- (void)_joinIncompleteIdentityEmailWithOthersOfItsIlk:(id)arg1 name:(id)arg2 recordId:(id)arg3;
- (BOOL)registerAndLinkIdentity:(id)arg1 recordId:(id)arg2 phones:(id)arg3 instantMessageAddresses:(id)arg4 email:(id)arg5 curated:(BOOL)arg6 isSent:(BOOL)arg7;
- (BOOL)registerAndLinkIdentity:(id)arg1 recordId:(id)arg2 phones:(id)arg3 instantMessageAddresses:(id)arg4 email:(id)arg5 curated:(BOOL)arg6;
- (BOOL)rebuildIdentityTables;
- (BOOL)processEntity:(id)arg1 recordId:(id)arg2;
- (BOOL)processPseudoContactEntity:(id)arg1 recordId:(id)arg2;
- (id)splitNeededFor:(id)arg1 withInterdicts:(id)arg2 curatedRecordIds:(id)arg3;
- (id)loadInterdicts;
- (void)addInterdictFrom:(id)arg1 with:(id)arg2;
- (void)forceBlobSync;
- (BOOL)syncNewBlobsIfChanged;
- (id)getNewBlobsIfChanged;
- (id)batch:(id /* CDUnknownBlockType */)arg1;
- (void)_markIdentityStoreClean;
- (void)_markIdentityStoreDirty;
- (BOOL)_isIdentityStoreDirty;
- (id)reimportRequestDBStats;
- (void)_deleteOrphanedItems;
- (void)deleteCompletedReimportRequests;
- (void)deleteAllReimportRequestsOlderThanDate:(id)arg1;
- (BOOL)reimportRequestsContainBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)loadUnseenReimportItemsForRequest:(NSUInteger)arg1;
- (id)_loadReimportRequestsWithWhereClause:(id)arg1;
- (id)loadAllReimportRequests;
- (id)loadUnexecutedReimportRequests;
- (id)loadUnqueriedReimportRequests;
- (void)updateReimportItemUniqueIdForBundleId:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)markReimportItemAsSeenByReceiverWithBundleId:(id)arg1 uniqueId:(id)arg2;
- (void)markReimportItemsAsSeenByReceiverWithBundleId:(id)arg1 items:(id)arg2;
- (void)markReimportRequestAsExecutedWithRequestId:(NSUInteger)arg1;
- (void)storeReimportItems:(id)arg1 requestId:(NSUInteger)arg2;
- (NSUInteger)storeReimportRequest:(id)arg1;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1;
- (void)deleteItemsWithEntityTag:(id)arg1 preserveEventConfirmationHistory:(BOOL)arg2;
- (void)deleteItemsWithEntityTag:(id)arg1;
- (void)deleteInteractionEntitiesExceedingLimit:(id)arg1 withSuspensionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)deleteInteractionEntitiesOnBlacklist:(id)arg1;
- (void)deleteMessagesByDuplicateKey:(id)arg1;
- (void)deleteEntitiesByDuplicateKey:(id)arg1 preserveEventConfirmationHistory:(BOOL)arg2 emitChangeNotifications:(BOOL)arg3;
- (void)deleteEntitiesByDuplicateKey:(id)arg1 emitChangeNotifications:(BOOL)arg2;
- (id)_deleteMessageMetadataByDuplicateKeyNoRecurse:(id)arg1;
- (id)_deleteEntitiesByDuplicateKeyNoRecurse:(id)arg1;
- (id)_derefChildrenOf:(id)arg1;
- (id)_deleteChildEntitiesByRecordIdsInTable:(id)arg1;
- (void)_recordPseudoContactsWithDeletedDetailsInTable:(id)arg1 deletedChildrenTable:(id)arg2;
- (id)childrenFromParentKey:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)pruneNLEventEntitiesOlderThan:(struct SGUnixTimestamp_)arg1;
- (void)pruneReminders;
- (void)pruneNLEventEntitiesOlderThanTwoWeeks;
- (void)pruneDuplicateWebPageExtractions:(id)arg1;
- (void)pruneEntitiesOlderThan:(struct SGUnixTimestamp_)arg1 suspensionHandler:(id /* CDUnknownBlockType */)arg2 batchSize:(NSUInteger)arg3;
- (void)pruneEntitiesOlderThanOneYearWithSuspensionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)pruneEntitiesOlderThan:(struct SGUnixTimestamp_)arg1 suspensionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_removeSnippetsForEmails:(id)arg1;
- (void)removeSnippetsForEntities:(id)arg1;
- (float)_scoreContactDetail:(id)arg1;
- (id)columnQueryPrefixSelect;
- (void)selectAuthoritativeDetailsForContactWithId:(long long)arg1;
- (void)deleteWithSqlJoining:(id)arg1 where:(id)arg2 onPrep:(id /* CDUnknownBlockType */)arg3;
- (BOOL)clearDatabases;
- (void)vacuum;
- (void)clearAllTables;
- (void)analyzeDatabase;
- (id)dbStats;
- (id)selectEntityQuery:(id)arg1;
- (NSUInteger)entityCount;
- (id)allPseudoContacts;
- (id)allContactsWithEntityType:(NSUInteger)arg1;
- (id)entityFromSqlResult:(struct sqlite3_stmt )arg1;
- (BOOL)databasecheck_contactMergeGroupConsistency;
- (BOOL)databasecheck_BrokenEntityIDReferences;
- (BOOL)databasecheck_IntegrityCheck;
- (BOOL)performIntegrityCheckOnly;
- (BOOL)performDatabaseCheck;
- (void)_reportDbStatsBackground;
- (void)reportDbStats;
- (void)registerCachePrecomputationWithCTS;
- (BOOL)senderIsSignificantForMessage:(id)arg1;
- (void)registerSentTextMessage:(id)arg1;
- (BOOL)mayHaveSentMessageToHandle:(id)arg1;
- (id)normalizeHandleForRecipientFilterAndRemoveFromDetailsCache:(id)arg1;
- (void)registerSentMailMessage:(id)arg1;
- (BOOL)mayHaveSentMessageToEmail:(id)arg1;
- (BOOL)recentsContainSomeOfEmails:(id)arg1 phoneNumbers:(id)arg2 instantMessageAddresses:(id)arg3;
- (void)setCRLookupForTesting:(id /* CDUnknownBlockType */)arg1;
- (BOOL)anyHandleIsSignificant:(id)arg1;
- (BOOL)anyEmailAddressIsSignificant:(id)arg1;
- (BOOL)realtimeContactIsSignificantOrSignificanceIsDisabled:(id)arg1;
- (BOOL)realtimeContactIsSignificant:(id)arg1;
- (BOOL)contactIsSignificantOrSignificanceIsDisabled:(id)arg1 usingCoreRecents:(BOOL)arg2;
- (BOOL)contactIsSignificantOrSignificanceIsDisabled:(id)arg1;
- (BOOL)contactIsSignificant:(id)arg1 usingCoreRecents:(BOOL)arg2;
- (BOOL)contactIsSignificant:(id)arg1;
- (void)writeIdentityBlobs:(id)arg1 forceRewrite:(BOOL)arg2;
- (void)_writeLabeledBlobs:(id)arg1 isDelete:(BOOL)arg2;
- (id)_labelIdentityBlobs:(id)arg1;
- (id)_loadIdentityBlobs;
- (void)_writeFTSTermsForEntity:(id)arg1 entityId:(long long)arg2;
- (void)_writeContactEntityToJournal:(id)arg1;
- (void)_writeEventEntityToJournal:(id)arg1;
- (void)_writeReminderEntitiesToJournal:(id)arg1;
- (void)_writeEventEntitiesToJournal:(id)arg1;
- (id)_journalEntryFromReminderEntity:(id)arg1;
- (id)_journalEntryFromEntity:(id)arg1;
- (void)_writeEntityParentageFor:(id)arg1 entityId:(long long)arg2;
- (long long)_writeGenericExtractionEntityToDb:(id)arg1;
- (long long)_writeMessageEntityToDb:(id)arg1;
- (long long)_writeOneEntityToDb:(id)arg1;
- (void)markEntityAsDupeByRecordId:(id)arg1;
- (void)writeEntityGeocodeResultToDb:(id)arg1;
- (void)_addLocations:(id)arg1 toEntityWriteDictionary:(id)arg2;
- (void)_addTimeRange:(id)arg1 toEntityWriteDictionary:(id)arg2;
- (void)_writeEntityToSnippetsDb:(id)arg1;
- (void)_writeMessageEntityToSnippetsDb:(id)arg1;
- (BOOL)entityWantsFullDownload:(id)arg1;
- (id)_computePseudoContactContentHash:(id)arg1 contactDetails:(id)arg2;
- (void)_dumpTable:(id)arg1 columns:(id)arg2 limitTo:(int)arg3;
- (void)_addIndexingTagsTo:(id)arg1;
- (void)_prunePseudoContactGeneratingEmails:(id)arg1;
- (void)_hashAttachedPseudoContacts:(id)arg1;
- (void)_emitChangeNotifications:(id)arg1;
- (long long)writeEntity:(id)arg1 withSpotlightReferenceForBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (long long)writeEntity:(id)arg1;
- (struct SGUnixTimestamp_)lastSeenTimestampForKey:(id)arg1;
- (void)setParentMessagesLimitForTesting:(NSUInteger)arg1;
- (id)historyForTesting;
- (id)snippetsDbHandleForTesting;
- (id)dbHandleForTesting;
- (void)setLostMessageOverflow:(NSUInteger)arg1;
- (void)updateSerializedContacts:(id)arg1;
- (BOOL)_processBatchOfSerializedContactJobs;
- (long long)_popQueuedSerializedContactId;
- (void)_trimSerializedContacts;
- (id)serializedEntityIds;
- (id)loadAllSerializedContacts;
- (id)loadSerializedContactForId:(long long)arg1;
- (void)deleteSerializedContactsForIdSet:(id)arg1;
- (void)deleteSerializedContactForId:(long long)arg1;
- (void)writeSerializedContactAndUpdateEntityIDSet:(id)arg1;
- (void)writeSerializedContactPlaceholder:(long long)arg1;
- (void)writeSerializedContact:(id)arg1;
- (NSUInteger)serializedContactsLimit;
- (void)setSerializedContactsLimit:(NSUInteger)arg1;
- (id)loadEventsWithInteractionIdentifiers:(id)arg1 fromBundleIdentifier:(id)arg2;
- (id)loadReminderByRecordId:(id)arg1;
- (id)loadReminderByKey:(id)arg1;
- (id)allRemindersLimitedTo:(NSUInteger)arg1;
- (id)loadCuratedEventsStartingAt:(double)arg1;
- (id)loadAllContactDetailsWithWhereClause:(id)arg1 onPrep:(id /* CDUnknownBlockType */)arg2 dedupeAgainst:(id)arg3;
- (id)loadAllContactDetailsForRecordId:(id)arg1;
- (id)loadContactDetailsWithWhereClause:(id)arg1 onPrep:(id /* CDUnknownBlockType */)arg2 type:(NSUInteger)arg3 dedupeAgainst:(id)arg4;
- (id)loadEventByKey:(id)arg1;
- (id)loadContactDetailsForRecordId:(id)arg1 type:(NSUInteger)arg2;
- (id)loadStorageContactByRecordId:(id)arg1;
- (id)loadStorageContactByRecordId:(id)arg1 error:(id )arg2;
- (id)loadContactForStorageContact:(id)arg1 usingSerializedContactCache:(BOOL)arg2;
- (id)loadEventByRecordId:(id)arg1;
- (id)loadEntitiesByEntityKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(id /* CDUnknownBlockType */)arg3;
- (id)loadEntityByKey:(id)arg1;
- (id)_loadMessageByKey:(id)arg1;
- (id)loadOriginByRecordId:(id)arg1;
- (id)allEntitiesOfType:(long long)arg1 limitedTo:(NSUInteger)arg2 onlyMLExtractions:(BOOL)arg3;
- (id)allEntitiesOfType:(long long)arg1 limitedTo:(NSUInteger)arg2;
- (id)loadEntityByRecordId:(id)arg1;
- (void)refreshSuggestionsContact:(id)arg1;
- (void)_deltaSyncContactsWithChangeHistory:(id)arg1;
- (void)_fullSyncContactsInBatches:(id)arg1;
- (void)syncContactsWithStore:(id)arg1;
- (void)setHasFullSync;
- (BOOL)needsFullSync;
- (void)_fullSyncContactsWithStore:(id)arg1;
- (void)clearChangeHistory:(id)arg1;
- (void)updateCNContactMatches:(id)arg1;
- (void)_enqueueBatchOfCNContactIds:(id)arg1;
- (id)_popBatchOfCNContactIds;
- (id)_pendingCNContactIdsJobCache;
- (id)cnContactMatchesForRecordId:(id)arg1 found:(BOOL )arg2;
- (id)loadAllPrecomputedContactMatches;
- (id)prematchedContactIdentifiers;
- (void)deleteAllCNContactMatchesForEntityID:(long long)arg1;
- (void)deleteAllCNContactMatchesForIdSet:(id)arg1;
- (void)deleteAllCNContactMatches;
- (void)deleteCNContactMatchForContactId:(id)arg1;
- (id)loadCNContactMatchesForContact:(id)arg1 andGetMaxEntityId:(long long )arg2;
- (void)writeCNContactMatchAndUpdateSetForContact:(id)arg1 withMatches:(id)arg2 andMaxEntityID:(long long)arg3;
- (void)writeCNContactMatchForContact:(id)arg1 withMatches:(id)arg2 andMaxEntityID:(long long)arg3;
- (void)writeCNContactMissForRecordId:(id)arg1;
- (long long)getMaxEntityId;
- (void)stopJournaling;
- (void)startJournaling;
- (void)registerJournalUnlockHandler;
- (void)tryExecuteSnippetsJournal;
- (long long)migration_deleteSerializedContacts;
- (long long)migration_deleteInternalExtractionsFromML;
- (long long)migration_deleteEmergencyExtractions;
- (long long)migration_reimport;
- (long long)migration_deleteInteractions;
- (long long)migration_rebuildFTSWithDetailEntityIDDocIDs;
- (long long)migration_separateMessageSnippets;
- (long long)migration_separateMessageEntities;
- (long long)migration_FixupMergeGroups;
- (long long)migration_RemoveEntityReferencesWithoutBundleIdentifier;
- (long long)migration_DropMessagingTermsWithPhoneExtensions;
- (long long)migration_ConvertContentAndDupKeyHashesToBlobs;
- (long long)migration_DeduplicateIdentityPhones;
- (long long)migration_CreateFTSTableWithITS;
- (long long)migration_RecreateFTSTableWithITS;
- (long long)migration_RebuildIdentityTables;
- (long long)migration_FixUpColumnsForDevicesWhoMissedTheImprovedLegacyMigration;
- (long long)migration_AddNewishTablesIfMissing;
- (long long)migration_AddAuthorColumnIfMissing;
- (long long)migration_MoveContentToSnippets;
- (long long)migrate;
- (long long)skipFromZeroSchema;
- (long long)migrateToVersion:(NSUInteger)arg1;
- (long long)fixupVersionMismatch;
- (void)updateLanguageForFTSTablesToLanguage:(id)arg1;
- (BOOL)_prepareToCopyFrom:(id)arg1 toNewTableNamed:(id)arg2;
- (BOOL)_renameTable:(id)arg1 to:(id)arg2;
- (void)_slowCopyFromTable:(id)arg1 toTable:(id)arg2 startingAtEntityId:(NSUInteger)arg3;
- (BOOL)_createEntityFTSTableWithName:(id)arg1;
- (id)languageToUpdateEntityFTSTo;
- (long long)runQueries:(id)arg1 forVersion:(unsigned int)arg2 inTransactionOnDb:(id)arg3;
- (long long)runQuery:(id)arg1 onDb:(id)arg2;
- (BOOL)migrationNeeded;
- (NSUInteger)maxKnownDbVersion;
- (long long)configureMigratorThenMigrateToVersion:(NSUInteger)arg1;
- (long long)clearDatabase:(id)arg1;
- (long long)unmigrateDatabases;
- (id)selectMigrationQueue;
- (long long)migrateDatabases;
- (void)prepMigrator;
- (id)initForMigratorTestWithEntityDb:(id)arg1 snippetDb:(id)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* CDUnknownBlockType */)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_shouldContinueReindex:(int)arg1;
- (void)reindexSearchableItemsWithMinimumEntityId:(NSUInteger)arg1 searchableIndex:(id)arg2 acknowledgementHandler:(id /* CDUnknownBlockType */)arg3 reindexCount:(int)arg4;
- (NSUInteger)_minEntityIdFromMinEntityId:(NSUInteger)arg1 withContactIdentifiers:(id)arg2;
- (id)contactsWithIdentifiers:(id)arg1;
- (id)batchOf:(NSUInteger)arg1 contactsStartingAtEntityId:(NSUInteger)arg2;
- (BOOL)tombstoneExistsForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3;
- (void)clearAllTombstonesForSpotlightReferences;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 domainIdentifier:(id)arg2;
- (BOOL)_tombstoneExistsForBundleIdentifier:(id)arg1;
- (id)_selectingDomainsForDomainIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithNoBundleIdentifier;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)markLostSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)_recordIdsFromRemovingSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (BOOL)isRecentlyDeleted:(id)arg1;
- (void)_deleteIfNoSpotlightReferences:(id)arg1 addToRecentlyDeletedCache:(BOOL)arg2;
- (void)_markRecordsLostIfNoSpotlightReferences:(id)arg1;
- (id)_duplicateKeysWithZeroSpotlightReferencesFromRecordIds:(id)arg1;
- (BOOL)addSpotlightReferenceToEmailIfFullyDownloaded:(id)arg1 withBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (id)recordIdForKey:(id)arg1;
- (id)duplicateKeysFromRecordIds:(id)arg1;
- (id)duplicateKeysFromMailMessageKeys:(id)arg1;
- (void)addSpotlightReferenceToEmailRecordId:(id)arg1 withBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (BOOL)hasSpotlightReferenceForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)domainIdentifierForSpotlightReferenceForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)displayableEntities:(id)arg1;
- (id)filterOutUndisplayableEntities:(id)arg1;
- (void)markMessagesFound:(id)arg1;
- (void)pruneLostMessagesWithSource:(id)arg1 count:(NSUInteger)arg2;
- (void)markMessagesLost:(id)arg1;
- (void)markMessagesUndisplayablyLost:(id)arg1;
- (void)updateMessages:(id)arg1 state:(NSUInteger)arg2;
- (id)loadMessagesToRefresh;

@end
