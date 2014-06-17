/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class UIColor;

@interface SFCircleProgressLayer : CALayer  {
    double _progressLineWidth;
    double _oneFullRotation;
    bool_showProgressTray;
    long long _progressStartPoint;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

@property long long progressStartPoint;
@property(retain) UIColor * progressColor;
@property(retain) UIColor * progressBackgroundColor;
@property double progressLineWidth;
@property bool showProgressTray;
@property double progress;

+ (bool)needsDisplayForKey:(id)arg1;

- (bool)showProgressTray;
- (double)progressLineWidth;
- (id)progressBackgroundColor;
- (id)progressColor;
- (long long)progressStartPoint;
- (void)setShowProgressTray:(bool)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)setProgressBackgroundColor:(id)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressStartPoint:(long long)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end