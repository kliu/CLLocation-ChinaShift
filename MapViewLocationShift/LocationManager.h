//
//  LocationManager.h
//  MapViewLocationShift
//
//  Created by sai on 13-3-22.
//  Copyright (c) 2013年 xmsai. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^success) ();
typedef void (^failure) ();

@class CLLocation;
@interface LocationManager : NSObject

+ (id)shared;
- (void)startGetLocation;
- (CLLocation *)userLocation;

- (void)refreshLocation:(success)completeBlock failureBlock:(failure)failureBlock;
- (BOOL)isLocationTimeout;

@end
