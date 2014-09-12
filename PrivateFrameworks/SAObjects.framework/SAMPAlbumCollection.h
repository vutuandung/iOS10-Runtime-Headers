/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection  {
}

@property(copy) NSString * artist;
@property(copy) NSString * sortArtist;

+ (id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)albumCollection;

- (void)setSortArtist:(id)arg1;
- (id)sortArtist;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setArtist:(id)arg1;
- (id)artist;
- (id)groupIdentifier;

@end