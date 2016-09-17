//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MFCriterion, NSArray, NSMutableArray, NSMutableDictionary, NSSet;

@interface Conversation : NSObject <NSCopying>
{
    NSMutableArray *_primitiveOrderedConversationMembers;
    NSArray *_orderedConversationMembers;
    NSMutableDictionary *_conversationMemberByMessage;
    NSMutableDictionary *_conversationMemberByMessageID;
    NSMutableArray *_asyncLoadConversationMembersCompletionHandlers;
    BOOL _conversationMembersLoaded;
    BOOL _isRegisteredForConversationUpdates;
    long long _conversationID;
    MFCriterion *_mailboxCriterion;
    NSArray *_initialMessages;
    NSSet *_initialPrimaryMessages;
    long long _loadBehavior;
    unsigned long long _initialReadingMemberIndex;
}

+ (BOOL)automaticallyNotifiesObserversOfOrderedConversationMembers;
+ (id)keyPathsForValuesAffectingMessages;
@property(nonatomic) BOOL isRegisteredForConversationUpdates; // @synthesize isRegisteredForConversationUpdates=_isRegisteredForConversationUpdates;
@property(nonatomic) BOOL conversationMembersLoaded; // @synthesize conversationMembersLoaded=_conversationMembersLoaded;
@property(nonatomic) unsigned long long initialReadingMemberIndex; // @synthesize initialReadingMemberIndex=_initialReadingMemberIndex;
@property(nonatomic) long long loadBehavior; // @synthesize loadBehavior=_loadBehavior;
@property(copy, nonatomic) NSSet *initialPrimaryMessages; // @synthesize initialPrimaryMessages=_initialPrimaryMessages;
@property(copy, nonatomic) NSArray *initialMessages; // @synthesize initialMessages=_initialMessages;
@property(readonly, nonatomic) MFCriterion *mailboxCriterion; // @synthesize mailboxCriterion=_mailboxCriterion;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (void)unhideMessages:(id)arg1;
- (void)hideMessages:(id)arg1;
- (void)markConversationMembersAsRead:(id)arg1;
- (void)_conversationMessagesFlagsChanged:(id)arg1;
- (void)_conversationMessagesCompacted:(id)arg1;
- (void)_conversationMessagesUpdated:(id)arg1;
- (void)_conversationsUpdated:(id)arg1;
- (void)_conversationMessagesLoaded:(id)arg1;
- (void)_updateConversationMembersWithAddedMessages:(id)arg1 primaryMessages:(id)arg2;
- (void)_removeMessage:(id)arg1 fromConversationMember:(id)arg2;
- (void)_addMessage:(id)arg1 isPrimary:(BOOL)arg2 toConversationMember:(id)arg3;
- (void)_removeConversationMember:(id)arg1;
- (void)_addNewConversationMember:(id)arg1;
- (void)_updateInitialReadingMemberIndex;
- (void)_updateOrderedConversationMembers;
- (void)_quickFetchTimeout;
- (void)loadConversationMembersForDisplay;
- (void)asyncLoadConversationMembers:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSArray *orderedConversationMembers;
@property(readonly, copy, nonatomic) NSSet *messages;
- (CDUnknownBlockType)_orderingComparator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithConversationID:(long long)arg1 mailboxCriterion:(id)arg2 initialMessages:(id)arg3 initialPrimaryMessages:(id)arg4 loadBehavior:(long long)arg5;
- (id)init;

@end

