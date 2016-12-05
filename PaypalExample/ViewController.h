//
//  ViewController.h
//  PaypalExample
//
//  Created by CI-07 on 3/7/16.
//  Copyright © 2016 CI-07. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BraintreeCore.h"
#import "BraintreeCard.h"
#import "BraintreePayPal.h"
#import "BraintreeUI.h"

@interface ViewController : UIViewController<BTDropInViewControllerDelegate>

@property (nonatomic, strong) BTAPIClient *braintreeClient;

- (IBAction)tappedMyPayButton:(id)sender;


@end

