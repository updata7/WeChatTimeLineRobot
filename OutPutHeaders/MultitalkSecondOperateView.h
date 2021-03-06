/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIButton;
@protocol MultitalkSecondOperateViewDelegate;

@interface MultitalkSecondOperateView : XXUnknownSuperclass {
	id<MultitalkSecondOperateViewDelegate> _m_delegate;
	UIButton* _m_addMemberButton;
	UIButton* _m_minimizeButton;
}
@property(retain, nonatomic) UIButton* m_minimizeButton;
@property(retain, nonatomic) UIButton* m_addMemberButton;
@property(assign, nonatomic) __weak id<MultitalkSecondOperateViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onMinimizeButtonClick;
-(void)onAddMemberButtonClick;
-(void)initAddMemberButton;
-(void)initMinimizeButton;
-(void)initButtonBgBarView;
-(id)initWithFrame:(CGRect)frame;
-(void)updateAddMemberEnabled:(BOOL)enabled;
-(void)showOperateView;
-(void)hideOperateView;
@end

