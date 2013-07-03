/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult  {
}

@property(copy) NSString * filePath;
@property(copy) NSNumber * length;

+ (id)voiceMailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceMail;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)length;
- (void)setLength:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)groupIdentifier;

@end