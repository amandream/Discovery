//
//  SCPostDetailViewController.h
//  SocialProject
//
//  Created by mac on 2017/8/29.
//  Copyright © 2017年 msw. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
