//
//  EncodedTextViewController.h
//  CryptApp
//
//  Created by Drue Thomas on 10/15/15.
//  Copyright (c) 2015 Drue Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EncodedTextViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *encodedTextLabel;

@property (nonatomic) NSString *myText;
@property (nonatomic) NSString *myCipherName;

@property (weak, nonatomic) IBOutlet UIButton *cipherCopyButton;


-(IBAction)copyText;

@end
