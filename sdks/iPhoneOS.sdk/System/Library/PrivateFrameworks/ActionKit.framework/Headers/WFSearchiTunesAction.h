//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@interface WFSearchiTunesAction : WFAction <WFDynamicEnumerationDataSource>
{
}

- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)mediaType;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)updateParameterVisibility;
- (void)initializeParameters;

@end
