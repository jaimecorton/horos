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


#import <Cocoa/Cocoa.h>

#ifdef __cplusplus
#include "dsrdoc.h"
#else
typedef char DSRDocument;
#endif

#import "ROI.h"

@interface SRAnnotation : NSObject {
	DSRDocument			*document;
	id					image;
	NSArray				*_rois;
	BOOL				_newSR;
	NSString			*_seriesInstanceUID;
}

+ (NSString*) getFilenameFromSR:(NSString*) path;
- (id)initWithROIs:(NSArray *)ROIs  path:(NSString *)path forImage:(NSManagedObject*) im;
- (id)initWithContentsOfFile:(NSString *)path;
- (void)addROIs:(NSArray *)someROIs;
- (void)addROI:(ROI *)aROI;
- (NSArray *)ROIs;
- (BOOL)writeToFileAtPath:(NSString *)path;
- (void)saveAsHTML;
- (NSString *)seriesInstanceUID;
- (void)setSeriesInstanceUID: (NSString *)seriesInstanceUID;
- (NSString *)sopInstanceUID;
- (NSString *)sopClassUID;
- (NSString *)seriesDescription;
- (NSString *)seriesNumber;
- (int)frameIndex;

@end
