//
//  CustomTableViewCell.h
//  CustomTable
//
//  Created by Drue Thomas on 9/12/15.
//  Copyright (c) 2015 Drue Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
