#import <UIKit/UIKit.h>

@interface AddToDoViewController : UIViewController <UITextFieldDelegate>
- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *itemText;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

@end
