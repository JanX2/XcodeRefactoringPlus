//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTemplateButtonCell : NSButtonCell
{
    struct CGPoint _origin;
    BOOL _useRectHighlight;
}

+ (id)sharedStorage;
+ (void)initialize;
- (id)alternateImage;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)useRectHighlight;
- (void)setUseRectHighlight:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end