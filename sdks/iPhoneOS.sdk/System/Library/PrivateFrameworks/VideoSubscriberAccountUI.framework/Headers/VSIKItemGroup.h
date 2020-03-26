//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKDOMFeature-Protocol.h>
#import <VideoSubscriberAccountUI/VSJSItemGroupBridge-Protocol.h>

@class IKAppContext, NSString;
@protocol VSIKItemGroupDelegate;

__attribute__((visibility("hidden")))
@interface VSIKItemGroup : NSObject <VSJSItemGroupBridge, IKDOMFeature>
{
    IKAppContext *_appContext;
    NSString *_featureName;
    long long _jsSelectedItem;
    id <VSIKItemGroupDelegate> _delegate;
    long long _selectedItemIndex;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
+ (void)registerFeature;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(nonatomic) __weak id <VSIKItemGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=setJSSelectedItem:) long long jsSelectedItem; // @synthesize jsSelectedItem=_jsSelectedItem;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
// - (void).cxx_destruct;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end
