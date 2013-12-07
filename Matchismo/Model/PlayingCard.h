//
//  PlayingCard.h
//  Matchismo
//
//  Created by El Hassasna Fethi on 12/7/13.
//  Copyright (c) 2013 Fethi El Hassasna. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
