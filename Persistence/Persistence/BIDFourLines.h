//
//  BIDFourLines.h
//  Persistence
//
//  Created by Maria Alice C. Lim on 12/5/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BIDFourLines : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *field1;
@property (copy, nonatomic) NSString *field2;
@property (copy, nonatomic) NSString *field3;
@property (copy, nonatomic) NSString *field4;

@end
