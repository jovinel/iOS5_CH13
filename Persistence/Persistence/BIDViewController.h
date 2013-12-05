//
//  BIDViewController.h
//  Persistence
//
//  Created by Maria Alice C. Lim on 12/5/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *field1;
@property (weak, nonatomic) IBOutlet UITextField *field2;
@property (weak, nonatomic) IBOutlet UITextField *field3;
@property (weak, nonatomic) IBOutlet UITextField *field4;

- (NSString *)dataFilePath;
- (void)applicationWillResignActive:(NSNotification *)notification;

@end
