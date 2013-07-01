//
//  PDFEncodingDifferences.h
//  PDFKitten
//
//  Created by Kolyvan on 29.06.13.
//  Copyright (c) 2013 Konstantin Bukreev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PDFFont.h"

@interface PDFEncodingDifferences : NSObject

- (id) initWithArray:(CGPDFArrayRef)array;

- (NSUInteger) mapCid:(unichar)cid
         withEncoding:(CharacterEncoding)encoding;

- (NSUInteger) cidForName:(NSString *)name;

- (NSUInteger)cidCharacter:(unichar)unicode
              withEncoding:(CharacterEncoding)encoding;

@end
