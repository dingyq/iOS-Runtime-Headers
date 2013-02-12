/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSConditionLock, NSMutableArray, NSMutableDictionary, NSMutableSet, PLImageCache;

@interface PLImageLoadingThread : NSObject {
    PLImageCache *_cache;
    NSConditionLock *_lock;
    BOOL _paused;
    NSMutableSet *_queues;
    int _requestInsertionPositionHigh;
    int _requestInsertionPositionNormal;
    NSMutableArray *_requests;
    NSMutableDictionary *_requestsByKey;
    BOOL _running;
}

- (id)_dequeueRequest:(id)arg1;
- (id)_dequeueRequestAtIndex:(int)arg1;
- (void)_enqueueRequest:(id)arg1 withPriority:(int)arg2;
- (void)_run;
- (void)_start;
- (void)addImageLoadingQueue:(id)arg1;
- (void)cacheWasDeallocated;
- (void)cancelLoadFromSource:(id)arg1 forObject:(id)arg2 forImageLoadingQueue:(id)arg3;
- (void)dealloc;
- (id)initWithImageCache:(id)arg1;
- (id)loadImageFromSource:(id)arg1 forObject:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 completion:(id)arg6;
- (void)pause;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)resume;
- (void)stop;

@end