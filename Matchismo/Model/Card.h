//
//  Card.h
//  Matchismo
//
//  Created by El Hassasna Fethi on 12/7/13.
//  Copyright (c) 2013 Fethi El Hassasna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
