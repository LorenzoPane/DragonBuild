//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AKRoundedPath : NSObject
{
    CGPath _CGPath;
    NSMutableArray *_points;
}

+ (id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2;
+ (id)pathWithEllipseInRect:(CGRect)arg1;
+ (id)pathWithRect:(CGRect)arg1;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain) CGPath CGPath; // @synthesize CGPath=_CGPath;
// - (void).cxx_destruct;
- (void)addContinuousCornerToPath:(CGPath )arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(NSUInteger)arg4 portion:(NSUInteger)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7;
- (id)initWithRect:(CGRect)arg1 cornerRadii:(id)arg2 smoothPillShapes:(BOOL)arg3;
- (CGRect)boundingRect;
- (void)closeSubpath;
- (void)addLineToPointX:(double)arg1 y:(double)arg2;
- (void)dealloc;
- (id)initWithPoints:(CGPoint )arg1 count:(long long)arg2;

@end
