/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface EnterpriseContactDB : MMObject {
	WCDataBase* m_db;
	WCDataBaseTable* m_friendTable;
	WCDataBaseTable* m_myTable;
}
-(void).cxx_destruct;
-(id)getTableByName:(id)name;
-(void)deleteMyContact;
-(BOOL)setMyContact:(id)contact;
-(id)getMyContact;
-(void)deleteAllContacts;
-(BOOL)deleteContact:(id)contact;
-(BOOL)updateContact:(id)contact;
-(BOOL)addContact:(id)contact;
-(id)getAllContacts;
-(id)getContact:(id)contact;
-(id)DBContext;
-(id)initWithPath:(id)path;
@end
