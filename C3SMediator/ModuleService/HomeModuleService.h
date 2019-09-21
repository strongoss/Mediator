//
//  HomeModuleService.h
//  Home


#ifndef HomeModuleService_h
#define HomeModuleService_h


#import "EVSHeader.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Notifications
static NSNotificationName kNotificationHomePageDidAppear = @"kNotificationHomePageDidAppear";

#pragma mark - URL routers
static NSString *const kRouteHomePage = @"//home/home_page";


#pragma mark - Model Protocols


#pragma mark - Module Protocol
/**
 The services provided by home module to other modules
 */
@protocol HomeModuleService <NSObject>

@end

NS_ASSUME_NONNULL_END
#endif /* HomeModuleService_h */
