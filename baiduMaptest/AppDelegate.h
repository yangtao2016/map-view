//
//  AppDelegate.h
//  baiduMaptest
//
//  Created by zhixian on 16/3/31.
//  Copyright © 2016年 zhixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Map/BMKMapView.h>//只引入所需的单个头文件

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    BMKMapManager* _mapManager;
}
@property (strong, nonatomic) UIWindow *window;


@end

