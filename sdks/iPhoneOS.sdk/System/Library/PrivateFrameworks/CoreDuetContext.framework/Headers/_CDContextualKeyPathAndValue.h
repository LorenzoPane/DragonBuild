//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _CDContextValue, _CDContextualKeyPath;

@interface _CDContextualKeyPathAndValue : NSObject <NSSecureCoding>
{
    _CDContextualKeyPath *_keyPath;
    _CDContextValue *_value;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) _CDContextValue *value; // @synthesize value=_value;
@property(retain, nonatomic) _CDContextualKeyPath *keyPath; // @synthesize keyPath=_keyPath;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 andValue:(id)arg2;

@end
