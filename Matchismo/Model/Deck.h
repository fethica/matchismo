//
//  Deck.h
//  Matchismo
//
//  Created by El Hassasna Fethi on 12/7/13.
//  Copyright (c) 2013 Fethi El Hassasna. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end
