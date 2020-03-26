//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

__attribute__((visibility("hidden")))
@interface _UISearchBarTextFieldTokenCounter : NSObject
{
    id _textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}

// - (void).cxx_destruct;
- (NSUInteger)indexOfTokenAtCharacterIndex:(NSUInteger)arg1;
- (id)tokenAtCharacterIndex:(NSUInteger)arg1;
- (_NSRange)characterRangeForSubrangeOfTextAfterLastToken:(_NSRange)arg1;
- (_NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(_NSRange)arg1;
- (_NSRange)characterRangeOfTextAfterLastToken;
- (NSUInteger)characterIndexForSelectingOrRemovingTokenAtIndex:(NSUInteger)arg1;
- (NSUInteger)characterIndexForInsertingTokenAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) _NSRange characterRangeOfAllTokens;
@property(readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;
- (void)_handleProcessEditing;
- (void)_addCharacterIndexesOfTokensInRange:(_NSRange)arg1 toIndexSet:(id)arg2;
- (id)initWithTextStorage:(id)arg1;

@end
