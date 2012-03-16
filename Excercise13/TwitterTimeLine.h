//
//  TwitterTimeLine.h
//  Excercise13
//
//  Created by TPG on 3/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TwitterTimeLine : NSObject <NSXMLParserDelegate>



@property (nonatomic, retain) NSMutableArray *tweets;
-(void) startLoadingTweets;


@end
