//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLRegionsClusteringItem;

@interface PLRegionsHierarchicalClusteringObject : NSObject
{
    id <PLRegionsClusteringItem> _object;
    NSUInteger _index;
}

+ (id)clusterObjectWithObject:(id)arg1 index:(NSUInteger)arg2;
@property NSUInteger index; // @synthesize index=_index;
@property(readonly, nonatomic) id <PLRegionsClusteringItem> object; // @synthesize object=_object;
// - (void).cxx_destruct;

@end
