#import <QuartzCore/QuartzCore.h>

@interface CornerRadiusAnimationAction : NSObject <CAAction>

@property CABasicAnimation *pendingAnimation;
@property CGFloat priorCornerRadius;

@end