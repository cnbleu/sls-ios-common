//
//  SLSConfig.h
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SLSConfig : NSObject
@property(nonatomic, assign, getter=debuggable) BOOL debuggable;
@property(nonatomic, assign) NSString *appVersion;
@property(nonatomic, assign) NSString *appName;

@property(nonatomic, assign) NSString * endpoint;
@property(nonatomic, assign) NSString * accessKeyId;
@property(nonatomic, assign) NSString * accessKeySecret;
@property(nonatomic, assign) NSString * securityToken;

@property(nonatomic, assign) NSString * pluginAppId;
@property(nonatomic, assign) NSString * pluginLogproject;

@property(nonatomic, assign) NSString * channel;
@property(nonatomic, assign) NSString * channelName;
@property(nonatomic, assign) NSString * userNick;
@property(nonatomic, assign) NSString * longLoginNick;
@property(nonatomic, assign) NSString * userId;
@property(nonatomic, assign) NSString * longLoginUserId;
@property(nonatomic, assign) NSString * loginType;
@end

NS_ASSUME_NONNULL_END
