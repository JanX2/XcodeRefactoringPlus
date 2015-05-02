//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGNSURLQuickLookProvider : NSObject <QLPreviewViewDelegate, IDEVariablesViewQuickLookProvider>
{
    NSURL *_url;
    DVTURLPreviewViewController *_urlPreviewViewController;
    int _loadedState;
}

@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)previewView:(id)arg1 didLoadPreviewItem:(id)arg2;
@property(readonly) NSURL *existingURLToOpen;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end