/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseRequest;

@interface OCRTranslationRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned sessionId;
@property(retain, nonatomic) NSString* toLanguage;
@property(retain, nonatomic) NSString* fromLanguage;
@property(assign, nonatomic) unsigned imageType;
@property(retain, nonatomic) SKBuiltinBuffer_t* imageBuffer;
@property(assign, nonatomic) unsigned clientScanId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

