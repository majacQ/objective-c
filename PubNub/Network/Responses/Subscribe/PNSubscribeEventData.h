#import <PubNub/PNBaseOperationData.h>


NS_ASSUME_NONNULL_BEGIN

#pragma mark Interface declaration

/// General real-time subscription update.
///
/// Object conatins general information which is common for every entry in subscription request response.
@interface PNSubscribeEventData : PNBaseOperationData


#pragma mark - Properties

/// User provided message type (set only when `publish` called with `meta`).
@property (nonatomic, nullable, readonly, strong) NSDictionary *userMetadata;

/// Actual name of subscription through which event has been delivered.
///
/// Actual name of subscription through which event has been delivered.PubNub client can be used to subscribe to the 
/// group of channels to receive updates and (group name will be set for field). With this approach there will be no
/// need to separately add *N* number of channels to `subscribe` method call.
@property(strong, nonatomic, readonly) NSString *subscription;

/// Event "publish" time.
///
/// This is the time when data has been received / generated by **PubNub** network.
@property(strong, nonatomic, readonly) NSNumber *timetoken;

/// Name of channel where update received.
@property(strong, nonatomic, readonly) NSString *channel;

#pragma mark -


@end

NS_ASSUME_NONNULL_END
