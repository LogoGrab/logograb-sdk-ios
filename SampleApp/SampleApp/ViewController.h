//
//  ViewController.h
//  SampleApp
//
//  Created by Alessandro Prest on 12/20/13.
//  Copyright (c) 2013 Alessandro Prest. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LogoGrabSDK/LogoGrabSDKDelegate.h>

#define _DEVKEY @"YOUR_DEV_KEY"

@interface ViewController : UIViewController <LogoGrabSDKDelegate>

	-(IBAction)btnLaunchLogoGrab:(id)sender;

@end

