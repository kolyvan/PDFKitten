#import <Foundation/Foundation.h>

@interface PDFCMap : NSObject {

	/* CMap ranges */
	NSMutableArray *codeSpaceRanges;
	
	/* Character mappings */
	NSMutableDictionary *characterMappings;
	
	/* Character range mappings */
	NSMutableDictionary *characterRangeMappings;
}

/* Initialize with PDF stream containing a CMap */
- (id)initWithPDFStream:(CGPDFStreamRef)stream;

/* Initialize with a string representation of a CMap */
- (id)initWithString:(NSString *)string;

/* Unicode mapping for character ID */
- (NSUInteger)unicodeCharacter:(unichar)cid;

- (NSUInteger)cidCharacter:(unichar)unicode;

@property (nonatomic, retain) NSMutableArray *codeSpaceRanges;
@property (nonatomic, retain) NSMutableDictionary *characterMappings;
@property (nonatomic, retain) NSMutableDictionary *characterRangeMappings;

@end
