//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying>
{
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
    NSArray *_inputStrokeIdentifiers;
    NSDictionary *_recognitionResultsByLocale;
    NSDictionary *_errorsByLocale;
}

+ (id)filteredResultsByLocale:(id)arg1 usingLanguageFitness:(id)arg2;
+ (id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *errorsByLocale; // @synthesize errorsByLocale=_errorsByLocale;
@property(readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale; // @synthesize recognitionResultsByLocale=_recognitionResultsByLocale;
@property(readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers; // @synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers;
- (double)languageFitnessForLocale:(id)arg1;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double )arg2 doesContainUnfilteredMultiLocaleResults:(BOOL )arg3;
- (id)localesSortedByLanguageFitness:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4;
- (id)init;
@property(readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property(readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property(readonly, retain, nonatomic) CHDrawing *inputDrawing;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6;

@end
