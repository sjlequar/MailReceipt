//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFUIMailbox.h"

@class NSArray, NSImage, NSString;

@interface _MailboxPlaceholder : NSObject <MFUIMailbox>
{
    BOOL _isContainer;
    int _type;
    NSString *_persistentIdentifier;
    NSString *_displayName;
    NSString *_accountURLString;
}

@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *accountIcon;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly) unsigned long long displayCount;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly) BOOL isVisibleFlaggedMailbox;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
@property(readonly, copy) NSArray *children;
@property(readonly) unsigned long long numberOfChildren;
@property(readonly) BOOL hasChildren;
@property(readonly, nonatomic) BOOL isAccountActive;
@property(readonly, nonatomic) BOOL isLocal;
@property(readonly, nonatomic) BOOL isStore;
@property(readonly, nonatomic) BOOL isSmartMailbox;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithPersistentIdentifier:(id)arg1 name:(id)arg2 accountURLString:(id)arg3 type:(int)arg4 isContainer:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

