//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject
{
    NSArray *_defaultEnvironmentInfos;
    NSArray *_environmentInfos;
    NSArray *_customEnvironmentInfos;
    BOOL _enableCustomEnvironments;
    id <GEOEnvironmentsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GEOEnvironmentsControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)activeEnvironment;
- (void)removeCustomEnvironment:(id)arg1;
- (void)addCustomEnvironment:(id)arg1;
- (id)environmentInfosForSection:(long long)arg1;
- (void)reloadEnvironments:(id /* CDUnknownBlockType */)arg1;
- (void)reloadEnvironments;
- (void)dealloc;
- (id)initEnablingCustomEnvironments:(BOOL)arg1;

@end
