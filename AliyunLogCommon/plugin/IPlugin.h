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
- (void) resetSecurityToken:(NSString *)accessKeyId secret:(NSString *)accessKeySecret token:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
