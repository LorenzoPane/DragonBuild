//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PDFFormFieldPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFFormField : NSObject <NSCopying>
{
    PDFFormFieldPrivateVars *_private;
}

// - (void).cxx_destruct;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary )arg1;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary )arg1;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary )arg1;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary )arg1;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary )arg1;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary )arg1;
- (id)description;
- (BOOL)writeDefaultValue;
- (void)setWriteDefaultValue:(BOOL)arg1;
- (id)defaultStringValue;
- (void)setDefaultStringValue:(id)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)fieldName;
- (void)setFieldName:(id)arg1;
- (long long)buttonType;
- (void)setButtonType:(long long)arg1;
- (int)fieldType;
- (void)setFieldType:(int)arg1;
- (id)document;
- (void)setDocument:(id)arg1;
- (struct __CFDictionary )createDictionaryRef;
- (void)commonCreateDictionaryRef:(struct __CFDictionary )arg1;
- (struct __CFDictionary )dictionaryRef;
- (void)clearDictionaryRef;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)commonInit;
- (id)initWithFormDictionary:(CGPDFDictionary )arg1;
- (id)initWithAnnotation:(id)arg1;

@end
