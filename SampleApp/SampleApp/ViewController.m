//
//  ViewController.m
//  TestSDK
//
//  Created by Alessandro Prest on 12/10/13.
//  Copyright (c) 2013 Alessandro Prest. All rights reserved.
//

#import "ViewController.h"
#import <LogoGrabSDK/LogoGrabSDK.h>

@implementation ViewController

- (void)viewDidLoad
{
	[super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void) viewDidAppear:(BOOL)animated
{
	
}

// LogoGrab supports portrait orientation
- (NSUInteger)supportedInterfaceOrientations {
  return UIInterfaceOrientationMaskPortrait;
}

-(IBAction)btnLaunchLogoGrab:(id)sender
{
	// Initialize the LogoGrab SDK and present the scanning window
	LogoGrabSDK* logograb = [[LogoGrabSDK alloc] init];
	
	// SDK settings in the following..
	
	// When TRUE the logo scanner displays the LogoGrab default landing page upon a successful scan
	// When FALSE the developer can customize the behaviour by responding to the delegate "logograbDidReceiveCode" (below)
	[logograb setShowLogoGrabLandingPage:TRUE];
	
	// By default the SDK doesn't show additional/social features on the left side bar
	[logograb setShowAdditionalFeatures:FALSE];
  
  // Display or not the close button
  [logograb setShowCloseButton:TRUE];
  
	UINavigationController* logograbNavigationController = [logograb initializeWithKey: _DEVKEY];
	if (logograbNavigationController == nil)
	{
		// Something went wrong during the initialization. Wrong credentials?
		NSLog(@"Couldnt initialize the LogoGrabSDK. Wrong credentials or no internet connection?");
		return;
	}
	
  // Setup the delegate to receive notifications
	logograb.delegate = self;
	
	// The LogoGrab SDK has been initialized successfully, present it to the user
	[self presentViewController: logograbNavigationController animated:TRUE completion:nil];
}

-(void) logograbDidReceiveResponse:(NSDictionary *)response
{
	// This is the delegate called by LogoGrabSDK whenever a positive scanned has occured.
	NSLog(@"ViewController logograbDidReceiveCode: %@", response);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
