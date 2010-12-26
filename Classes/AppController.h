//
//  AppController.h
//  KVCFun
//
//  Created by Bryan Koroleski on 12/26/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface AppController : NSObject {
    int fido;
}

- (int)fido;
- (void)setFido:(int)x;
@end
