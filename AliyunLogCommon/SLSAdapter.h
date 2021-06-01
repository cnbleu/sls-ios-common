//
//  SLSAdapter.h
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import <Foundation/Foundation.h>
#import "SLSConfig.h"
#import "IPlugin.h"

NS_ASSUME_NONNULL_BEGIN

@interface SLSAdapter : NSObject
{
    @private
    NSString * _channel;
    NSString * _channelName;
    NSString * _userNick;
    NSString * _longLoginNick;
    NSString * _loginType;
    NSMutableArray * _plugins;
}

- (void) setChannel: (NSString *)channel;
- (void) setChannelName: (NSString *)channelName;
- (void) setUserNick: (NSString *)userNick;
- (void) setLongLoginNick: (NSString *)longLoginNick;
- (void) setLoginType: (NSString *)loginType;

- (BOOL) initWithSLSConfig: (SLSConfig *) config;
- (BOOL) addPlugin: (IPlugin *) plugin;
- (void) removePlugin: (IPlugin *) plugin;
- (void) resetSecurityToken: (NSString *)accessKeyId secret: (NSString *)accessKeySecret token: (NSString *) token;
- (void) updateConfig: (SLSConfig *)config;
@end

NS_ASSUME_NONNULL_END
