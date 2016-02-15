//
//  UIButton+EnlargeEdge.h
//  ChildrenLocation
//
//  Created by szalarm on 15/10/4.
//  Copyright © 2015年 szalarm. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <objc/runtime.h>
/*
 使用
 [enlargeButton setEnlargeEdge:20.0];
 或者[enlargeButton setEnlargeEdgeWithTop:20 right:20 bottom:20 left:10];
 */
@interface UIButton (EnlargeEdge)
- (void)setEnlargeEdge:(CGFloat) size;
- (void)setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;
@end

