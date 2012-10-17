//
//  DataViewController.h
//  Windows_8_UI_test
//
//  Created by Haoji (David) Liu on 10/16/12.
//  Copyright (c) 2012 David Liu [刘昊骥]. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
