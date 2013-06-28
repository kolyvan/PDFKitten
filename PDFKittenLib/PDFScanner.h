#import <Foundation/Foundation.h>

@class PDFFontCollection;

@interface PDFScanner : NSObject

+ (PDFScanner *)scannerWithPage:(CGPDFPageRef)page;

- (NSArray *)select:(NSString *)keyword;

@property (nonatomic, retain) PDFFontCollection *fontCollection;
@property (nonatomic, retain) NSMutableString *content;
@property (nonatomic, retain) NSMutableArray *selections;

@end
