/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

/*************
The networking code of the DCMFramework is predominantly a port of the 11/4/04 version of the java pixelmed toolkit by David Clunie.
htt://www.pixelmed.com   
**************/


#import <Cocoa/Cocoa.h>
#import "DCMAcceptRequestPDU.h"


@interface DCMRequestPDU : DCMAcceptRequestPDU {

}

+ (id)requestWithData:(NSData *)data;
+ (id)requestWithParameters:(NSDictionary *)params;

@end
