//
//  SCHomeTableViewCell.h
//  SocialProject
//
//  Created by mac on 2017/8/24.
//  Copyright © 2017年 msw. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end

