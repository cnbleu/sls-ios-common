//
//  TCData.h
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import <Foundation/Foundation.h>
#import "SLSConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCData : NSObject
@property(nonatomic, assign) NSString * app_id;
@property(nonatomic, assign) NSString * app_name;
@property(nonatomic, assign) NSString * app_version;
@property(nonatomic, assign) NSString * sdk_version;
@property(nonatomic, assign) NSString * sdk_type;
@property(nonatomic, assign) NSString * channel;
@property(nonatomic, assign) NSString * channel_name;
@property(nonatomic, assign) NSString * user_nick;
@property(nonatomic, assign) NSString * long_login_nick;
@property(nonatomic, assign) NSString * logon_type;
@property(nonatomic, assign) NSString * imei;
@property(nonatomic, assign) NSString * imsi;
@property(nonatomic, assign) NSString * imeisi;
@property(nonatomic, assign) NSString * idfa;
@property(nonatomic, assign) NSString * brand;
@property(nonatomic, assign) NSString * device_model;
@property(nonatomic, assign) NSString * resolution;
@property(nonatomic, assign) NSString * os;
@property(nonatomic, assign) NSString * os_version;
@property(nonatomic, assign) NSString * carrier;
@property(nonatomic, assign) NSString * access;
@property(nonatomic, assign) NSString * access_subtype;
@property(nonatomic, assign) NSString * network_type;
@property(nonatomic, assign) NSString * school;
@property(nonatomic, assign) NSString * root;
@property(nonatomic, assign) NSString * reserve1;
@property(nonatomic, assign) NSString * reserve2;
@property(nonatomic, assign) NSString * reserve3;
@property(nonatomic, assign) NSString * reserve4;
@property(nonatomic, assign) NSString * reserve5;
@property(nonatomic, assign) NSString * reserve6;
@property(nonatomic, assign) NSString * reserves;
@property(nonatomic, assign) NSString * local_time;
@property(nonatomic, assign) NSString * local_timestamp;
@property(nonatomic, assign) NSString * reach_time;
@property(nonatomic, assign) NSString * reach_time_stamp;
@property(nonatomic, assign) NSString * page;
@property(nonatomic, assign) NSString * event_id;
@property(nonatomic, assign) NSString * event_type;
@property(nonatomic, assign) NSString * arg1;
@property(nonatomic, assign) NSString * arg2;
@property(nonatomic, assign) NSString * arg3;
@property(nonatomic, assign) NSString * args;
@property(nonatomic, assign) NSString * is_active;
@property(nonatomic, assign) NSString * start_count;
@property(nonatomic, assign) NSString * run_time;
@property(nonatomic, assign) NSString * active_uvmid;
@property(nonatomic, assign) NSString * active_user_nick;
@property(nonatomic, assign) NSString * page_stay_time;
@property(nonatomic, assign) NSString * client_ip;
@property(nonatomic, assign) NSString * country;
@property(nonatomic, assign) NSString * province;
@property(nonatomic, assign) NSString * city;
@property(nonatomic, assign) NSString * district;


+ (TCData *) createDefaultWithSLSConfig: (SLSConfig *) config;
+ (NSString *) fillWithDashIfEmpty: (NSString *) content;
@end

NS_ASSUME_NONNULL_END
