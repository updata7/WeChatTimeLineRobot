/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBSDKURLOpening.h"

@class FBSDKLoginManagerLogger, NSSet, NSString;

@interface FBSDKLoginManager : XXUnknownSuperclass <FBSDKURLOpening> {
	id _handler;
	NSSet* _requestedPermissions;
	FBSDKLoginManagerLogger* _logger;
	BOOL _performingLogIn;
	unsigned _defaultAudience;
	unsigned _loginBehavior;
}
@property(assign, nonatomic) unsigned loginBehavior;
@property(assign, nonatomic) unsigned defaultAudience;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)renewSystemCredentials:(id)credentials;
-(void).cxx_destruct;
-(void)validateReauthentication:(id)reauthentication withResult:(id)result;
-(void)logInWithBehavior:(unsigned)behavior;
-(void)logInWithPermissions:(id)permissions handler:(id)handler;
-(id)logInParametersWithPermissions:(id)permissions;
-(void)invokeHandler:(id)handler error:(id)error;
-(void)determineRecentlyGrantedPermissions:(id*)permissions recentlyDeclinedPermissions:(id*)permissions2 forGrantedPermission:(id)grantedPermission declinedPermissions:(id)permissions4;
-(void)completeAuthentication:(id)authentication;
-(void)logOut;
-(void)handleImplicitCancelOfLogIn;
-(void)applicationDidBecomeActive:(id)application;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)tryOpenURL:(id)url;
-(BOOL)performBrowserLogInWithParameters:(id)parameters error:(id*)error;
-(BOOL)performNativeLogInWithParameters:(id)parameters error:(id*)error;
@end
