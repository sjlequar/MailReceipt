//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenAttachmentCell.h"

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _displayAsExternal;
    BOOL _neverShowSeparator;
}

+ (id)colorForExternalDomain;
@property BOOL neverShowSeparator; // @synthesize neverShowSeparator=_neverShowSeparator;
@property(nonatomic) BOOL displayAsExternal; // @synthesize displayAsExternal=_displayAsExternal;
- (id)_immediateActionAnimationControllerForTokenAttachment:(id)arg1 inTextView:(id)arg2;
- (id)tokenTintColor;

@end

