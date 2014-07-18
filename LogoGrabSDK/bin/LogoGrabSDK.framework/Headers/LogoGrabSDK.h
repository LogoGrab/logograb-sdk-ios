//
//  LogoGrabSDK.h
//  LogoGrabSDK
//
//  Created by Alessandro Prest on 12/10/13.
//  Copyright (c) 2013 Alessandro Prest. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "LogoGrabSDK/LogoGrabSDKDelegate.h"
@class TapNavigationController;
@interface LogoGrabSDK : NSObject <LogoGrabSDKDelegate> {
	id<LogoGrabSDKDelegate> delegate;
	
  TapNavigationController* navigationController;
  NSDictionary* pnsData;
}

@property(nonatomic,retain) id<LogoGrabSDKDelegate> delegate;

@property (nonatomic, copy) NSDictionary* homeData;
@property (nonatomic, copy) NSDictionary* pnsData;

-	(UINavigationController*) initializeWithKey: (NSString*) key;
-	(UINavigationController*) initializeWithKey: (NSString*) key : (UIApplication *)application;

-	(void) setShowLogoGrabLandingPage: (BOOL) value;
-	(void) setShowAdditionalFeatures: (BOOL) value;
-	(void) setShowCloseButton: (BOOL) value;


+ (void)setIgnoreReloadData: (BOOL) value;

+ (void)runPushNotification: (NSDictionary*) pnsData;
+ (void)handlePushNotification: (NSDictionary *)userInfo inapp:(BOOL)inapp;

+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)err;
+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;

@end
