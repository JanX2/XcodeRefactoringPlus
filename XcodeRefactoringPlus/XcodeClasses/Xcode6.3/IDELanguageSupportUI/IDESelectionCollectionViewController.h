//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESelectionCollectionViewController : NSViewController <DVTInvalidation>
{
    NSCollectionView *_collectionView;
    NSView *_descriptionArea;
    DVTObservingToken *_selectionIndexesObservingToken;
}

+ (void)initialize;
@property(retain) DVTObservingToken *selectionIndexesObservingToken; // @synthesize selectionIndexesObservingToken=_selectionIndexesObservingToken;
@property(retain) NSView *descriptionArea; // @synthesize descriptionArea=_descriptionArea;
@property __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setCollectionContents:(id)arg1;
- (void)removeDescriptions;
- (void)viewDidLoad;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end