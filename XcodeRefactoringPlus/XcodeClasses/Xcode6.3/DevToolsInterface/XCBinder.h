//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBinder : PBXObject
{
    NSMutableArray *_binderItems;
    struct {
        unsigned int _valid:1;
        unsigned int _reserved:31;
    } _flags;
}

+ (id)binderAtPath:(id)arg1 createIfAbsent:(BOOL)arg2 error:(id *)arg3;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)_obsolete_binderAtPath:(id)arg1 createIfAbsent:(BOOL)arg2 error:(id *)arg3;
+ (id)openBinders;
+ (void)_unregisterBinder:(id)arg1;
+ (void)_registerBinder:(id)arg1;
+ (id)_binderRegistry;
- (BOOL)writeToPath:(id)arg1 error:(id *)arg2;
- (id)gidCommentForArchive;
- (id)fallbackClassNameForPListArchive;
- (id)classNameForPListArchive;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)setOrganizerItems:(id)arg1;
- (id)organizerItems;
- (id)binderItemWithGlobalID:(id)arg1;
- (id)binderItemForNode:(id)arg1;
- (void)replaceObjectInBinderItemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromBinderItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inBinderItemsAtIndex:(unsigned long long)arg2;
- (void)setBinderItems:(id)arg1;
- (id)binderItems;
- (id)mutableBinderItems;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end