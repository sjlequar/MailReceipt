//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCConnection.h"

@class MFSMTPAccount, NSMutableArray, NSMutableData, NSString, _MFSMTPEnhancedStatusCode;

@interface MFSMTPConnection : MCConnection
{
    id _lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    BOOL _needToSendGreeting;
    int _lastReplyCode;
    _MFSMTPEnhancedStatusCode *_lastStatusCode;
    double _originalSocketTimeout;
    double _timeLastCommandWasSent;
    long long _greeting;
    NSString *_logCategory;
}

@property(retain, nonatomic) NSString *logCategory; // @synthesize logCategory=_logCategory;
@property(nonatomic) BOOL needToSendGreeting; // @synthesize needToSendGreeting=_needToSendGreeting;
@property(nonatomic) long long greeting; // @synthesize greeting=_greeting;
@property(nonatomic) int lastReplyCode; // @synthesize lastReplyCode=_lastReplyCode;
@property(nonatomic) double timeLastCommandWasSent; // @synthesize timeLastCommandWasSent=_timeLastCommandWasSent;
@property(nonatomic) double originalSocketTimeout; // @synthesize originalSocketTimeout=_originalSocketTimeout;
@property(readonly, nonatomic) _MFSMTPEnhancedStatusCode *lastStatusCode; // @synthesize lastStatusCode=_lastStatusCode;
- (void).cxx_destruct;
- (long long)sendDatas:(id)arg1;
- (long long)rcptTo:(id)arg1;
- (long long)mailFrom:(id)arg1;
@property(readonly, nonatomic) unsigned long long maximumMessageBytes;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (id)_domainName;
- (long long)_sendHELOWithClientDomainName:(id)arg1;
- (long long)_sendEHLOWithClientDomainName:(id)arg1;
- (long long)_doHandshakeTryHELOIfEHLOFails:(BOOL)arg1;
- (long long)noop;
- (void)_readResponseRange:(struct _NSRange *)arg1 isContinuation:(char *)arg2;
- (long long)_getReply;
- (long long)_sendDataDontLogBytesInRange:(struct _NSRange)arg1;
- (long long)_sendCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 dontLogArgumentRange:(struct _NSRange)arg4 trailer:(unsigned char)arg5;
@property(readonly, copy, nonatomic) NSString *lastResponse;
- (long long)_state;
- (void)quit;
- (id)_makeInvalidCredentialsError;
- (id)_getErrorFromFailedAuthentication;
- (BOOL)_authenticateWithSaslClient:(id)arg1;
- (BOOL)authenticate;
- (id)authenticationMechanisms;
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;
- (BOOL)_startTLS;
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;
- (void)_setupConnection;
- (id)errorURLScheme;
@property __weak MFSMTPAccount *account;
- (id)init;

@end

