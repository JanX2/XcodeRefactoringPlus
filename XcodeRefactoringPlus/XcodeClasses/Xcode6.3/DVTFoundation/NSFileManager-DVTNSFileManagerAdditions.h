//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSFileManager (DVTNSFileManagerAdditions)
+ (BOOL)dvt_isPathValidForFileManagerOperations:(id)arg1;
- (BOOL)removeExtendedAttributeForKey:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (id)getExtendedAttributeForKey:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;
- (BOOL)dvt_unzipArchiveAtPath:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3;
- (BOOL)dvt_zipArchiveAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)dvt_availableFilenameInDirectory:(id)arg1 desiredFilename:(id)arg2;
@end