//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

#import <LinkPresentation/LPMetadataProviderSpecializationDelegate-Protocol.h>

@class LPFileMetadata, LPImage, LPLinkMetadata, NSObject, NSString, NSURL;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization <LPMetadataProviderSpecializationDelegate>
{
    BOOL _cancelled;
    NSURL *_temporaryFileURL;
    LPImage *_originalImage;
    LPImage *_quickLookThumbnail;
    NSString *_MIMEType;
    LPLinkMetadata *_metadata;
    LPFileMetadata *_fileMetadata;
    NSObject<OS_dispatch_group> *_fetchGroup;
}

+ (id)_thumbnailQueue;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (NSUInteger)specialization;
// - (void).cxx_destruct;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)complete;
- (void)updatePreliminaryMetadata;
- (void)cancel;
- (void)cleanUpTemporaryFile;
- (void)fetchMetadataFromURL:(id)arg1;
- (void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg1;
- (void)start;

@end
