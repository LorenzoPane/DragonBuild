//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>

@class ISPropertyListProvider, SUClientInterface;

@interface SUStorePageDataProvider : ISDataProvider
{
    SUClientInterface *_clientInterface;
    long long _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property(copy) ISPropertyListProvider *propertyListDataProvider; // @synthesize propertyListDataProvider=_propertyListDataProvider;
@property long long outputType; // @synthesize outputType=_outputType;
@property(retain) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
// - (void).cxx_destruct;
- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;
@property(readonly) BOOL shouldProcessTouchIDDialogs;
- (BOOL)parseData:(id)arg1 returningError:(id )arg2;

@end
