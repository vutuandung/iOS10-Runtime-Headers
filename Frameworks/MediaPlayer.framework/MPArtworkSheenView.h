/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage, CALayer;

@interface MPArtworkSheenView : UIView  {
    CALayer *_imageLayer;
    id _motionManagerObserver;
    float _rotation;
}

@property(retain) UIImage * image;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end