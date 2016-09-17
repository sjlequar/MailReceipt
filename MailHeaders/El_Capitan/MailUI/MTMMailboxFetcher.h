//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTMMailbox, NSConditionLock, NSMutableArray;

@interface MTMMailboxFetcher : NSObject
{
    MTMMailbox *_processingMailbox;
    NSMutableArray *_inactiveMailboxes;
    NSConditionLock *_lock;
    MTMMailbox *_loadingMailbox;
    BOOL _threadLaunched;
}

+ (id)sharedFetcher;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL threadLaunched; // @synthesize threadLaunched=_threadLaunched;
- (void).cxx_destruct;
- (void)waitForActiveMailboxToBeLoadedWithTimeOut:(double)arg1;
- (BOOL)shouldContinueFetchingMailbox:(id)arg1;
- (void)_protectedSmartAddMailboxToInactiveMailboxes:(id)arg1;
- (void)stopFetchingInactiveMailbox:(id)arg1;
- (void)startFetchingInactiveMailbox:(id)arg1;
- (void)stopFetchingMailbox:(id)arg1;
- (void)startFetchingMailbox:(id)arg1;
- (void)_workerThread;
- (void)_unlockAndNotify;
- (void)_lockWhenThereIsWorkToDo;
- (void)_lock;
- (void)dealloc;
- (id)init;

@end

