//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MUIWebAttachmentController, NSArray, NSURL;

@interface MUISelectionAndClickInformation : NSObject
{
    NSArray *_selectedAttachmentControllers;
    MUIWebAttachmentController *_clickedAttachmentController;
    NSURL *_clickedLinkURL;
    NSURL *_clickedMediaURL;
    NSURL *_clickedImageURL;
}

@property(retain, nonatomic) NSURL *clickedImageURL; // @synthesize clickedImageURL=_clickedImageURL;
@property(retain, nonatomic) NSURL *clickedMediaURL; // @synthesize clickedMediaURL=_clickedMediaURL;
@property(retain, nonatomic) NSURL *clickedLinkURL; // @synthesize clickedLinkURL=_clickedLinkURL;
@property(retain, nonatomic) MUIWebAttachmentController *clickedAttachmentController; // @synthesize clickedAttachmentController=_clickedAttachmentController;
@property(copy, nonatomic) NSArray *selectedAttachmentControllers; // @synthesize selectedAttachmentControllers=_selectedAttachmentControllers;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *selectedAndClickedAttachmentControllers;

@end

