//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFAccount.h"

@interface MFAccount (MailUIExtras)
+ (id)mailAccountOfClass:(Class)arg1 withHostname:(id)arg2 username:(id)arg3;
+ (id)mailAccountWithName:(id)arg1;
- (id)authSchemeBindingProxies;
- (void)configureAuthenticationPopUp:(id)arg1 withAuthSchemes:(id)arg2;
- (void)configureAuthenticationPopUp:(id)arg1;
- (void)_addAuthScheme:(id)arg1 toPopUp:(id)arg2;
@end

