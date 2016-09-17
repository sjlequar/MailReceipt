//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MFAccount, NSMenuItem;

@protocol AccountStatusDataSourceDelegate <NSObject>

@optional
- (void)configureMenuItem:(NSMenuItem *)arg1 forAccount:(MFAccount *)arg2;
- (void)showConnectionDoctor:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(MFAccount *)arg2;
- (void)toggleAccountLock:(id)arg1;
- (void)addServer:(id)arg1;
- (void)setSelectedAccount:(MFAccount *)arg1;
@end

