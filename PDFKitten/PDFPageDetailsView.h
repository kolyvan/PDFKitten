#import <UIKit/UIKit.h>
#import "PDFFontCollection.h"

@interface PDFPageDetailsView : UINavigationController <UITableViewDelegate, UITableViewDataSource> {
	PDFFontCollection *fontCollection;
}

- (id)initWithFont:(PDFFontCollection *)fontCollection;

@end
