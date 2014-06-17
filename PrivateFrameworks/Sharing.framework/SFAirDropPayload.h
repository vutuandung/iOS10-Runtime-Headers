/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSString, NSURL, NSData, UIImage;

@interface SFAirDropPayload : NSObject  {
    bool_wasString;
    NSURL *_URL;
    NSData *_data;
    NSString *_type;
    UIImage *_previewImage;
    NSString *_payloadDescription;
    long long _identifer;
}

@property bool wasString;
@property(copy) NSURL * URL;
@property(retain) NSData * data;
@property(copy) NSString * type;
@property(retain) UIImage * previewImage;
@property(copy) NSString * payloadDescription;
@property long long identifer;

+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4;
+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5;

- (void)setWasString:(bool)arg1;
- (bool)wasString;
- (void)setIdentifer:(long long)arg1;
- (void)setPayloadDescription:(id)arg1;
- (long long)identifer;
- (id)payloadDescription;
- (void)setPreviewImage:(id)arg1;
- (id)previewImage;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)data;
- (void)setType:(id)arg1;
- (id)type;
- (void)setURL:(id)arg1;
- (id)URL;
- (void).cxx_destruct;
- (id)description;
- (void)setData:(id)arg1;

@end