//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLLDBProcessControl : NSObject
{
    int _action;
    int _scope;
    DBGLLDBThread *_thread;
    unsigned long long _arg0;
    DVTTextDocumentLocation *_location;
}

@property(readonly) DVTTextDocumentLocation *location; // @synthesize location=_location;
@property(readonly) unsigned long long argument; // @synthesize argument=_arg0;
@property(readonly) DBGLLDBThread *thread; // @synthesize thread=_thread;
@property(readonly) int scope; // @synthesize scope=_scope;
@property(readonly) int action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAction:(int)arg1 scope:(int)arg2 thread:(id)arg3 arg:(unsigned long long)arg4 location:(id)arg5;
- (id)initWithAction:(int)arg1 scope:(int)arg2 thread:(id)arg3 arg:(unsigned long long)arg4;

@end