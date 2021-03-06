//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKLightNode : SKNode
{
    BOOL _enabled;
    unsigned int _categoryBitMask;
    NSColor *_lightColor;
    NSColor *_ambientColor;
    NSColor *_shadowColor;
    double _falloff;
}

@property(nonatomic) unsigned int categoryBitMask; // @synthesize categoryBitMask=_categoryBitMask;
@property(nonatomic) double falloff; // @synthesize falloff=_falloff;
@property(retain, nonatomic) NSColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) NSColor *ambientColor; // @synthesize ambientColor=_ambientColor;
@property(retain, nonatomic) NSColor *lightColor; // @synthesize lightColor=_lightColor;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setLightCategoryBitMask:(unsigned int)arg1;
- (unsigned int)lightCategoryBitMask;
- (void)setLightDecay:(double)arg1;
- (double)lightDecay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end