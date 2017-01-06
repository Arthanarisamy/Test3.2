#import <Foundation/Foundation.h>

@interface NativeService : NSObject
    -(void)execute:(NSDictionary *)jsonDict wbView:(UIWebView *)webView;
@end
