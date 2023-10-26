
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAvcamSpec.h"

@interface Avcam : NSObject <NativeAvcamSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Avcam : NSObject <RCTBridgeModule>
#endif

@end
