//
//  TCData.m
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import "TCData.h"

@implementation TCData
+ (TCData *) createDefaultWithSLSConfig:(SLSConfig *)config {
    TCData *data = [[TCData alloc] init];
    
    [data setApp_id:[NSString stringWithFormat:@"%@@iOS", config.pluginAppId]];
    [data setOs:@"iOS"];
    [data setOs_version:@""];
    
    return data;
}

+ (NSString *)fillWithDashIfEmpty:(NSString *)content {
    return nil == content || [@"" isEqual:content] ? @"-" : content;
}
@end
