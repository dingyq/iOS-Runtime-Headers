/* Generated by RuntimeBrowser.
 */

@protocol PUPhotosSharingTransitionDelegate

@required

- (struct CGPoint { float x1; float x2; })photosSharingTransition:(PUPhotosSharingTransition *)arg1 contentOffsetForKeyAssetIndexPath:(NSIndexPath *)arg2 inAssetCollectionsDataSource:(id <PHAssetCollectionDataSource>)arg3;
- (UICollectionViewLayout *)photosSharingTransition:(PUPhotosSharingTransition *)arg1 layoutForKeyAssetIndexPath:(NSIndexPath *)arg2 inAssetCollectionsDataSource:(id <PHAssetCollectionDataSource>)arg3;
- (void)photosSharingTransition:(PUPhotosSharingTransition *)arg1 setVisibility:(BOOL)arg2 forKeyAssetIndexPath:(NSIndexPath *)arg3 inAssetCollectionsDataSource:(id <PHAssetCollectionDataSource>)arg4;
- (UIView *)photosSharingTransition:(PUPhotosSharingTransition *)arg1 viewForTransitionWithAssetCollectionsDataSource:(id <PHAssetCollectionDataSource>)arg2;
- (void)photosSharingTransition:(PUPhotosSharingTransition *)arg1 willAnimatePresent:(BOOL)arg2;

@end
