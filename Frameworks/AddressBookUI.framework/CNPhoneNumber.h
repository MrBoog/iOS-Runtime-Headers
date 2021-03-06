/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface CNPhoneNumber : NSObject <NSCopying> {
    NSString *_stringValue;
}

@property(readonly) NSString * countryCode;
@property(readonly) NSString * formattedStringValue;
@property(readonly) NSString * normalizedStringValue;
@property(readonly) NSString * stringValue;

+ (id)phoneNumberWithStringValue:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)formattedStringValue;
- (id)initWithStringValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)normalizedStringValue;
- (id)stringValue;

@end
