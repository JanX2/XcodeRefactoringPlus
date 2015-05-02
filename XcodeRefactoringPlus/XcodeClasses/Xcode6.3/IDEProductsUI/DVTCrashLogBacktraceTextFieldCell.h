//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCrashLogBacktraceTextFieldCell : NSTextFieldCell
{
    NSMutableArray *_rangeValues;
    DVTCrashLogParsedStackFrame *_parsedStackFrame;
    struct _NSRange _emphasizedRange;
}

+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
@property(retain, nonatomic) DVTCrashLogParsedStackFrame *parsedStackFrame; // @synthesize parsedStackFrame=_parsedStackFrame;
@property(nonatomic) struct _NSRange emphasizedRange; // @synthesize emphasizedRange=_emphasizedRange;
- (void).cxx_destruct;
- (id)attributedStringValue;

@end