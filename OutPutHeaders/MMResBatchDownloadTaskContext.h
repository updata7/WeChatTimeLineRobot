/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface MMResBatchDownloadTaskContext : XXUnknownSuperclass {
	unsigned long _resType;
	unsigned long _resSubType;
	NSString* _mainDocumentUrl;
	NSString* _configUrl;
	NSString* _appId;
	NSString* _domain;
	NSArray* _resUrlInfoList;
	NSString* _packageId;
	unsigned long _expiredTime;
}
@property(assign, nonatomic) unsigned long expiredTime;
@property(retain, nonatomic) NSString* packageId;
@property(retain, nonatomic) NSArray* resUrlInfoList;
@property(retain, nonatomic) NSString* domain;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) NSString* configUrl;
@property(retain, nonatomic) NSString* mainDocumentUrl;
@property(assign, nonatomic) unsigned long resSubType;
@property(assign, nonatomic) unsigned long resType;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end

