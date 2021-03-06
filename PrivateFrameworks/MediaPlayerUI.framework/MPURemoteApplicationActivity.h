/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPURemoteApplicationActivity : NSObject {
    void *_mediaRemoteActivity;
}

@property (nonatomic, readonly) NSString *primaryAppDisplayID;
@property (nonatomic, readonly) NSString *secondaryAppDisplayID;
@property (nonatomic, readonly) unsigned int status;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void)dealloc;
- (id)init;
- (id)initWithMediaRemoteActivity:(void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)primaryAppDisplayID;
- (id)secondaryAppDisplayID;
- (unsigned int)status;
- (id)uniqueIdentifier;

@end
