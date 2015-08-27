//
//  ModelController.h
//  test
//
//  Created by Bijendra Singh Bhatia on 27/08/15.
//  Copyright (c) 2015 Blissbooker. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

