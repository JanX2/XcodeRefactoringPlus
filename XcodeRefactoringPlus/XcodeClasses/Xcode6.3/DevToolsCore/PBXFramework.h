//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXFramework : PBXContainer
{
    BOOL _needsToValidateChildren;
}

+ (id)frameworkForFileReference:(id)arg1;
+ (id)frameworkForPath:(id)arg1;
+ (id)frameworkForPath:(id)arg1 withResolvedPath:(id)arg2;
- (id)absolutePathsOfPrivateHeaderFiles;
- (id)absolutePathsOfPublicHeaderFiles;
- (id)_absolutePathsOfFilesInSubdirectoryNamed:(id)arg1;
- (void)invalidateAbsolutePathCache;
- (void)validateChildren;
- (id)rootGroup;

@end