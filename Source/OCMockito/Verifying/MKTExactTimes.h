//  OCMockito by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2016 Jonathan M. Reid. See LICENSE.txt

#import <Foundation/Foundation.h>
#import "MKTVerificationMode.h"


@interface MKTExactTimes : NSObject <MKTVerificationMode>

- (instancetype)initWithCount:(NSUInteger)wantedNumberOfInvocations NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end
