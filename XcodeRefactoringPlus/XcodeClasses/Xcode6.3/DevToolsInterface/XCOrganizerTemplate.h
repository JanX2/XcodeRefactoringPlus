//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCOrganizerTemplate : NSObject
{
    NSString *_path;
    NSString *_name;
    NSString *_category;
}

+ (id)organizerTemplatesByCategory;
@property(copy) NSString *category; // @synthesize category=_category;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *path; // @synthesize path=_path;
- (BOOL)instantiateWithName:(id)arg1 inDirectoryAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)_replaceTemplateNameInFileAtPath:(id)arg1 withNewName:(id)arg2 error:(id *)arg3;
- (BOOL)_canReplaceTemplateNameInFileAtPath:(id)arg1 fileManager:(id)arg2 workspace:(id)arg3;
- (void)dealloc;
- (id)initWithContentsOfPath:(id)arg1;

@end