#import <Foundation/Foundation.h>

@class PDFStringDetector;

@protocol PDFStringDetectorDelegate <NSObject>
@optional
- (void)detectorDidStartMatching:(PDFStringDetector *)stringDetector;
- (void)detectorFoundString:(PDFStringDetector *)detector;
- (void)detector:(PDFStringDetector *)detector didScanCharacter:(unichar)character;
@end
