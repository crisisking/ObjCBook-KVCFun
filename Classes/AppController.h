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

- (IBAction)incrementFido:(id)sender;

@property(readwrite, assign) int fido;
@end
