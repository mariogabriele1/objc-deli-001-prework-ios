//  FISAppDelegate.h

#import <UIKit/UIKit.h>

@interface FISAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


- (NSString *)stringWithDeliLine: (NSArray *)deliLine;
- (void) addName:(NSString *)name toDeliLine:(NSMutableArray *)toDeliLine;
- (NSString *)serveNextCustomerInDeliLine: (NSMutableArray *) deliLine;





/*
 
 *  Declare your methods here!
 
 */

@end
