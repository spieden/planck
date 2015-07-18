//
// Created by Daniel A Carleton on 7/17/15.
// Copyright (c) 2015 FikesFarm. All rights reserved.
//

#import "Foundation/Foundation.h"
#import "JavaScriptCore/JavaScriptCore.h"

@class NSString;

@protocol NSStringJSExports <JSExport>
    @property (readonly) NSUInteger length;

    - (BOOL)writeToFile:(NSString *)path atomically:(BOOL)useAuxiliaryFile encoding:(NSStringEncoding)enc error:(NSError **)error;
    + (instancetype)stringWithContentsOfFile:(NSString *)path encoding:(NSStringEncoding)enc error:(NSError **)error;

    + (NSString *)hello;
@end

// stringWithContentsOfFilePathEncodingError

@interface NSString (JSExports) <NSStringJSExports>
@end

