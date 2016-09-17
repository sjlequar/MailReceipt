//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

#import "NSImmediateActionGestureRecognizerDelegate.h"
#import "QLPreviewMenuItemDelegate.h"

@class NSString;

@interface MUISenderPhotoView : NSImageView <NSImmediateActionGestureRecognizerDelegate, QLPreviewMenuItemDelegate>
{
    id <MUIActionContactDataProvider> _actionContactDataProvider;
}

@property(nonatomic) __weak id <MUIActionContactDataProvider> actionContactDataProvider; // @synthesize actionContactDataProvider=_actionContactDataProvider;
- (void).cxx_destruct;
- (void)resetCursorRects;
- (void)menuItemDidClose:(id)arg1;
- (unsigned long long)menuItem:(id)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (id)_dataDetectorsMenuItem;
- (id)_dataDetectorsActionContext;
- (id)_quicklookMenuItem;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)_muiSenderPhotoViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

