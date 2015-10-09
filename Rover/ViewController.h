//
//  ViewController.h
//  Rover
//
//  Created by wei zhu on 6/4/15.
//  Copyright (c) 2015 wei zhu. All rights reserved.
//

#import <UIKit/UIKit.h>

NSInputStream *inputStream;
NSOutputStream *outputStream;

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UILabel *returnCommand;


- (IBAction)connectUp:(id)sender;
- (IBAction)forwardDown:(id)sender;
- (IBAction)forwardUp:(id)sender;
- (IBAction)leftDown:(id)sender;
- (IBAction)LeftUp:(id)sender;
- (IBAction)rigthDown:(id)sender;
- (IBAction)rightUp:(id)sender;
- (IBAction)backDown:(id)sender;
- (IBAction)backUp:(id)sender;

@end

