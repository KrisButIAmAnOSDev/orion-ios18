#import <TargetConditionals.h>

#if !(TARGET_OS_IPHONE || TARGET_OS_MAC)
#error This copy of Orion was compiled for an unsupported platform. Please check that you are targeting the right platform.
#endif
