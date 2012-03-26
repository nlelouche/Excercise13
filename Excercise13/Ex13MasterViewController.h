//
//  Ex13MasterViewController.h
//  Excercise13
//
//  Created by TPG on 3/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TwitterTimeLine.h"

@class Ex13DetailViewController;

@interface Ex13MasterViewController : UITableViewController

@property (nonatomic, retain) TwitterTimeLine *twitterTweets;
@property (nonatomic, retain) Ex13DetailViewController *detailViewController;

@end
