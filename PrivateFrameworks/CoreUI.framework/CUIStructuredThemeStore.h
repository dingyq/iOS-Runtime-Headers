/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {
    NSString *_bundleID;
    NSMutableDictionary *_cache;
    NSLock *_cacheLock;
    NSCache *_namedRenditionKeyCache;
    CUICommonAssetStorage *_store;
    NSLock *_storeLock;
    unsigned int _themeIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int themeIndex;

- (BOOL)_canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(BOOL*)arg2 lookForSubstitutions:(BOOL)arg3;
- (void)_commonInit;
- (BOOL)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long)arg2 fromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg3;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 foundAsset:(BOOL*)arg2;
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 foundAsset:(BOOL*)arg2;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)allImageNames;
- (BOOL)assetExistsForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)authoredWithSchemaVersion;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)bundleID;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(BOOL*)arg2;
- (id)catalogGlobals;
- (void)clearRenditionCache;
- (unsigned int)colorSpaceID;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned int)arg3;
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (float)fontSizeForFontSizeType:(id)arg1;
- (BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
- (BOOL)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(id)arg2;
- (BOOL)hasPhysicalColorWithName:(id)arg1;
- (id)imagesWithName:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (int)maximumRenditionKeyTokenCount;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { float x1; float x2; }*)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(id)arg2;
- (void)setThemeIndex:(unsigned int)arg1;
- (unsigned int)themeIndex;
- (id)themeStore;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)zeroCodeGlyphList;

@end
