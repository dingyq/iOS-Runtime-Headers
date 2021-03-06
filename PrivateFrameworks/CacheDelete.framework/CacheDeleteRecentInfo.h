/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteRecentInfo : NSObject <NSSecureCoding> {
    NSMutableDictionary *_volumes;
}

@property (nonatomic, retain) NSMutableDictionary *volumes;

+ (id)cacheDeleteRecentInfo:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolumes:(id)arg1;
- (void)setVolumes:(id)arg1;
- (int)validate:(double)arg1 threshold:(id)arg2;
- (id)volumes;

@end
