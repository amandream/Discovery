//
//  SCCreatePostViewController.h
//  SocialProject
//
//  Created by mac on 2017/8/29.
//  Copyright © 2017年 msw. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end

@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

