/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIMoreListCellLayoutManager, UITableView, UIBarButtonItem;



@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    BOOL _allowsCustomizing;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
}

@property(retain) NSArray *moreViewControllers;
@property BOOL allowsCustomizing;


- (void)_layoutCells;
- (void)_updateEditButton;
- (BOOL)allowsCustomizing;
- (void)setMoreViewControllers:(id)arg1;
- (id)moreViewControllers;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (id)tabBarItem;
- (id)table;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;

@end