#import <Foundation/Foundation.h>

@class PDFRenderingState;

@interface PDFSelection : NSObject

+ (PDFSelection *)selectionWithState:(PDFRenderingState *)state;

@property (nonatomic, readonly) CGRect frame;
@property (nonatomic, readonly) CGAffineTransform transform;

@property (nonatomic, copy) PDFRenderingState *initialState;
@property (nonatomic, copy) PDFRenderingState *finalState;

@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat descent;
@property (nonatomic, readonly) CGFloat ascent;

@property (nonatomic, readwrite) NSUInteger foundLocation;

@end
