/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class JSAPIAuthInfo, JSScopeAuthInfo, NSData, NSString;

@interface JSAPIAuthWrap : XXUnknownSuperclass {
	NSString* _url;
	NSString* _apiName;
	NSString* _appId;
	NSString* _timeStamp;
	NSString* _nouce;
	NSString* _scope;
	NSString* _ticket;
	NSString* _signature;
	NSData* _apiArgs;
	NSString* _signatureMethod;
	int _signatureType;
	JSAPIAuthInfo* _authInfo;
	JSScopeAuthInfo* _scopeAuthInfo;
}
@property(retain, nonatomic) JSScopeAuthInfo* scopeAuthInfo;
@property(retain, nonatomic) JSAPIAuthInfo* authInfo;
@property(assign, nonatomic) int signatureType;
@property(retain, nonatomic) NSString* signatureMethod;
@property(retain, nonatomic) NSData* apiArgs;
@property(retain, nonatomic) NSString* signature;
@property(retain, nonatomic) NSString* ticket;
@property(retain, nonatomic) NSString* scope;
@property(retain, nonatomic) NSString* nouce;
@property(retain, nonatomic) NSString* timeStamp;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) NSString* apiName;
@property(retain, nonatomic) NSString* url;
-(void).cxx_destruct;
@end

