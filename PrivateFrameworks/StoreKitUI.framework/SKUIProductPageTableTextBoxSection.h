/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    BOOL _isExpanded;
    int _stringIndex;
    NSString *_subtitle;
    SKUILayoutCache *_textLayoutCache;
    NSString *_title;
}

@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) int stringIndex;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) SKUILayoutCache *textLayoutCache;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)colorScheme;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (int)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setStringIndex:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (int)stringIndex;
- (id)subtitle;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textLayoutCache;
- (id)title;

@end
