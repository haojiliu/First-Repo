//
//  ModelController.h
//  Windows_8_UI_test
//
//  Created by Haoji (David) Liu on 10/16/12.
//  Copyright (c) 2012 David Liu [刘昊骥]. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
