//
//  ModelController.h
//  engcards
//
//  Created by Larisa Zakharova on 7/8/17.
//  Copyright © 2017 Larisa Zakharova. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

