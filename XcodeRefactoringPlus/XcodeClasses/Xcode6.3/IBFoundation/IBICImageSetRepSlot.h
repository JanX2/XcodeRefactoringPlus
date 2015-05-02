//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICImageSetRepSlot : IBICMultipartImageRepSlot
{
    IBICIdiom *_idiom;
    IBICSubtype *_subtype;
    IBICScale *_scale;
    IBICScreenWidth *_screenWidth;
    IBICWidthClass *_widthClass;
    IBICHeightClass *_heightClass;
}

+ (id)defaultSlot;
+ (id)slotWithIdiom:(id)arg1 scale:(id)arg2 screenWidth:(id)arg3;
+ (id)slotWithIdiom:(id)arg1 subtype:(id)arg2 scale:(id)arg3 widthClass:(id)arg4 heightClass:(id)arg5;
+ (id)orderedComponentClasses;
@property(readonly) IBICHeightClass *heightClass; // @synthesize heightClass=_heightClass;
@property(readonly) IBICWidthClass *widthClass; // @synthesize widthClass=_widthClass;
@property(readonly) IBICScreenWidth *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSubtype *subtype; // @synthesize subtype=_subtype;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)scaleKey;
- (id)suggestedRepNameForMultipartImageSetName:(id)arg1;
- (id)detailAreaKey;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayName;
- (void)captureComponents;

@end