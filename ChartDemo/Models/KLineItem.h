//
//  KLineItem.h
//  ChartDemo
//
//  Created by xdliu on 2016/12/2.
//  Copyright © 2016年 yoyo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KLineItem : NSObject <NSCopying>

// 开盘价
@property (nonatomic, copy) NSNumber *open;

// 收盘价
@property (nonatomic, copy) NSNumber *close;

// 最高价
@property (nonatomic, copy) NSNumber *high;

// 最低价
@property (nonatomic, copy) NSNumber *low;

// 日期
@property (nonatomic, copy) NSString *date;

// 成交量 
@property (nonatomic, copy) NSNumber *vol;

// 成交比例
@property (nonatomic, copy) NSString *rise_and_fall_rate;

//成交差
@property (nonatomic, copy) NSString *rise_and_fall_value;

@end
