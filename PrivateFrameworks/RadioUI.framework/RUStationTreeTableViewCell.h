/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSString, RUAudioPreviewView, SKUICircleProgressIndicator, UIButton, UILabel, UIView;

@interface RUStationTreeTableViewCell : UITableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UIButton *_addButton;
    RUAudioPreviewView *_audioPreviewView;
    int _cellDisplayStyle;
    UILabel *_nowPlayingTextLabel;
    BOOL _playing;
    UIView *_rightAccessoryView;
    BOOL _showsActivityIndicator;
    UILabel *_titleLabel;
}

@property(readonly) UIButton * addButton;
@property(readonly) RUAudioPreviewView * audioPreviewView;
@property int cellDisplayStyle;
@property(copy) NSString * nowPlayingText;
@property(getter=isPlaying) BOOL playing;
@property BOOL showsActivityIndicator;
@property(copy) NSString * title;
@property(readonly) UILabel * titleLabel;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (void)_applyAttributesForChangedCellStyleAnimated:(BOOL)arg1;
- (id)_audioPreviewAnimationForShowing:(BOOL)arg1;
- (void)_layoutSubviewsWithTitleLabelNowPlayingOffset:(BOOL)arg1 isPlaying:(BOOL)arg2;
- (id)_newAudioPreviewView;
- (void)_showChangeToPlaying:(BOOL)arg1 animated:(BOOL)arg2;
- (float)_textLabelXWithIsPlaying:(BOOL)arg1;
- (id)addButton;
- (id)audioPreviewView;
- (int)cellDisplayStyle;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (id)nowPlayingText;
- (void)setCellDisplayStyle:(int)arg1;
- (void)setNowPlayingText:(id)arg1 animated:(BOOL)arg2;
- (void)setNowPlayingText:(id)arg1;
- (void)setPlaying:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPlaying:(BOOL)arg1;
- (void)setShowsActivityIndicator:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showsActivityIndicator;
- (id)title;
- (id)titleLabel;

@end
