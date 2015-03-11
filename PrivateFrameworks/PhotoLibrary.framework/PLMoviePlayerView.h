/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVPlayer, PLAVPlayerView, PLAirPlayBackgroundView, PLVideoOutBackgroundView, UIView;

@interface PLMoviePlayerView : UIView {
    PLAirPlayBackgroundView *_airPlayView;
    PLAVPlayerView *_avPlayerView;
    BOOL _destinationPlaceholderHidden;
    PLVideoOutBackgroundView *_videoOutView;
}

@property(getter=isDestinationPlaceholderHidden) BOOL destinationPlaceholderHidden;
@property(readonly) int destinationPlaceholderStyle;
@property(retain) AVPlayer * player;
@property(retain,readonly) UIView * videoView;

- (void)_clearAirPlayView;
- (void)_clearVideoView;
- (void)_installBackgroundView:(id)arg1;
- (void)dealloc;
- (int)destinationPlaceholderStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDestinationPlaceholderHidden;
- (id)player;
- (void)reattachVideoView;
- (void)setDestinationPlaceholderHidden:(BOOL)arg1;
- (void)setDestinationPlaceholderStyle:(int)arg1 airPlayDeviceName:(id)arg2;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1 duration:(double)arg2;
- (void)setScaleMode:(unsigned int)arg1;
- (id)videoView;

@end