//
//  SCPost.h
//  SocialProject
//
//  Created by mac on 2017/8/19.
//  Copyright © 2017年 msw. All rights reserved.
//

#import <Foundation/Foundation.h>

@class  CLLocation;

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) NSDate *postDate;
@property (nonatomic, strong) CLLocation *location;


- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end
