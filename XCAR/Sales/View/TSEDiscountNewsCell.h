//
//  TSEDiscountNewsCell.h
//  XCAR
//
//  Created by Morris on 9/22/15.
//  Copyright (c) 2015 Samtse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TSEDiscountNewsCellFrame;
@interface TSEDiscountNewsCell : UITableViewCell

@property (nonatomic, strong) TSEDiscountNewsCellFrame *discountNewsCellFrame;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
