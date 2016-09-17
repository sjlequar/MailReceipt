//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSString;

@interface MCNetworkController : NSObject
{
    struct __SCDynamicStore *_store;
    struct __CFString *_dnsKey;
    id _domainLock;
    NSString *_domainName;
    NSMapTable *_reachabilityReferencesForWatchedAccounts;
}

+ (id)encodeAddressForIDNA:(id)arg1 encodingHint:(unsigned long long)arg2;
+ (id)applyIDNAToHostname:(id)arg1 encode:(BOOL)arg2;
+ (BOOL)domain:(id)arg1 isSubdomainOfDomain:(id)arg2;
+ (BOOL)hostnameIsFullyQualified:(id)arg1;
+ (id)baseDomainsForDomains:(id)arg1;
+ (id)subnetForIPAddress:(id)arg1;
+ (id)getHostUUIDString;
+ (id)filteredDomainNamesFromHost:(id)arg1;
+ (id)filteredIPAddressesFromHost:(id)arg1;
+ (long long)networkStatus;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (id)_watchedAccounts;
- (void)stopWatchingReachabilityForAccount:(id)arg1;
- (struct __SCNetworkReachability *)_newNetworkReachabilityReferenceForHostname:(id)arg1;
- (void)startWatchingReachabilityForAccount:(id)arg1;
- (BOOL)isHostReachable:(id)arg1 needToEstablishInternetConnection:(char *)arg2;
- (void)_clearDomainName;
@property(readonly, copy) NSString *domainName;
- (void)_postNetworkChangeNotification;
- (void)_queueNetworkChangeNotification;
- (void)dealloc;
- (id)init;

@end

