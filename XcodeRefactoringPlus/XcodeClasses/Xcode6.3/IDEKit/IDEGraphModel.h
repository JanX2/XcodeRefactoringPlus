//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEGraphModel : NSObject
{
    id <IDEGraphDelegate> _delegate;
    id <IDEGraphModelChartsModificationDelegate> _chartsModificationDelegate;
    NSArray *_charts;
}

@property(retain) NSArray *charts; // @synthesize charts=_charts;
@property __weak id <IDEGraphModelChartsModificationDelegate> chartsModificationDelegate; // @synthesize chartsModificationDelegate=_chartsModificationDelegate;
@property __weak id <IDEGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_chartNamed:(id)arg1;
- (id)chartNamed:(id)arg1;
- (id)init;

@end