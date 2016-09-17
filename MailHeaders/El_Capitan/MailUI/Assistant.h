//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSString, NSView;

@interface Assistant : NSObject
{
    id <AssistantDelegate> _delegate;
    NSView *_parentView;
    NSButton *_backButton;
    NSButton *_forwardButton;
    NSButton *_cancelButton;
}

@property(readonly, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) NSButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(readonly, nonatomic) NSButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) NSView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <AssistantDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupKeyViewLoop;
@property(readonly, copy, nonatomic) NSString *windowTitle;
- (void)weAreDone;
@property(readonly, nonatomic) BOOL shouldStop;
- (void)goBackward;
- (void)goForward;
- (void)stop;
- (void)start;
- (id)init;
- (id)initWithAssistantManager:(id)arg1;

@end

