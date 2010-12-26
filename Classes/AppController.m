//
//  AppController.m
//  KVCFun
//
//  Created by Bryan Koroleski on 12/26/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import "AppController.h"


@implementation AppController
@synthesize fido;

- (id)init {
    if ((self = [super init])) {
        [self setValue:[NSNumber numberWithInt:5] forKey:@"fido"];
        NSNumber *n = [self valueForKey:@"fido"];
        NSLog(@"fido = %@", n);
    }
    
    return self;
}

- (void)incrementFido:(id)sender {
    [self setFido:[self fido] + 1];
}

- (void)dealloc {
    // Clean-up code here.
    
    [super dealloc];
}

@end
