//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSMutableArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement
{
    NSMutableArray *_collectionElements;
    SKUIViewElement *_collectionHeaderViewElement;
    BOOL _needsStateReset;
}

@property(readonly, nonatomic) BOOL needsStateReset; // @synthesize needsStateReset=_needsStateReset;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfSplits;
@property(readonly, nonatomic) SKUIToolbarViewElement *toolbarElement;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property(readonly, nonatomic) SKUIIndexBarViewElement *indexBarViewElement;
@property(readonly, nonatomic) SKUIViewElement *collectionHeaderViewElement;
@property(readonly, nonatomic) NSArray *collectionElements;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
