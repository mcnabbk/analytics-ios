#import <Foundation/Foundation.h>
#import "SEGIntegration.h"
#import "SEGHTTPClient.h"
#import "SEGStorage.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const SEGSegmentDidSendRequestNotification;
extern NSString *const SEGSegmentRequestDidSucceedNotification;
extern NSString *const SEGSegmentRequestDidFailNotification;


@interface SEGSegmentIntegration : NSObject <SEGIntegration>

- (id)initWithAnalytics:(SEGAnalytics *)analytics httpClient:(SEGHTTPClient *)httpClient fileStorage:(id<SEGStorage>)fileStorage userDefaultsStorage:(id<SEGStorage>)userDefaultsStorage;

@end

NS_ASSUME_NONNULL_END
