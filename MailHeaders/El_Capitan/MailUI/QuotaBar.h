//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSLevelIndicator;

@interface QuotaBar : NSView
{
    NSLevelIndicator *_levelIndicator;
}

@property(readonly, nonatomic) NSLevelIndicator *levelIndicator; // @synthesize levelIndicator=_levelIndicator;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setQuotaUsed:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (void)_quotaBarCommonInitWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_labelFont;

@end

