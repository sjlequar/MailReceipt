//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MUIWebDocumentView, NSString, NSURL, NSUUID;

@interface MUIWKAsynchronousRequest : NSObject
{
    BOOL _isJavascriptRequest;
    BOOL _isExecuting;
    CDUnknownBlockType _responseBlock;
    NSString *_requestName;
    id <NSCopying><NSSecureCoding> _messageBody;
    CDUnknownBlockType _requestBlock;
    MUIWebDocumentView *_webDocumentView;
    NSUUID *_uniqueID;
    NSURL *_documentBaseURL;
}

@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSURL *documentBaseURL; // @synthesize documentBaseURL=_documentBaseURL;
@property(nonatomic) BOOL isJavascriptRequest; // @synthesize isJavascriptRequest=_isJavascriptRequest;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) MUIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(copy, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(copy, nonatomic) id <NSCopying><NSSecureCoding> messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSString *requestName; // @synthesize requestName=_requestName;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
- (void).cxx_destruct;
- (id)description;
- (void)_requestTimedOut;
- (void)executeResponseWithMessage:(id)arg1 object:(id)arg2;
- (void)executeRequest;
- (id)init;

@end

