//
//  SLSAdapter.m
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import "SLSAdapter.h"

@implementation SLSAdapter
- (void) setChannel: (NSString *)channel{
    _channel = channel;
}
- (void) setChannelName: (NSString *)channelName{
    _channelName = channelName;
}
- (void) setUserNick: (NSString *)userNick{
    _userNick = userNick;
}
- (void) setLongLoginNick: (NSString *)longLoginNick{
    _longLoginNick = longLoginNick;
}
- (void) setLoginType: (NSString *)loginType {
    _loginType = loginType;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _plugins = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)resetSecurityToken:(NSString *)accessKeyId secret:(NSString *)accessKeySecret token:(NSString *)token
{
    __block NSString *keyId = accessKeyId;
    __block NSString *keySecret = accessKeySecret;
    __block NSString *keyToken = token;
    
    [_plugins enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            IPlugin *plugin = obj;
            [plugin resetSecurityToken:keyId secret:keySecret token:keyToken];
    }];
}

#pragma mark - init adapter
- (BOOL) initWithSLSConfig:(SLSConfig *)config {
    
    [_plugins enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        IPlugin *plugin = obj;
        [plugin initWithSLSConfig:config];
    }];

    NSLog(@"ALSAdapter init end.");
    return YES;
}

#pragma mark - plugin manager
- (BOOL) addPlugin: (IPlugin *) plugin {
    if (nil == plugin) {
        return NO;
    }
    
    if ([_plugins containsObject:plugin]) {
        return NO;
    }
    
    [_plugins addObject:plugin];
    return YES;
}
- (void) removePlugin: (IPlugin *) plugin{
    if ([_plugins containsObject:plugin]) {
        [_plugins removeObject:plugin];
    }
}
@end
