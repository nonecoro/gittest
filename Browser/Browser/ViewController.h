//
//  ViewController.h
//  Browser
//
//  Created by none on 14/01/02.
//  Copyright (c) 2014年 mycompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *webView;

- (IBAction)showWebSite:(UITextField *)sender;

@end
