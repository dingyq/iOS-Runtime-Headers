/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLWelcomeViewController : UIViewController <WLSourceDevicesDelegate> {
    WLMigrationCompletedViewController *_completedViewController;
    id /* block */ _completionHandler;
    BOOL _dismissAfterTimeout;
    WLIntroViewController *_introViewController;
    WLWelcomeViewControllerMetrics *_metrics;
    WLPairingViewController *_pairingViewController;
    WLMigrationProgressViewController *_progressViewController;
    WLSourceDevicesController *_sourceDevicesController;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (void)allowedToDisplay:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_addGroupViewController:(id)arg1;
- (void)_animateFromGroupViewController:(id)arg1 toGroupViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticationDidSucceed;
- (void)_authenticationPeriodDidEnd;
- (void)_completeWithSuccess:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForGroupView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForIncomingGroupViewBeforeAnimation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOutgoingGroupViewAfterAnimation;
- (void)_loadIntroGroupView;
- (void)_migrationDidBegin;
- (void)_progressViewControllerDidFinishWithSuccess:(BOOL)arg1;
- (void)_removeGroupViewController:(id)arg1;
- (void)_startConnectivity;
- (void)_transitionToCompletedViewController;
- (void)_transitionToPairingCodeViewControllerWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3;
- (void)_transitionToProgressViewControllerWithSourceDevice:(id)arg1;
- (void)_uiTestModeStartFakePairing;
- (id /* block */)completionHandler;
- (id)init;
- (void)loadView;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)sourceDevices:(id)arg1 didChangeWithDevices:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end