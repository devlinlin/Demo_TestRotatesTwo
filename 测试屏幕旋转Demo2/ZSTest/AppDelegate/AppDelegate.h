//
//  AppDelegate.h
//  Test
//
//  Created by zhoushuai on 16/3/7.
//  Copyright © 2016年 zhoushuai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

//记录当前界面是否支持横竖屏旋转
@property (assign, nonatomic)BOOL allowAutoRotate;

@end

