#import "RenderingStateStack.h"
#import "PDFRenderingState.h"

@implementation RenderingStateStack

+ (RenderingStateStack *)stack {
	return [[[RenderingStateStack alloc] init] autorelease];
}

- (id)init
{
	if ((self = [super init]))
	{
		stack = [[NSMutableArray alloc] init];
		PDFRenderingState *rootRenderingState = [[PDFRenderingState alloc] init];
		[self pushRenderingState:rootRenderingState];
		[rootRenderingState release];
	}
	return self;
}

/* The rendering state currently on top of the stack */
- (PDFRenderingState *)topRenderingState
{
	return [stack lastObject];
}

/* Push a rendering state to the stack */
- (void)pushRenderingState:(PDFRenderingState *)state
{
	[stack addObject:state];
}

/* Pops the top rendering state off the stack */
- (PDFRenderingState *)popRenderingState
{
	PDFRenderingState *state = [stack lastObject];
	[[stack retain] autorelease];
	[stack removeLastObject];
	return state;
}


#pragma mark - Memory Management

- (void)dealloc
{
	[stack release];
	[super dealloc];
}

@end
