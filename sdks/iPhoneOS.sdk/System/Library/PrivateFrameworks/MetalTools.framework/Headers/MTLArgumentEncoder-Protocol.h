//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol MTLArgumentEncoder, MTLBuffer, MTLComputePipelineState, MTLDevice, MTLIndirectCommandBuffer, MTLRenderPipelineState, MTLSamplerState, MTLTexture;

@protocol MTLArgumentEncoder <NSObject>
@property(readonly) NSUInteger alignment;
@property(readonly) NSUInteger encodedLength;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (id <MTLArgumentEncoder>)newArgumentEncoderForBufferAtIndex:(NSUInteger)arg1;
- (void)setIndirectCommandBuffers:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setIndirectCommandBuffer:(id <MTLIndirectCommandBuffer>)arg1 atIndex:(NSUInteger)arg2;
- (void)setComputePipelineStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setComputePipelineState:(id <MTLComputePipelineState>)arg1 atIndex:(NSUInteger)arg2;
- (void)setRenderPipelineStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1 atIndex:(NSUInteger)arg2;
- (void )constantDataAtIndex:(NSUInteger)arg1;
- (void)setSamplerStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setSamplerState:(id <MTLSamplerState>)arg1 atIndex:(NSUInteger)arg2;
- (void)setTextures:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setTexture:(id <MTLTexture>)arg1 atIndex:(NSUInteger)arg2;
- (void)setBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setArgumentBuffer:(id <MTLBuffer>)arg1 startOffset:(NSUInteger)arg2 arrayElement:(NSUInteger)arg3;
- (void)setArgumentBuffer:(id <MTLBuffer>)arg1 offset:(NSUInteger)arg2;
@end
