//
//  GoodsModuleService.h
//  Goods


#ifndef GoodsModuleService_h
#define GoodsModuleService_h


#import "EVSHeader.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Notifications
//static NSNotificationName kNotification*** = @"kNotification***";

#pragma mark - URL routers
static NSString *const kRouteAllGoodsList = @"//goods/all_goods_list";
static NSString *const kRouteGoodsDetail = @"//goods/detail";
static NSString *const kRouteGoodsDetailParamId = @"id";

#pragma mark - Model Protocols
@protocol GoodsProtocol <NSObject>
- (NSString*)goodsId;
- (NSString*)name;
- (CGFloat)price;
- (NSInteger)inventory;
@end

#pragma mark - Module Protocol
/**
 The services provided by goods module to other modules
 */
@protocol GoodsModuleService <NSObject>

- (NSInteger)totalInventory;
- (NSArray<id<GoodsProtocol>>*)popularGoodsList; //热卖商品
- (NSArray<id<GoodsProtocol>>*)allGoodsList; //所有商品
- (id<GoodsProtocol>)goodsById:(nonnull NSString*)goodsId;

@end

NS_ASSUME_NONNULL_END

#endif /* GoodsModuleService_h */
