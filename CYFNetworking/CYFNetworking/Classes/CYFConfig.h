//
//  CYFConfig.h
//  CYFNetworking
//
//  Created by tsaievan on 1/4/2019.
//  Copyright © 2019 tsaievan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *CYFDefaultGeneralErrorString;

@interface CYFConfig : NSObject <NSCopying>

/**
 出现网络请求时, 为了给用户比较好的用户体验,而使用的错误提示文字
 
 默认为: CYFDefaultGeneralErrorString
 */
@property (nonatomic, copy) NSString *generalErrorTypeStr;



@end

NS_ASSUME_NONNULL_END
