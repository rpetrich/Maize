/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MediaPlayerUI/MPUChronologicalProgressViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlMediaRemoteControllerDelegate-Protocol.h>
#import <MediaPlayerUI/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayerUI/MPUNowPlayingDelegate-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlsViewDataSource-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlsViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlsViewLayoutDelegate-Protocol.h>
#import <MediaPlayerUI/MPUMediaRemoteControlsView.h>
#import <MediaPlayerUI/MPUTransportControlMediaRemoteController.h>
#import <MediaPlayerUI/MPAVRoutingController.h>
#import <MediaPlayerUI/MPUVolumeHUDController.h>
#import <MediaPlayerUI/MPUNowPlayingController.h>
#import <MediaPlayerUI/MPUSupportedRemoteControls.h>

@interface MPUMediaRemoteViewController : UIViewController <MPUChronologicalProgressViewDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPAVRoutingControllerDelegate, MPUNowPlayingDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate> {

	MPUMediaRemoteControlsView* _mediaControlsView;
	MPUTransportControlMediaRemoteController* _transportControlMediaRemoteController;
	MPAVRoutingController* _routingController;
	MPUVolumeHUDController* _volumeHUDController;
	BOOL _showingAsPlaying;
	BOOL _nowPlayingIsRadioStation;
	id _supportedCommandsNotificationToken;
	NSString* _audioCategoryForDisabledHUD;
	NSString* _lastArtworkDigest;
	NSTimer* _scrubberCommitTimer;
	CGFloat _scrubbedTimeDestination;
	CGFloat _lastDurationFromUpdate;
	MPUNowPlayingController* _nowPlayingController;
	MPUSupportedRemoteControls* _supportedRemoteControls;

}

@property (nonatomic,readonly) MPUNowPlayingController * nowPlayingController;                    //@synthesize nowPlayingController=_nowPlayingController - In the implementation block
@property (nonatomic,readonly) MPUSupportedRemoteControls * supportedRemoteControls;              //@synthesize supportedRemoteControls=_supportedRemoteControls - In the implementation block
@property (nonatomic,readonly) NSArray * allowedTransportControlTypes; 
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)controlsViewClass;
+(Class)transportControlButtonClass;
-(id)initWithCoder:(id)arg1 ;
// -(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)supportedRemoteControlsDidChange;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2 ;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2 ;
-(void)transportControlsView:(id)arg1 tapOnControlType:(NSInteger)arg2 ;
-(void)transportControlsView:(id)arg1 longPressBeginOnControlType:(NSInteger)arg2 ;
-(void)transportControlsView:(id)arg1 longPressEndOnControlType:(NSInteger)arg2 ;
-(MPUSupportedRemoteControls *)supportedRemoteControls;
-(MPUNowPlayingController *)nowPlayingController;
-(id)remoteControlInterfaceIdentifier;
-(id)transportControlsView:(id)arg1 buttonForControlType:(NSInteger)arg2 ;
-(CGSize)transportControlsView:(id)arg1 defaultTransportButtonSizeWithProposedSize:(CGSize)arg2 ;
-(void)progressViewDidBeginScrubbing:(id)arg1 ;
-(void)progressViewDidEndScrubbing:(id)arg1 ;
-(void)_initMediaRemoteViewController;
-(void)_updateSupportedCommands;
-(void)_stopScrubberCommitTimer;
-(void)_reloadAllowedTransportControls;
-(id)_imageForTransportButtonWithControlType:(NSInteger)arg1 ;
-(void)_beginScrubberCommitTimer;
-(void)_commitCurrentScrubberValue;
-(NSArray *)allowedTransportControlTypes;
-(void)_supportedCommandsDidChangeNotification:(id)arg1 ;
-(id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1 ;
-(void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned)arg2 withOptions:(id)arg3 shouldLaunchApplication:(BOOL)arg4 ;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(CGFloat)arg2 ;
@end
