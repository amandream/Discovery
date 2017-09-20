//
//  SCHomeViewController.h
//  SocialProject
//
//  Created by mac on 2017/8/24.
//  Copyright © 2017年 msw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end

