//
//  Deck.m
//  Matchismo
//
//  Created by El Hassasna Fethi on 12/7/13.
//  Copyright (c) 2013 Fethi El Hassasna. All rights reserved.
//

#import "Deck.h"

@interface Deck()
@property (strong, nonatomic) NSMutableArray *cards;
@end

@implementation Deck

//Override the getter of cards
- (NSMutableArray *)cards {
    
    //Lazy instantiation
    if (!_cards) _cards = [[NSMutableArray alloc] init];
    
    return _cards;
}

- (void)addCard:(Card *)card atTop:(BOOL)atTop {
    if (atTop) {
        [self.cards insertObject:card atIndex:0];
    } else {
        [self.cards addObject:card];
    }
    
}

- (void)addCard:(Card *)card {
    [self addCard:card atTop:NO];
}

- (Card *)drawRandomCard {
    
    Card *ramdomCard = nil;
    
    if ([self.cards count]) {
        unsigned index = arc4random() % [self.cards count];
        ramdomCard = self.cards[index];
        [self.cards removeObjectAtIndex:index];

    }
    
    return ramdomCard;
}

@end
