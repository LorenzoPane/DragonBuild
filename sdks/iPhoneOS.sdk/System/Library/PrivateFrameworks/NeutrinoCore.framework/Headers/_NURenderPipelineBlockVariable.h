//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderPipelineFunction.h>

@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction
{
    id /* CDUnknownBlockType */ _evaluationBlock;
}

// - (void).cxx_destruct;
- (BOOL)isEqualToBlockVariable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)evaluate:(id)arg1 error:(out id )arg2;
- (id)description;
- (id)initWithEvaluationBlock:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
