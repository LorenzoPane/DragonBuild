//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsConfiguration : NSObject
{
    SKUIContextActionsPresentationSource *_presentationSource;
    SKUIDialogTemplateViewElement *_dialogTemplate;
}

@property(retain, nonatomic) SKUIDialogTemplateViewElement *dialogTemplate; // @synthesize dialogTemplate=_dialogTemplate;
@property(retain, nonatomic) SKUIContextActionsPresentationSource *presentationSource; // @synthesize presentationSource=_presentationSource;
// - (void).cxx_destruct;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)contextActions;
- (id)initWithDialogTemplate:(id)arg1;

@end
