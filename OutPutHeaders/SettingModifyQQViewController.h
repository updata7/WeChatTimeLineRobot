/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IQQAccountMgrExt.h"
#import "AccountBaseViewController.h"
#import "UIAlertViewDelegate.h"

@class UIViewController, MMTableViewInfo, NSString;
@protocol SettingModifyQQViewControllerDelegate;

@interface SettingModifyQQViewController : AccountBaseViewController <UIAlertViewDelegate, IQQAccountMgrExt> {
	unsigned long m_uiUin;
	MMTableViewInfo* m_tableViewInfo;
	UIViewController* m_vcAccount;
	id<SettingModifyQQViewControllerDelegate> _m_SettingModifyQQViewControllerDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<SettingModifyQQViewControllerDelegate> m_SettingModifyQQViewControllerDelegate;
@property(retain, nonatomic) UIViewController* m_vcAccount;
@property(assign, nonatomic) unsigned long m_uiUin;
-(void).cxx_destruct;
-(void)makeCell:(id)cell;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)undoRegester;
-(void)doRegester;
-(void)OnOperate;
-(void)OnBindQQOK;
-(void)OnUnBindQQOK;
-(void)OnUnBindQQFail;
-(void)updateViewOnQQChange;
-(id)getHeaderView;
-(void)updateTableCell;
-(void)onCancel:(id)cancel;
-(void)ShowBindQQView;
-(void)onUnBind:(id)bind;
-(void)confirmUnBind;
-(void)onUnBindAccount;
@end
