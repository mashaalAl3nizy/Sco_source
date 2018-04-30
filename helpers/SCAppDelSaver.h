//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface SCAppDelSaver : NSObject
{
}

+ (id)albumWithTitle:(id)arg1;
+ (void)saveToPhotoLibraryWithImage:(id)arg1 orVideoURL:(id)arg2 withAssetCollection:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)saveToPhotoLibraryWithImage:(id)arg1 orVideoURL:(id)arg2 albumName:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)handleVideoSave:(id)arg1 fromController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)handleImageSave:(id)arg1 fromController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showSaveAlertIfNeededForMediaType:(long long)arg1 controller:(id)arg2 saveBlock:(CDUnknownBlockType)arg3;

@end
