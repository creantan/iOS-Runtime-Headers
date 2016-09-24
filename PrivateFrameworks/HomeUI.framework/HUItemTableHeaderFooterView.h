/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView {
    NSMutableArray * _constraints;
    UILabel * _messageLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _messageLabelInsets;
}

@property (nonatomic, copy) NSAttributedString *attributedMessage;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } messageLabelInsets;
@property (nonatomic) unsigned int numberOfLines;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (id)attributedMessage;
- (id)constraints;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)message;
- (id)messageLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageLabelInsets;
- (unsigned int)numberOfLines;
- (void)setAttributedMessage:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageLabelInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfLines:(unsigned int)arg1;

@end