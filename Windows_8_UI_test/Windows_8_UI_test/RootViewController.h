//
//  RootViewController.h
//  Windows_8_UI_test
//
//  Created by Haoji (David) Liu on 10/16/12.
//  Copyright (c) 2012 David Liu [刘昊骥]. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
