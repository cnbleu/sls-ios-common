//
//  IPlugin.h
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import <Foundation/Foundation.h>
#import "SLSConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface IPlugin : NSObject

@property(nonatomic, assign) BOOL debuggable;

- (NSString *) name;
- (BOOL) initWithSLSConfig: (SLSConfig *) config;

@end

NS_ASSUME_NONNULL_END
