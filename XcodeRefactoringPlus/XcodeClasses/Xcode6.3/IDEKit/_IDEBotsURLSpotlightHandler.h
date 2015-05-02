//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDEBotsURLSpotlightHandler : NSObject
{
    NSMetadataQuery *_spotlightQuery;
    CDUnknownBlockType _completionHandler;
    id _bot;
    id _integration;
    NSString *_projectName;
}

+ (id)sharedSpotlightHandler;
- (void).cxx_destruct;
- (void)initalGatherComplete:(id)arg1;
- (void)queryDidUpdate:(id)arg1;
- (void)didStartGathering:(id)arg1;
- (void)startQueryForProjectName:(id)arg1 bot:(id)arg2 integration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end