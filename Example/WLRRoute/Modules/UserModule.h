//
//  UserModule.h
//  WLRRoute_Example
//
//  Created by Neo on 2018/5/14.
//  Copyright © 2018年 Neo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HBXCALLBACKHandler.h"
@interface UserModule : NSObject<HBModuleProtocol>
+(UIViewController *)LoginViewController:(NSString *)Phone;
@end
