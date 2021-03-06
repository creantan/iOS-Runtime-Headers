/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDUI_Tester.framework/CoreCDUI_Tester
 */

@interface SettingsController : PSListController {
    BOOL  _didUseSMS;
    CDPRecoveryController * _recoveryController;
    CDPRecoveryTestController * _recoveryTestController;
    CDPUIController * _uiController;
}

- (void).cxx_destruct;
- (id)_contextForPrimaryAccount;
- (BOOL)_didUseSMSVerification;
- (id)_fakeDevicesWithExpectedSecret:(id)arg1 isNumber:(BOOL)arg2 numericLength:(id)arg3;
- (BOOL)_forceInlineUI;
- (void)_loadSpecifiers;
- (BOOL)_offerRemoteApproval;
- (void)_setStingrayStateToEnabled:(BOOL)arg1 sender:(id)arg2;
- (id)_stingraySpecifier;
- (id)_stingraySpecifierForState:(unsigned int)arg1;
- (void)beginIDMSRecovery:(id)arg1;
- (void)beginIDMSRecoveryPrimary:(id)arg1;
- (void)beginIDMSRecoveryWithFailure:(id)arg1;
- (void)disableStingray:(id)arg1;
- (void)enableCDP:(id)arg1;
- (void)enableStingray:(id)arg1;
- (id)getUserDefaultEnabled:(id)arg1;
- (void)preflightStingray:(id)arg1;
- (void)promptFor4DigitICSC:(id)arg1;
- (void)promptFor4DigitRemoteSecret:(id)arg1;
- (void)promptFor6DigitICSC:(id)arg1;
- (void)promptFor6DigitRemoteSecret:(id)arg1;
- (void)promptForComplexICSC:(id)arg1;
- (void)promptForCustomAlphanumericRemoteSecret:(id)arg1;
- (void)promptForCustomNumericRemoteSecret:(id)arg1;
- (void)promptForLocalSecret:(id)arg1;
- (void)promptForRandomICSC:(id)arg1;
- (void)setUserDefaultEnabled:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldAllowCDPEnrollment;
- (id)specifiers;
- (void)viewDidLoad;

@end
