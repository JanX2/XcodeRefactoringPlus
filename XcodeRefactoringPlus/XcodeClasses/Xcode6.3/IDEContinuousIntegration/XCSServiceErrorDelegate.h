//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCSServiceErrorDelegate <NSObject>

@optional
- (void)service:(XCSService *)arg1 didEncounterError:(NSError *)arg2 withRequest:(XCSHTTPRequest *)arg3 proceed:(void (^)(unsigned long long, NSError *))arg4;
@end