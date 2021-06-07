//
//  AliyunLogCommon.h
//  AliyunLogCommon
//
//  Created by gordon on 2021/5/19.
//

#import <Foundation/Foundation.h>

//! Project version number for AliyunLogCommon.
FOUNDATION_EXPORT double AliyunLogCommonVersionNumber;

//! Project version string for AliyunLogCommon.
FOUNDATION_EXPORT const unsigned char AliyunLogCommonVersionString[];

#ifndef AliyunlogCommon_h
#define AliyunlogCommon_h

#define SLSLog(fmt, ...) NSLog((@"[SLSiOS] %s " fmt), __FUNCTION__, ##__VA_ARGS__);
#ifdef DEBUG
//    #define SLSLog(fmt, ...) NSLog((@"SLSiOS. %s%s:%d " fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
    #define SLSLogV(fmt, ...) NSLog((@"[SLSiOS] %s:%d: " fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
    #define SLSLogV(...);
#endif

#endif /* AliyunlogCommon_h */

// In this header, you should import all the public headers of your framework using statements like #import <AliyunLogCommon/PublicHeader.h>
//#import <AliyunLogCommon/SLSLog.h>
#import <AliyunLogCommon/IPlugin.h>
#import <AliyunLogCommon/SLSAdapter.h>
#import <AliyunLogCommon/SLSConfig.h>
#import <AliyunLogCommon/TCData.h>
