//
//  ToDoItem.h
//  ToDoList
//
//  Created by Song Songzheng on 1/5/15.
//  Copyright (c) 2015 ssz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
