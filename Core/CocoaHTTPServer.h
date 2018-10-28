//
//  CocoaHTTPServer.h
//  CocoaHTTPServer
//
//  Created by Jiar on 2018/10/8.
//  Copyright © 2018 Jiar. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <AppKit/AppKit.h>
#endif

//! Project version number for CocoaHTTPServer.
FOUNDATION_EXPORT double CocoaHTTPServerVersionNumber;

//! Project version string for CocoaHTTPServer.
FOUNDATION_EXPORT const unsigned char CocoaHTTPServerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CocoaHTTPServer/PublicHeader.h>

// Core -start
#import <CocoaHTTPServer/HTTPConnection.h>
#import <CocoaHTTPServer/HTTPLogging.h>
#import <CocoaHTTPServer/HTTPMessage.h>
#import <CocoaHTTPServer/WebSocket.h>
#import <CocoaHTTPServer/HTTPAuthenticationRequest.h>
#import <CocoaHTTPServer/HTTPServer.h>
#import <CocoaHTTPServer/HTTPResponse.h>
// Responses -start
#import <CocoaHTTPServer/HTTPAsyncFileResponse.h>
#import <CocoaHTTPServer/HTTPRedirectResponse.h>
#import <CocoaHTTPServer/HTTPDataResponse.h>
#import <CocoaHTTPServer/HTTPErrorResponse.h>
#import <CocoaHTTPServer/HTTPFileResponse.h>
#import <CocoaHTTPServer/HTTPDynamicFileResponse.h>
// Responses -end
// Mime -start
#import <CocoaHTTPServer/MultipartFormDataParser.h>
#import <CocoaHTTPServer/MultipartMessageHeader.h>
#import <CocoaHTTPServer/MultipartMessageHeaderField.h>
// Mime -end
// Categories -start
#import <CocoaHTTPServer/DDRange.h>
#import <CocoaHTTPServer/DDNumber.h>
#import <CocoaHTTPServer/DDData.h>
// Categories -end
// Core -end

// Extensions -start
// WebDAV -start
#import <CocoaHTTPServer/DAVResponse.h>
#import <CocoaHTTPServer/PUTResponse.h>
#import <CocoaHTTPServer/DAVConnection.h>
#import <CocoaHTTPServer/DELETEResponse.h>
// WebDAV -end
// Extensions -end
