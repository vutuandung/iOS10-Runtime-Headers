/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class _UIViewAnimationAttributes;

@interface _SBFAnimationAttributesFactory : SBFAnimationFactory  {
    _UIViewAnimationAttributes *_attributes;
}


- (id)factoryWithTimingFunction:(id)arg1;
- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(id)arg3 completion:(id)arg4;
- (id)_initWithAttributes:(id)arg1;
- (id)_initWithSettings:(id)arg1;
- (double)delay;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (double)duration;

@end