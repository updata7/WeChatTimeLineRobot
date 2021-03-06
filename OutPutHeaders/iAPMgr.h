/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "MMService.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class JailBreakHelper, NSMutableArray, NSString, iAPCache, NSMutableSet;

@interface iAPMgr : MMService <SKPaymentTransactionObserver, SKProductsRequestDelegate, PBMessageObserverDelegate, MMService> {
	NSMutableSet* _setSKProductsRequests;
	NSMutableArray* _arrRestoredTransactions;
	NSMutableArray* _arrRestoredVerifiedTransaction;
	BOOL _bIsRestoring;
	unsigned long _status;
	iAPCache* _iAPCache;
	JailBreakHelper* m_jailBreakHelper;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) JailBreakHelper* m_jailBreakHelper;
+(unsigned)getIdKeyVerifyPurchaseFailed;
+(unsigned)getIdKeyIAPPurchaseFailed;
+(unsigned)getIdKeyPreparePurchaseFailed;
+(unsigned)getIdKeyIdIAP;
+(unsigned long)getBizTypeOfProductID:(id)productID;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(int)covertErrcode:(unsigned)errcode;
-(void)onPreparePurchase:(id)purchase;
-(void)onVerifyPurchase:(id)purchase;
-(void)onVerifyPurchaseForRestore:(id)restore request:(id)request;
-(void)restoreNextTransaction:(id)transaction;
-(void)onVerifyPurchaseForPurchase:(id)purchase request:(id)request IapRet:(int)ret;
-(void)finishTransactionForTransactionID:(id)transactionID;
-(BOOL)FinishTransaction:(id)transaction;
-(unsigned long)UnfinishTransactionCount;
-(int)RestoreCompletedTransactions;
-(int)RestoreCompletedTransactionsNeedCheckJailBreak:(BOOL)aBreak;
-(int)Purchase:(id)purchase extInfo:(id)info;
-(int)Purchase:(id)purchase extInfo:(id)info NeedCheckJailBreak:(BOOL)aBreak;
-(BOOL)cannotPurchaseDuetoJailbreakPlugin:(BOOL)plugin;
-(BOOL)GetProduct:(id)product;
-(void)request:(id)request didFailWithError:(id)error;
-(void)productsRequest:(id)request didReceiveResponse:(id)response;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)finished;
-(void)paymentQueue:(id)queue restoreCompletedTransactionsFailedWithError:(id)error;
-(void)paymentQueue:(id)queue removedTransactions:(id)transactions;
-(void)paymentQueue:(id)queue updatedTransactions:(id)transactions;
-(void)cancelPurchase:(id)purchase verifyType:(int)type;
-(void)verifyTransationForUnVerifyTransactionAll:(unsigned long)unVerifyTransactionAll;
-(void)verifyTransationForUnVerifyTransaction:(id)unVerifyTransaction verifyType:(int)type uiscene:(unsigned long)uiscene;
-(void)verifyTransation:(id)transation verifyType:(int)type;
-(BOOL)preparePurchase:(id)purchase extInfo:(id)info;
-(BOOL)isNonConsumable:(id)consumable;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)dealloc;
-(void)onServiceInit;
-(void)writeCache;
-(id)pathForCache;
@end

