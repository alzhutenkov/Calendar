//
//  UIGCalendarMonthFast.h
//  emptyProject
//
//  Created by A.O. on 08.01.15.
//  Copyright (c) 2015 A.O. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIGCalendarMonthTmp : UIView{
    NSMutableArray* dayPositionDictionaries;
    int currentMonth;
    int currentYear;
    int days_in_this_month;
    int first_is_dayn;
}

- (int) getCurrentMonth;
- (int) getCurrentYear;

- (void) setMonth:(int)month withYear:(int)year;
- (int) getDaysInThisMonth;
- (NSMutableArray *) getDayPositionDictionaries;

- (void) selectAllDaysInMonth;
- (void) unselectAllDaysInMonth;


@property UIFont *font;
@property UIColor* textColor;
@property UILabel* monthLabel;
//yearLabel
@property UILabel* yearLabel;


@end
