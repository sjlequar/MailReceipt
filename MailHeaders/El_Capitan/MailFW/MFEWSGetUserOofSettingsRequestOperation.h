//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class EWSEmailAddress, MFEWSGetUserOofSettingsResponseOperation;

@interface MFEWSGetUserOofSettingsRequestOperation : MFEWSRequestOperation
{
    EWSEmailAddress *_emailAddress;
}

@property(readonly, nonatomic) EWSEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)prepareRequest;
@property(retain, nonatomic) MFEWSGetUserOofSettingsResponseOperation *responseOperation;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 gateway:(id)arg2 errorHandler:(id)arg3;

@end

