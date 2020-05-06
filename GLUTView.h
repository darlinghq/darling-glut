#import <AppKit/AppKit.h>
#import "glutf90.h"

@interface GLUTView : NSView
- (NSPoint)windowPosition;
- (NSSize)windowSize;
- (NSTimeInterval)joystickPollInterval;
@end