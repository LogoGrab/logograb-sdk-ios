//
//  LogoGrabSDKDelegate.h
//
//

#import <Foundation/Foundation.h>

@class LogoGrabSDK;

@protocol LogoGrabSDKDelegate

- (void) logograbDidReceiveResponse: (NSDictionary*)response;

@end