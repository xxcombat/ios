//
//  CityClass.h
//
//  Created by admin on 09.03.15.
//  Copyright (c) 2015 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CityClass : NSObject

@property (nonatomic, strong) NSString *nameCity;
@property (nonatomic, strong) NSNumber *idCity;
@property (nonatomic, strong) NSNumber *tempCity;
@property (nonatomic, strong) NSString *dateTemp;
@property (nonatomic, strong) NSString *weather;
@property (nonatomic, strong) NSString *icon;

+ (CityClass *)cityWithId:(NSNumber *)identifier name:(NSString *)name;
+ (CityClass *)cityWithDictionary:(NSDictionary *)dict;

- (NSURL *)weatherIconURL;
+ (NSURL *)weatherBaseURL:(NSString *)identifier;


@end
