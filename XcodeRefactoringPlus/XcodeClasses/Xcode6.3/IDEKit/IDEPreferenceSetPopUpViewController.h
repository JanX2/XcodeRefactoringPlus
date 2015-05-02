//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPreferenceSetPopUpViewController : IDEViewController
{
    DVTPreferenceSetManager *_prefSetManager;
    DVTObservingToken *_availablePrefSetsObserverToken;
    DVTObservingToken *_currentPrefSetObserverToken;
    NSPopUpButton *_prefSetsPopUpButton;
    NSMenuItem *_managePrefSetsMenuItem;
    NSPanel *_managePrefSetsPanel;
    DVTReplacementView *_prefSetReplacementView;
    id <DVTPreferenceSet> _selectedPreferenceSet;
}

@property(readonly) id <DVTPreferenceSet> selectedPreferenceSet; // @synthesize selectedPreferenceSet=_selectedPreferenceSet;
@property(readonly) NSPopUpButton *preferenceSetPopUpButton; // @synthesize preferenceSetPopUpButton=_prefSetsPopUpButton;
- (void).cxx_destruct;
- (void)_dismissManagePreferenceSetsSheetAction:(id)arg1;
- (void)managePreferenceSets:(id)arg1;
- (void)_selectPreferenceSetAction:(id)arg1;
- (void)_updatePrefSetsPopUpButton;
@property(retain) DVTPreferenceSetManager *preferenceSetManager;
- (void)_endObservingPreferenceSetManager;
- (void)_beginObservingPreferenceSetManager;
- (void)_selectPreferenceSetFromPreferenceSetManager;
- (void)primitiveInvalidate;

@end