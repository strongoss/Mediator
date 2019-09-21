//
//  EVSProtocol.h
//  EVSRouter
//
//  Created by 国家电网 on 2019/9/20.
//  Copyright © 2019 国家电网. All rights reserved.
//

#ifndef EVSProtocol_h
#define EVSProtocol_h

#import <UIKit/UIKit.h>

#define BifrostModuleDefaultPriority 100

@protocol BifrostModuleProtocol <UIApplicationDelegate, NSObject>

@required
/**
 Each module should be a singleton class
 
 @return module instance
 */
+ (instancetype)sharedInstance;

/**
 module setup method, will be invoked by module manager when app is launched or module is loaded.
 It's invoked in main thread synchronourly.
 It's strong recommended to run its content in background thread asynchronously to save launch time.
 */
- (void)setup;

@optional

/**
 The priority of the module to be setup. 0 is the lowest priority;
 If not provided, the default priority is BifrostModuleDefaultPriority;
 
 @return the priority
 */
+ (NSUInteger)priority;


/**
 Whether to setup the module synchronously in main thread.
 If it's not implemeted, default value is NO, module will be sutup asyhchronously in backgorud thread.
 
 @return whether synchronously
 */
+ (BOOL)setupModuleSynchronously;

@end

#endif /* EVSProtocol_h */
