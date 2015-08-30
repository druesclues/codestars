//
//  ViewController.m
//  HelloWorld
//
//  Created by Drue Thomas on 8/22/15.
//  Copyright (c) 2015 AppCoda. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showMessage
{
    UIAlertController *helloWorldAlert = [UIAlertController alertControllerWithTitle:@"My FirstApp" message:@"Hello World!" preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction *okayAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:nil];
    
    [helloWorldAlert addAction:okayAction];
    
    // Display the Hello World Message
    [self presentViewController:helloWorldAlert animated:YES completion:nil];
}


@end
