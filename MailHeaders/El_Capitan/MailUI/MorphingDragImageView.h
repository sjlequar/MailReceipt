//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface MorphingDragImageView : NSView
{
    NSImage *_startImage;
    NSImage *_endImage;
    double _progress;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double progress;
@property(retain, nonatomic) NSImage *endImage;
@property(retain, nonatomic) NSImage *startImage;

@end

