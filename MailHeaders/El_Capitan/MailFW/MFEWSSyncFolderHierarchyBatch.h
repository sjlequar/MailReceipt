//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MFEWSSyncFolderHierarchyBatch : NSObject
{
    BOOL _isFinalBatch;
    NSString *_initialSyncState;
    NSString *_finalSyncState;
    NSArray *_createdFolders;
    NSArray *_updatedFolders;
    NSArray *_deletedFolderIDs;
}

@property(copy, nonatomic) NSArray *deletedFolderIDs; // @synthesize deletedFolderIDs=_deletedFolderIDs;
@property(copy, nonatomic) NSArray *updatedFolders; // @synthesize updatedFolders=_updatedFolders;
@property(copy, nonatomic) NSArray *createdFolders; // @synthesize createdFolders=_createdFolders;
@property(nonatomic) BOOL isFinalBatch; // @synthesize isFinalBatch=_isFinalBatch;
@property(copy, nonatomic) NSString *finalSyncState; // @synthesize finalSyncState=_finalSyncState;
@property(copy, nonatomic) NSString *initialSyncState; // @synthesize initialSyncState=_initialSyncState;
- (void).cxx_destruct;

@end

