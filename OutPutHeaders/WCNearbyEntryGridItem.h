/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSString;

@interface WCNearbyEntryGridItem : MMObject <PBCoding> {
	int itemType;
	NSString* iconImageFileName;
	NSString* name;
	unsigned long unreadCnt;
	NSString* extImageFileName;
	NSString* itemId;
	NSString* jumpUrl;
	NSString* iconUrl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* iconUrl;
@property(retain, nonatomic) NSString* jumpUrl;
@property(retain, nonatomic) NSString* itemId;
@property(retain, nonatomic) NSString* extImageFileName;
@property(assign, nonatomic) unsigned long unreadCnt;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* iconImageFileName;
@property(assign, nonatomic) int itemType;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

