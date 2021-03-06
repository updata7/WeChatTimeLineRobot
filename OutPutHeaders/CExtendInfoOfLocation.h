/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IMessageWrapExt.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfLocation : XXUnknownSuperclass <IMessageWrapExt, IMsgExtendOperation, NSCopying> {
	double m_latitude;
	double m_longitude;
	double m_mapScale;
	NSString* m_locationLabel;
	NSString* m_poiName;
	NSString* m_mapType;
	NSString* m_infoUrl;
	CMessageWrap* m_refMessageWrap;
}
@property(assign, nonatomic) CMessageWrap* m_refMessageWrap;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_infoUrl;
@property(retain, nonatomic) NSString* m_mapType;
@property(retain, nonatomic) NSString* m_poiName;
@property(retain, nonatomic) NSString* m_locationLabel;
@property(assign, nonatomic) double m_mapScale;
@property(assign, nonatomic) double m_longitude;
@property(assign, nonatomic) double m_latitude;
+(void)CreateExtendInfoWithType:(unsigned long)type retExtendInfo:(id*)info;
-(void).cxx_destruct;
-(void)UpdateContent:(id)content;
-(void)ChangeForDisplay;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

