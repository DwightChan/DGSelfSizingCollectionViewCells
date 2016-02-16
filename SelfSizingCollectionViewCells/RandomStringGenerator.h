//
//  RandomStringGenerator.h
//  SelfSizingCollectionViewCells
//
//  Created by Daniel Galasko on 2016/02/16.
//  Copyright © 2016 Galasko. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RandomStringGenerator : NSObject
+ (NSString *)randomStringWithLength:(NSUInteger)length;
@end
