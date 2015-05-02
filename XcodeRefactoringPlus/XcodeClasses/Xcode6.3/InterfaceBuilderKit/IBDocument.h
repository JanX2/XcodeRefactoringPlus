//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDocument : NSDocument
{
    struct IBDocumentStorage *storage;
}

+ (id)defaultTargetRuntime;
+ (void)registerConnectorClass:(Class)arg1;
+ (id)documentForObject:(id)arg1;
+ (id)documentForConnection:(id)arg1;
+ (void)setPreserveBundleContents:(BOOL)arg1;
+ (BOOL)preserveBundleContents;
+ (id)strippedFileWrapperForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)displayNameForType:(id)arg1;
+ (id)shortDisplayNameForType:(id)arg1;
+ (void)setShouldUpdateSourceFileRelativePaths:(BOOL)arg1;
+ (BOOL)shouldUpdateSourceFileRelativePaths;
+ (void)setLogUndoActions:(BOOL)arg1;
+ (BOOL)logUndoActions;
+ (id)additionalInstantiationInformationForNextDocument;
+ (void)setAdditionalInstantiationInformationForNextDocument:(id)arg1;
+ (id)currentHIToolboxVersion;
+ (id)currentAppKitVersion;
+ (id)currentIBFrameworkVersion;
+ (id)currentSystemVersion;
+ (id)objectPasteboardType;
+ (id)plugin;
+ (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (BOOL)isNativeType:(id)arg1;
+ (id)readableTypes;
+ (id)writableTypes;
+ (BOOL)restoresEditors;
+ (void)setRestoresEditors:(BOOL)arg1;
+ (struct __CFArray *)documents;
+ (void)initialize;
+ (long long)allSystemsTarget;
- (id)projectSynchronizationStatus;
- (void)setProjectSynchronizationStatus:(id)arg1;
- (id)xcodeProject;
- (void)performRefactoringOperations:(id)arg1 error:(id *)arg2;
- (void)decompose;
- (id)requiredRootsForDecomposition;
- (id)duplicatableRootsForDecomposition;
- (void)refactorWithClassRenameRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (long long)nextTransientIDForChildOfObject:(id)arg1 startingPoint:(long long)arg2;
- (long long)initialIDForVerifiedTransientObjects;
- (long long)effectivePropertyAccessControlForObject:(id)arg1;
- (long long)propertyAccessControlForObject:(id)arg1;
- (void)setPropertyAccessControl:(long long)arg1 forObject:(id)arg2;
- (void)clearEffectivePropertyAccessControlCache;
- (void)validateLocalizableProperty:(id)arg1 onObject:(id)arg2 forLocalization:(id)arg3;
- (void)invalidateLocalizableProperty:(id)arg1 onObject:(id)arg2 forLocalization:(id)arg3;
- (void)invalidateLocalizableProperty:(id)arg1 onObject:(id)arg2;
- (id)localizedProperty:(id)arg1 forObject:(id)arg2 inLocalization:(id)arg3;
- (void)takeLocalizedValues:(SEL)arg1 fromLocalization:(id)arg2 forObjects:(id)arg3;
- (void)removeLocalizationNamed:(id)arg1;
- (void)addLocalizationNamed:(id)arg1;
- (id)invalidLocalizablePropertiesForLocalization:(id)arg1;
- (long long)numberOfInvalidLocalizablePropertiesForLocalization:(id)arg1;
- (void)setLocalizationMode:(long long)arg1;
- (long long)localizationMode;
- (void)setActiveLocalization:(id)arg1;
- (id)activeLocalization;
- (id)localizations;
- (id)fileURLsForExternalLocalizations;
- (long long)identifyObjects:(id)arg1 untilDate:(id)arg2;
- (void)noteObject:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)openEditorForObject:(id)arg1 makeKeyAndOrderFront:(BOOL)arg2;
- (id)openEditorForObject:(id)arg1 closingSubEditors:(BOOL)arg2 makeKeyAndOrderFront:(BOOL)arg3;
- (id)selectObjectInEditor:(id)arg1;
- (id)selectObjectInEditor:(id)arg1 makeKeyAndOrderFront:(BOOL)arg2;
- (BOOL)shouldAvoidEditingObject:(id)arg1;
- (void)selectObjectsInNibWindowByPossiblySwitchingModes:(id)arg1 makeMain:(BOOL)arg2 makeKey:(BOOL)arg3 orderFront:(BOOL)arg4;
- (id)openEditorForObject:(id)arg1;
- (id)windowControllerForIdentifyingCurrentlyVisibleObject:(id)arg1;
- (id)editedObjectIDs;
- (void)setLastSelectedClassNameForClassesTab:(id)arg1;
- (id)lastSelectedClassNameForClassesTab;
- (id)classDetailItemsForClassName:(id)arg1;
- (id)liberateObject:(id)arg1 fromFrameworksOtherThan:(id)arg2;
- (id)replaceObject:(id)arg1 duringArchivingWithParentClassObjectNotRequiringFrameworksOtherThan:(id)arg2;
- (id)objectClassesForIBEncoding;
- (BOOL)shouldConnectionDisplayUpdateForObject:(id)arg1 inReactionChangeInClassesNamed:(id)arg2;
- (id)classNamesForForcingPersistenceOfClassDescriptions;
- (id)primaryInterfaceFilesForObjects:(id)arg1;
- (id)primaryInterfaceFileForClassNamed:(id)arg1;
- (BOOL)isObject:(id)arg1 aDescendantOfObject:(id)arg2;
- (id)classes;
- (BOOL)isClassNameCompletelyDescribed:(id)arg1;
- (id)descendantsOfClass:(id)arg1;
- (id)lineageOfClass:(id)arg1;
- (id)superclassOfClass:(id)arg1;
- (id)subclassesOfClass:(id)arg1;
- (BOOL)is:(id)arg1 aKindOf:(id)arg2;
- (void)renameClassNamed:(id)arg1 to:(id)arg2;
- (Class)mostDerivedImplementedClassForObject:(id)arg1;
- (id)classNameForObject:(id)arg1;
- (id)baseClassNameForObject:(id)arg1;
- (void)setCustomClassName:(id)arg1 forObject:(id)arg2;
- (id)customClassNameForObject:(id)arg1;
- (id)commonCustomClassNameOfObjects:(id)arg1;
- (void)didManuallyIntegrateHeaderFiles:(id)arg1 withChanges:(id)arg2;
- (void)classDescriber:(id)arg1 didModifyClassesNamed:(id)arg2;
- (void)classDescriber:(id)arg1 willModifyClassesNamed:(id)arg2;
- (id)sourceCodeController;
- (BOOL)acceptsPasteboardContentsForTargetRuntime:(id)arg1;
- (void)setTargetRuntime:(id)arg1;
- (void)didChangeTargetRuntimeWithContext:(id)arg1;
- (void)willChangeTargetRuntimeWithContext:(id)arg1;
- (void)changeDocumentTargetRuntimeTo:(id)arg1 withContext:(id)arg2 andContextForUndo:(id)arg3;
- (void)changeDocumentTargetRuntimeTo:(id)arg1;
- (void)rebuildEditorForTopLevelObject:(id)arg1;
- (id)targetRuntime;
- (BOOL)integrateManuallyAddedClassDescriptionsFromFiles:(id)arg1 changes:(id *)arg2 error:(id *)arg3;
- (BOOL)integrateManuallyAddedClassDescriptionsFromFiles:(id)arg1 error:(id *)arg2;
- (BOOL)refreshAllDocumentRelativeDescriptions:(id *)arg1;
- (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
- (id)prototypeConnectionsForObject:(id)arg1;
- (id)connectionForConnectionID:(long long)arg1;
- (long long)connectionIDForConnection:(id)arg1;
- (id)connections;
- (void)removeConnections:(id)arg1 context:(id)arg2;
- (void)removeConnections:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)replaceConnection:(id)arg1 withConnection:(id)arg2;
- (void)addConnection:(id)arg1;
- (void)addConnection:(id)arg1 withConnectionID:(long long)arg2;
- (BOOL)containsConnection:(id)arg1;
- (id)connectionsToObject:(id)arg1;
- (id)connectionsFromObject:(id)arg1;
- (id)connectionsForObject:(id)arg1;
- (void)connectBinding:(id)arg1 ofSourceObject:(id)arg2 toDestinationObject:(id)arg3 keyPath:(id)arg4 options:(id)arg5;
- (void)connectAction:(id)arg1 ofSourceObject:(id)arg2 toDestinationObject:(id)arg3;
- (void)connectOutlet:(id)arg1 ofSourceObject:(id)arg2 toDestinationObject:(id)arg3;
- (id)attributePlaceholderForObject:(id)arg1 withName:(id)arg2;
- (void)removeAttributePlaceholder:(id)arg1;
- (void)addAttributePlaceholder:(id)arg1;
- (id)propertyForKey:(id)arg1 onObject:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2 onObject:(id)arg3;
- (id)metadataForKey:(id)arg1 ofObject:(id)arg2;
- (void)setMetadata:(id)arg1 forKey:(id)arg2 ofObject:(id)arg3;
- (id)labelForObject:(id)arg1;
- (id)nameForObject:(id)arg1;
- (void)setName:(id)arg1 forObject:(id)arg2;
- (id)frameworkPathForObject:(id)arg1;
- (id)pluginDependencyForObject:(id)arg1;
- (id)mostSeniorObjectsOfObjects:(id)arg1;
- (id)topLevelObjectsForObjects:(id)arg1;
- (id)topLevelObjectForObject:(id)arg1;
- (id)descendantsOfObjects:(id)arg1;
- (id)descendantsOfObject:(id)arg1;
- (void)addObjectAndDefaultChildren:(id)arg1 toParent:(id)arg2;
- (void)addObject:(id)arg1 toParent:(id)arg2;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 toParent:(id)arg2 withName:(id)arg3 andOID:(long long)arg4;
- (void)synchronizeChildrenOfObject:(id)arg1 withToOneKeyPaths:(id)arg2 andToManyKeyPaths:(id)arg3;
- (void)moveObject:(id)arg1 toParent:(id)arg2 atIndex:(long long)arg3;
- (void)moveObject:(id)arg1 toParent:(id)arg2;
- (id)rootObject;
- (void)removeObject:(id)arg1;
- (void)deleteObjects:(id)arg1 fromObjectModel:(BOOL)arg2 andDocumentMode:(BOOL)arg3;
- (BOOL)canRemoveObjectsFromObjectModel:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)bounceDeselectOffUndoStack:(id)arg1;
- (void)tellWindowControllersToUnselectBeforeRemove:(id)arg1;
- (id)objects;
- (id)topLevelObjects;
- (id)lineageOfObject:(id)arg1;
- (BOOL)areObjectsSiblings:(id)arg1;
- (id)ancestorsOfObject:(id)arg1;
- (long long)objectIDForObject:(id)arg1;
- (id)objectForObjectID:(long long)arg1;
- (id)firstAncestorOfObject:(id)arg1 ofClass:(Class)arg2;
- (id)parentOfObject:(id)arg1;
- (id)orderedChildrenOfObject:(id)arg1;
- (id)childrenOfObject:(id)arg1;
- (long long)numberOfChildrenOfObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)topLevelConcreteObjects;
- (BOOL)isObjectAnAbstractConcept:(id)arg1;
- (id)extractObjects:(id)arg1;
- (unsigned long long)secondChanceAcceptLibraryDragPasteboard:(id)arg1 imageOrigin:(struct CGPoint)arg2 withDragImage:(id)arg3;
- (id)tryToInsertContentsOfPasteboardIntoMainWindow:(id)arg1;
- (id)makeObject:(id)arg1 acceptContentsOfPasteboardFromDragInfo:(id)arg2 insertionContext:(id)arg3;
- (id)parentsOfObjects:(id)arg1;
- (id)attributesConfigurationFromPasteboard:(id)arg1 forObject:(id)arg2;
- (void)putObjects:(id)arg1 onPasteboard:(id)arg2 forOwner:(id)arg3;
- (void)putObjects:(id)arg1 onPasteboard:(id)arg2 forOwner:(id)arg3 context:(id)arg4;
- (void)populateArchivingContext:(id)arg1 forInsertingObjects:(id)arg2 intoPasteboard:(id)arg3;
- (id)addChildrenFromDraggingInfo:(id)arg1 ofType:(id)arg2 toObject:(id)arg3 context:(id)arg4;
- (id)addChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 toObject:(id)arg3 context:(id)arg4;
- (id)insertChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 asChildrenOfObject:(id)arg3 atIndex:(long long)arg4 context:(id)arg5;
- (id)insertChildrenFromDraggingInfo:(id)arg1 ofType:(id)arg2 asChildrenOfObject:(id)arg3 atIndex:(long long)arg4 context:(id)arg5;
- (unsigned long long)dragOperationForObjectsRepresentedByDraggingInfo:(id)arg1 targetingObject:(id)arg2;
- (unsigned long long)dragOperationForObjectsRepresentedByDraggingInfo:(id)arg1 targettingObject:(id)arg2;
- (BOOL)canObjectsFromPasteboard:(id)arg1 ofType:(id)arg2 beMovedToParent:(id)arg3;
- (BOOL)canObjects:(id)arg1 beMovedToParent:(id)arg2;
- (id)insertChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 asChildrenOfObject:(id)arg3 atIndex:(long long)arg4 useOIDs:(BOOL)arg5 context:(id)arg6;
- (id)decodeNonLazyIdentifiedObjectsFromPasteboard:(id)arg1 ofType:(id)arg2 forInsertionInto:(id)arg3 context:(id)arg4;
- (id)decodeImmediatelyAvailableObjectsFromPasteboard:(id)arg1 ofType:(id)arg2 forInsertionInto:(id)arg3 context:(id)arg4;
- (BOOL)shouldCustomizeObjects:(id)arg1 ofTargetRuntime:(id)arg2 fromPasteboard:(id)arg3 forInsertionIntoObject:(id)arg4 context:(id)arg5;
- (id)moveChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 toParent:(id)arg3 atIndex:(long long)arg4;
- (id)localPasteboardObjects:(id)arg1 ofType:(id)arg2;
- (id)extractResourceValuesFromPasteboard:(id)arg1 ofType:(id)arg2;
- (id)extractResourcesFromPasteboard:(id)arg1 ofType:(id)arg2;
- (BOOL)doesPasteboard:(id)arg1 containResourcesOfType:(id)arg2;
- (id)currentlyInADragThatAllowsMovePBoardType;
- (id)documentLocalPasteboardType;
- (void)simulateInterface:(id)arg1;
- (BOOL)prepareAndLaunchSimulationWithContext:(id)arg1 error:(id *)arg2;
- (void)launchSimulatorForCompiledDocumentAtPath:(id)arg1 withEnvironment:(id)arg2 context:(id)arg3;
- (BOOL)compilePackageToPath:(id)arg1 options:(unsigned long long)arg2 originalContentsPath:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)didStartSimulatorWithContext:(id)arg1;
- (void)willStartSimulatorWithContext:(id)arg1;
- (id)environmentForSimulatingAtPath:(id)arg1 context:(id)arg2;
- (void)cleanSimulatorDefaults;
- (void)showDocumentInfoWindow:(id)arg1;
- (void)showDocumentWindow:(id)arg1;
- (void)takeDefaultDeploymentTargetFromSDKPath:(id)arg1;
- (id)incompatibilitiesInfoController;
- (id)fileInfoController;
- (id)warnings;
- (void)buildWarningsIfNeeded;
- (void)rebuildWarnings;
- (void)validateWarnings:(id)arg1;
- (void)updateWarningsForObjects:(id)arg1;
- (void)notifyWarningChanged;
- (void)invalidateWarningsForConnection:(id)arg1;
- (void)invalidateWarningsForClassNamed:(id)arg1;
- (void)invalidateWarningsForChildrenOfObject:(id)arg1;
- (void)invalidateWarningsForObject:(id)arg1;
- (void)invalidateAllWarnings;
- (void)warningSeveritiesDidChange:(id)arg1;
- (void)validateWarningsIfNeeded;
- (void)scheduleWarningValidation;
- (void)unscheduleWarningValidation;
- (id)documentCompatibilityController;
- (void)didMoveObject:(id)arg1;
- (void)willMoveObject:(id)arg1;
- (void)didRemoveConnection:(id)arg1;
- (void)willRemoveConnection:(id)arg1;
- (void)didAddConnection:(id)arg1;
- (void)willAddConnection:(id)arg1;
- (void)didAddObject:(id)arg1;
- (void)willAddObject:(id)arg1;
- (void)didChangePropertyFromValue:(id)arg1 toValue:(id)arg2 forKey:(id)arg3 onObject:(id)arg4;
- (void)didRemoveObject:(id)arg1;
- (void)willRemoveObject:(id)arg1;
- (void)undoManagerWasReset:(id)arg1;
- (void)undoManagerWillCloseUndoGroup:(id)arg1;
- (void)undoManagerDidOpenUndoGroup:(id)arg1;
- (void)didFinishEditing;
- (void)didStartEditing;
- (void)didStartUndoing;
- (void)didFinishUndoing;
- (void)didStartRedoing;
- (void)didFinishRedoing;
- (void)finishPushingSelection;
- (void)beginPushingSelection;
- (void)restoreEditingContextFromSnapshot:(id)arg1;
- (id)editingContextRestorationInfoWithAdds:(id)arg1 removes:(id)arg2 moves:(id)arg3 modifies:(id)arg4 andSelectionHints:(id)arg5;
- (void)stopUndoObservationsOf:(id)arg1;
- (void)startUndoObservationsOf:(id)arg1;
- (BOOL)isUndoObservationOfObjectEnabled:(id)arg1;
- (void)enableUndoObservationsOf:(id)arg1;
- (void)disableUndoObservationsOf:(id)arg1;
- (void)setNonUndoableValue:(id)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeDidAutomaticallyUndoChangeGroup:(id)arg1;
- (void)registerChangeFromValue:(id)arg1 forKeyPath:(id)arg2 onObject:(id)arg3;
- (void)undoWithKVCUndoRecord:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 onObject:(id)arg3;
- (void)undoableProperty:(id)arg1 ofObject:(id)arg2 changedFromValue:(id)arg3 toValue:(id)arg4;
- (void)automaticallyRevertUndoGroupAndWarnObject:(id)arg1;
- (void)displayLockedObjectAlert:(id)arg1;
- (void)displayLockedPropertyAlertForObjects:(id)arg1 inWindowController:(id)arg2;
- (BOOL)isPropertyLocked:(id)arg1 forAnyObject:(id)arg2;
- (BOOL)isPropertyLocked:(id)arg1 forObject:(id)arg2;
- (BOOL)shouldAllowObjectInsertion:(BOOL)arg1;
- (BOOL)shouldAllowConnectionInsertion:(BOOL)arg1;
- (BOOL)shouldAllowConnectionRemoval:(BOOL)arg1;
- (void)setVersion:(id)arg1 forPluginDeclaredDependency:(id)arg2 forCategory:(long long)arg3;
- (void)setDefaultVersion:(id)arg1 forPluginDeclaredDependency:(id)arg2 forCategory:(long long)arg3;
- (id)effectiveVersionForPluginDeclaredDependency:(id)arg1 forCategory:(long long)arg2;
- (id)effectiveDefaultVersionForPluginDeclaredDependency:(id)arg1 forCategory:(long long)arg2;
- (id)defaultVersionForPluginDeclaredDependency:(id)arg1 forCategory:(long long)arg2;
- (id)versionForPluginDeclaredDependency:(id)arg1 forCategory:(long long)arg2;
- (id)prunePluginDeclaredDependencies:(id)arg1 forCategory:(long long)arg2;
- (void)setPluginDeclaredDependencyDefaults:(id)arg1 forCategory:(long long)arg2;
- (id)pluginDeclaredDependencyDefaultsForCategory:(long long)arg1;
- (void)setPluginDeclaredDependencies:(id)arg1 forCategory:(long long)arg2;
- (id)pluginDeclaredDependenciesForCategory:(long long)arg1;
- (id)validPluginDeclaredDependencyIDsForCategory:(long long)arg1;
- (id)pluginIdentifiersWithApplicablePluginDeclaredDependenciesForCategory:(long long)arg1;
- (void)setFallbackContainerWidgetTypeForLayoutGuides:(id)arg1;
- (id)fallbackContainerWidgetTypeForLayoutGuides;
- (void)setFallbackWidgetTypeForLayoutGuides:(id)arg1;
- (id)fallbackWidgetTypeForLayoutGuides;
- (id)labelDefinitions;
- (id)labelDefinitionForIdentifier:(id)arg1;
- (void)setDocumentMetadata:(id)arg1 forKey:(id)arg2;
- (id)documentMetadataForKey:(id)arg1;
- (id)documentMetadata;
- (void)setDocumentMetadata:(id)arg1;
- (void)setDocumentWindowStaticOrigin:(struct CGPoint)arg1;
- (struct CGPoint)documentWindowStaticOrigin;
- (BOOL)documentWindowUsesStaticOrigin;
- (long long)defaultPropertyAccessControl;
- (void)setDefaultPropertyAccessControl:(long long)arg1;
- (id)probableProjectPath;
- (id)lastKnownRelativeProjectPath;
- (void)setLastKnownRelativeProjectPath:(id)arg1;
- (void)setVerificationMessagesSourceURL:(id)arg1;
- (id)verificationMessagesSourceURL;
- (void)appendVerificationMessages:(id)arg1;
- (void)setVerificationMessages:(id)arg1;
- (id)verificationMessages;
- (BOOL)presentsInterface;
- (id)frameworkDependencies;
- (id)classNameThatPreventedDecode;
- (void)setClassNameThatPreventedDecode:(id)arg1;
- (id)lastSavedPluginVersionForPluginWithIdentifier:(id)arg1;
- (void)setLastSavedPluginVersionsForDependedPlugins:(id)arg1;
- (id)lastSavedPluginVersionsForDependedPlugins;
- (void)setLastSavedHIToolboxVersion:(id)arg1;
- (id)lastSavedHIToolboxVersion;
- (void)setLastSavedAppKitVersion:(id)arg1;
- (id)lastSavedAppKitVersion;
- (void)setLastSavedInterfaceBuilderVersion:(id)arg1;
- (id)lastSavedInterfaceBuilderVersion;
- (void)setLastSavedSystemVersion:(id)arg1;
- (id)lastSavedSystemVersion;
- (BOOL)isBundleBasedFileType:(id)arg1;
- (long long)developmentTarget;
- (long long)systemTarget;
- (void)setObjectContainer:(id)arg1;
- (id)resourceManager;
- (id)classDescriber;
- (void)setClassDescriber:(id)arg1;
- (id)selection;
- (id)undoManager;
- (id)objectContainer;
- (id)connectionHUD;
- (id)uniqueInMemoryIDForObject:(id)arg1;
- (id)uniqueID;
- (id)displayNameIncludingLocalization;
- (id)lprojFolderName;
- (id)localizedDisplayNameForLocalization:(id)arg1;
- (id)displayNameForLocalization:(id)arg1;
- (id)displayNameForLocalization:(id)arg1 localized:(BOOL)arg2;
- (void)setObjectIDsToOpen:(id)arg1;
- (id)objectIDsToOpen;
- (id)additionalInstantiationInformation;
- (id)windows;
- (void)setDocumentWindowController:(id)arg1;
- (id)documentWindowController;
- (void)setIsClosing:(BOOL)arg1;
- (BOOL)isClosing;
- (void)setFileLastModifiedDate:(id)arg1;
- (id)fileLastModifiedDate;
- (void)setRelatedDocumentPaths:(id)arg1;
- (id)relatedDocumentPaths;
- (void)setPerFileSynchronizationState:(id)arg1;
- (id)perFileSynchronizationState;
- (void)setProjectBackgroundReader:(id)arg1;
- (id)projectBackgroundReader;
- (void)setCachedXcodeProject:(id)arg1;
- (id)cachedXcodeProject;
- (void)setXcodeProjectNeedsSynchronization:(BOOL)arg1;
- (BOOL)xcodeProjectNeedsSynchronization;
- (void)setFontAndColorSelectionIsPendingValidation:(BOOL)arg1;
- (BOOL)fontAndColorSelectionIsPendingValidation;
- (void)setUpdatingColorPanel:(BOOL)arg1;
- (BOOL)isUpdatingColorPanel;
- (void)setPreviousXmlDecoderHints:(id)arg1;
- (id)previousXmlDecoderHints;
- (void)setShouldRecalculatePluginDependencies:(BOOL)arg1;
- (BOOL)shouldRecalculatePluginDependencies;
- (id)editorManager;
- (id)localizationInfoController;
- (id)effectivePropertyAccessControlCache;
- (void)setSwitchingLocalizations:(BOOL)arg1;
- (BOOL)isSwitchingLocalizations;
- (void)setObjectWarnedForLockedPropertyChange:(id)arg1;
- (id)objectWarnedForLockedPropertyChange;
- (id)undoBlocks;
- (id)objectsWithPendingWarningCalculations;
- (id)parentsWithPendingChildWarningCalculations;
- (id)classNamesWithPendingWarningCalculations;
- (void)setWarningsArePendingValidation:(BOOL)arg1;
- (BOOL)warningsArePendingValidation;
- (void)setObjectsToWarnings:(id)arg1;
- (id)objectsToWarnings;
- (void)setNameForCurrentEditingAction:(id)arg1;
- (void)suggestDerivedNameForCurrentEditingAction:(id)arg1;
- (void)setSimulationTask:(id)arg1;
- (id)simulationTask;
- (void)setNameForCurrentEditingAction:(id)arg1 onObjects:(id)arg2;
- (void)suggestDerivedNameForCurrentEditingAction:(id)arg1 onObjects:(id)arg2;
- (void)ensureUndoNamingSetIsOpen;
- (void)closeUndoNamingSet;
- (id)undoNameForAction:(id)arg1 onObjects:(id)arg2;
- (void)hintSelectionForUndo:(id)arg1;
- (void)clearUndoableChangeTable;
- (id)undoableChangeTable;
- (void)updateUndoableChangeTableInfoForObject:(id)arg1 withChangeType:(int)arg2;
- (void)setFileTypePopUpButton:(id)arg1;
- (id)fileTypePopUpButton;
- (void)setSavePanelAccessoryView:(id)arg1;
- (id)savePanelAccessoryView;
- (id)currentPluginVersionsForDependedPlugins;
- (id)resourceClasses;
- (id)synchronizedResourceFileExtensions;
- (id)nameForDocumentImage:(id)arg1;
- (id)nameForResourceValue:(id)arg1;
- (id)documentSoundNamed:(id)arg1;
- (id)documentImageNamed:(id)arg1;
- (id)documentImageNamed:(id)arg1 usingSizeValueForPlaceholderImageIfNeeded:(id)arg2;
- (Class)soundResourceClass;
- (Class)imageResourceClass;
- (id)documentCIImageNamed:(id)arg1;
- (id)documentNameForCIImage:(id)arg1;
- (void)addSystemResources;
- (Class)resourceManagerClass;
- (id)performVerification;
- (id)verify;
- (id)verifyRootObjectRootsAllObjects;
- (void)recalculatePluginDependenciesOverwritingExistingDependencies:(int)arg1;
- (BOOL)hasOldPluginDependencyRecalculationVersion;
- (BOOL)hasCommonlyMisattributedPluginDependencies;
- (id)verifyExclusiveConnections;
- (BOOL)shouldStablizeCoding;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromIB2InfoWrapper:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForReadingWithIB2DependencyNibWrapper:(id)arg1 error:(id *)arg2;
- (id)infoNibDictionary;
- (id)classesNibData;
- (id)infoNibData;
- (void)willDecodeWithKeyedDecoder:(id)arg1;
- (BOOL)objectContainer:(id)arg1 shouldPersistMetadataForKey:(id)arg2 onObject:(id)arg3;
- (void)didCreateObjectContainerWithCoder:(id)arg1;
- (void)willCreateObjectContainerWithCoder:(id)arg1;
- (void)objectContainer:(id)arg1 didCreateDataRepresentationWithCoder:(id)arg2 context:(id)arg3;
- (void)objectContainer:(id)arg1 willCreateDataRepresentationWithCoder:(id)arg2 context:(id)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)decodeDocumentOfType:(id)arg1 withCoder:(id)arg2;
- (id)targetRuntimeWithIdentifier:(id)arg1 fromDocumentOfType:(id)arg2 error:(id *)arg3;
- (id)errorForUnarchiveException:(id)arg1;
- (void)encodeDesignableNibWithCoder:(id)arg1;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (BOOL)resolvePluginDependencies:(id)arg1 error:(id *)arg2;
- (id)errorForMissingPluginIdentifiersMap:(id)arg1;
- (BOOL)dependsOnPlugin:(id)arg1;
- (id)pluginDependencies;
- (void)didArchiveWithContext:(id)arg1;
- (void)willArchiveWithContext:(id)arg1;
- (id)hybridPackage;
- (id)hybridPackageType;
- (id)compiledPackage;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)readLRELockingRules:(id)arg1;
- (void)readLREHighlightIDs:(id)arg1;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)shouldCopyFileNamed:(id)arg1 whenPreservingWrapperContentsWhenWritingToURL:(id)arg2 ofType:(id)arg3 forSaveOperation:(unsigned long long)arg4 originalContentsURL:(id)arg5;
- (BOOL)shouldPreserveWrapperContentsWhenWritingToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4;
- (void)setArchivingReplacementClassName:(id)arg1 forClassName:(id)arg2;
- (id)xmlCoder:(id)arg1 classNameForClass:(Class)arg2;
- (id)coderForType:(id)arg1 withData:(id)arg2;
- (BOOL)xmlCoder:(id)arg1 object:(id)arg2 shouldEncodeObject:(id *)arg3 forKey:(id)arg4 conditional:(BOOL)arg5;
- (id)xmlCoder:(id)arg1 sortDescriptorForCollection:(id)arg2;
- (BOOL)prepareSavePanel:(id)arg1;
- (void)accessoryViewChangedFileType:(id)arg1;
- (void)setCurrentSavePanel:(id)arg1;
- (id)currentSavePanel;
- (void)setFileTypeFromLastRunSavePanel:(id)arg1;
- (id)fileTypeFromLastRunSavePanel;
- (void)selectionDidInvalidateInWindowController:(id)arg1;
- (void)selectionDidChangeInWindowController:(id)arg1;
- (void)controlledWindowDidBecomeMain:(id)arg1;
- (void)takeSelectionFromMainWindow:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)invalidateFontAndColorSelection;
- (void)unscheduleFontAndColorSelectionValidation;
- (void)validateFontAndColorSelection:(id)arg1;
- (void)refreshFontsAndColors;
- (void)projectResourceReaderFinishedReading:(id)arg1;
- (void)projectResourceReader:(id)arg1 readFiles:(id)arg2;
- (void)beginSyncingWithXcodeIfNeeded;
- (void)cancelSyncingWithXcode;
- (id)synchronizedFilesForProject:(id)arg1;
- (id)filePathsSubstitutingFrameworksForBuiltProductsCounterparts:(id)arg1 inProject:(id)arg2;
- (id)synchronizedFileExtensions;
- (id)synchronizedImageFileExtensions;
- (BOOL)synchronizeWithModifiedProjectFiles:(id)arg1 project:(id)arg2 status:(id)arg3;
- (void)didSynchronizeWithProjectFiles:(id)arg1 project:(id)arg2;
- (void)willSynchronizeWithProjectFiles:(id)arg1 project:(id)arg2;
- (id)synchronizedDocumentFileExtensions;
- (void)noteSynchronizationOfFileFailed:(id)arg1;
- (BOOL)synchronizeLoadedPluginsWithModifiedProjectFiles:(id)arg1 project:(id)arg2 status:(id)arg3;
- (BOOL)synchronizeClassDescriptionsWithModifiedProjectFiles:(id)arg1 project:(id)arg2 status:(id)arg3;
- (BOOL)synchronizeFrameworkClassDescriptionsWithModifiedProjectFiles:(id)arg1 project:(id)arg2 status:(id)arg3;
- (id)resourceReaderCacheReference;
- (void)invalidateXcodeProjectSynchronization;
- (void)prepareForRefreshSyncWithXcodeProject;
- (BOOL)isProjectSynchronizationInProgress;
- (void)updateFileLastModifiedDate;
- (long long)diskState;
- (id)fileLastModifiedDateForFile:(id)arg1 error:(id *)arg2;
- (void)setFileType:(id)arg1;
- (void)close;
- (void)makeWindowControllers;
- (id)windowGroup;
- (id)windowForSheet;
- (void)setFileURL:(id)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)fileLossAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)projectInsertionPanel:(id)arg1 finishedInsertFiles:(id)arg2 intoTargets:(id)arg3 success:(BOOL)arg4;
- (void)ibDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)presaveAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)presaveAlertWithContinueLabel:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithType:(id)arg1 targetRuntime:(id)arg2 fromPasteboard:(id)arg3 error:(id *)arg4;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)windowPasteboardType;
- (id)menuItemPasteboardType;
- (id)menuPasteboardType;
- (id)viewPasteboardType;
- (id)objectPasteboardType;
- (id)pathExtensionForCompiledPackage;
- (id)preferredFileType;
- (unsigned long long)dragOperationForObjectsRepresentedByDraggingInfo:(id)arg1 targettingObject:(id)arg2;
- (void)setSystemTarget:(long long)arg1;
- (void)didCompile;
- (void)willCompile;
- (void)setDefaultVersion:(id)arg1 forPluginDeclaredDependency:(id)arg2;
- (id)effectiveVersionForPluginDeclaredDependency:(id)arg1;

@end