// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import UIKit;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSData (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface UIDevice (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface UIFont (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface UIImage (SWIFT_EXTENSION(ZoomAuthentication))
@end

@protocol ZoomSDKProtocol;

SWIFT_CLASS("_TtC18ZoomAuthentication4Zoom")
@interface Zoom : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <ZoomSDKProtocol> _Nonnull sdk;)
+ (id <ZoomSDKProtocol> _Nonnull)sdk SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ZoomAuthenticationResult;

/// Applications should implement this delegate to receive results from the ZoomAuthenticationViewController
/// The method on this delegate will be called exactly once after the Zoom Session has completed
SWIFT_PROTOCOL("_TtP18ZoomAuthentication26ZoomAuthenticationDelegate_")
@protocol ZoomAuthenticationDelegate
- (void)onZoomAuthenticationResultWithResult:(ZoomAuthenticationResult * _Nonnull)result;
@end

enum ZoomAuthenticationStatus : NSInteger;
enum ZoomAuthenticatorState : NSInteger;
@class ZoomFaceBiometricMetrics;
@class ZoomFingerprintMetrics;
@class ZoomPinMetrics;

/// Results of a Zoom Authentication Request and additional metrics for each authenticator
SWIFT_CLASS("_TtC18ZoomAuthentication24ZoomAuthenticationResult")
@interface ZoomAuthenticationResult : NSObject
/// The result of the authentication request
@property (nonatomic, readonly) enum ZoomAuthenticationStatus status;
/// User secret (if retrieved)
@property (nonatomic, readonly, copy) NSString * _Nullable secret;
/// State of face authentication
@property (nonatomic, readonly) enum ZoomAuthenticatorState faceAuthenticatorState;
/// Metrics collected during face authentication
@property (nonatomic, readonly, strong) ZoomFaceBiometricMetrics * _Nullable faceMetrics;
/// Number of times the user failed to authenticate with their face since the last time the user satisfied the complete authentication challenge
@property (nonatomic, readonly) NSInteger countOfFaceFailuresSinceLastSuccess;
/// State of fingerprint authentication
@property (nonatomic, readonly) enum ZoomAuthenticatorState fingerprintAuthenticatorState;
/// Metrics collected during face authentication
@property (nonatomic, readonly, strong) ZoomFingerprintMetrics * _Nullable fingerprintMetrics;
/// Number of times the user failed to authenticate with their fingerprint since the last time the user satisfied the complete authentication challenge
@property (nonatomic, readonly) NSInteger countOfFingerprintFailuresSinceLastSuccess;
/// State of pin pad authentication
@property (nonatomic, readonly) enum ZoomAuthenticatorState pinAuthenticatorState;
/// Metrics collected during pin pad authentication
@property (nonatomic, readonly, strong) ZoomPinMetrics * _Nullable pinMetrics;
/// Number of times the user failed to authenticate with their pin since the last time the user satisfied the complete authentication challenge
@property (nonatomic, readonly) NSInteger countOfPinFailuresSinceLastSuccess;
/// Count of consecutive ‘session’ failures – a session ‘failure’ occurs when the user fails with any enrolled authenticator
@property (nonatomic, readonly) NSInteger consecutiveAuthenticationFailures;
/// Count of consecutive lockouts that have occurred.  After 3 session failures, the user is ‘locked out’ and zoom will prevent the user from authenticating again
/// for a short period of time.  Upon the 3rd consecutive lockout, the enrollment protected by ZoOm is automatically deleted.
@property (nonatomic, readonly) NSInteger consecutiveLockouts;
/// Friendly representation of ZoomAuthenticationResult
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly, copy) NSString * _Nullable debugText;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// An enum that represents the various reasons that authentication terminated
typedef SWIFT_ENUM(NSInteger, ZoomAuthenticationStatus) {
/// The user was successfully authenticated
  ZoomAuthenticationStatusUserWasAuthenticated = 0,
/// The operation could not be completed because the SDK was not validated prior to use.
  ZoomAuthenticationStatusFailedBecauseAppTokenNotValid = 1,
/// The user prematurely cancelled out of the authentication session
  ZoomAuthenticationStatusFailedBecauseUserCancelled = 2,
/// The application requested authentication with a policy that cannot be achieved without permission to use the camera
  ZoomAuthenticationStatusFailedBecauseCameraPermissionDenied = 3,
/// The application requested authentication with a policy that cannot be achieved without access to TouchID
  ZoomAuthenticationStatusFailedBecauseTouchIDUnavailable = 4,
/// The user failed to correctly complete an authentication challenge
  ZoomAuthenticationStatusFailedBecauseUserFailedAuthentication = 5,
/// The user must enroll before this action can be completed
  ZoomAuthenticationStatusFailedBecauseUserMustEnroll = 6,
/// The user was deleted because too many session failures occurred
  ZoomAuthenticationStatusFailedToAuthenticateTooManyTimesAndUserWasDeleted = 7,
/// The session authentication timer expired
  ZoomAuthenticationStatusFailedBecauseOfTimeout = 8,
/// The session automatically terminated due to low memory
  ZoomAuthenticationStatusFailedBecauseOfLowMemory = 9,
/// The authentication was terminated due to the app being terminated
  ZoomAuthenticationStatusFailedBecauseOfOSContextSwitch = 10,
/// The authentication failed due to wifi not turned on in development mode
  ZoomAuthenticationStatusFailedBecauseWifiNotOnInDevMode = 11,
/// The authentication failed because there was no network connection in development mode
  ZoomAuthenticationStatusFailedBecauseNoConnectionInDevMode = 12,
/// The authentication failed because the device’s TouchID configuration changed
  ZoomAuthenticationStatusFailedBecauseTouchIDSettingsChanged = 13,
};

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC18ZoomAuthentication32ZoomAuthenticationViewController")
@interface ZoomAuthenticationViewController : UIViewController
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
- (void)prepareForAuthenticationWithDelegate:(id <ZoomAuthenticationDelegate> _Nonnull)delegate userID:(NSString * _Nonnull)userID applicationPerUserEncryptionSecret:(NSString * _Nonnull)applicationPerUserEncryptionSecret;
- (void)prepareForAuthenticationWithDelegate:(id <ZoomAuthenticationDelegate> _Nonnull)delegate userID:(NSString * _Nonnull)userID applicationPerUserEncryptionSecret:(NSString * _Nonnull)applicationPerUserEncryptionSecret authenticationReason:(NSString * _Nullable)authenticationReason;
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomAuthenticationViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end

/// Represents the possible states of an authenticator after an authentication request
typedef SWIFT_ENUM(NSInteger, ZoomAuthenticatorState) {
/// The user was never shown this authenticator
  ZoomAuthenticatorStateUnused = 0,
/// The user attempted this authenticator, but cancelled before completing
  ZoomAuthenticatorStateCancelled = 1,
/// The user failed according to this authenticator
  ZoomAuthenticatorStateFailed = 2,
/// The user authenticated successfully according to this authenticator
  ZoomAuthenticatorStateCompleted = 3,
};

/// Represents the possible state of camera permissions.
typedef SWIFT_ENUM(NSInteger, ZoomCameraPermissionStatus) {
/// \code
/// The user has not yet been asked for permission to use the camera
///
/// \endcode
  ZoomCameraPermissionStatusNotDetermined = 0,
/// \code
/// The user denied the app permission to use the camera or manually revoked the app's camera permission.
///
/// From this state, permission can only be modified by the user from System 'Settings' context
///
/// \endcode
  ZoomCameraPermissionStatusDenied = 1,
/// The camera permission on this device has been disabled due to policy.
/// From this state, permission can only be modified by the user from System ‘Settings’ context or contacting the system administrator.
  ZoomCameraPermissionStatusRestricted = 2,
/// \code
/// The user granted permission to use the camera
///
/// \endcode
  ZoomCameraPermissionStatusAuthorized = 3,
};

@class UIColor;
@class CAGradientLayer;

/// Optional customizations, and their default values.  These can be modified to alter the appearance and behavior of the Zoom user interface
/// \code
/// showAuthenticationFactorsTabBar:Bool = true
///
/// showAuthenticationAccessGrantedAnimation:Bool = true
/// showAuthenticationAccessDeniedAnimation:Bool  = true
/// showEnrollmentSuccessfulAnimation:Bool        = true
/// showEnrollmentUnsuccessfulAnimation:Bool      = true
/// enableFailureDuringEnrollmentDueToLowLiveness: Bool = true
///
/// mainBackgroundColors: [AnyObject]? = ZoomTheme.ZoomGradientWithOpacity
/// mainForegroundColor: UIColor       = UIColor.whiteColor()
///
/// public var buttonTextNormalColor: UIColor          = UIColor.whiteColor()
/// public var buttonTextHighlightColor: UIColor       = UIColor(red:0.05, green:0.64, blue:0.70, alpha:1.0)
/// public var buttonBackgroundHighlightColor: UIColor = UIColor.whiteColor()
///
/// resultsScreenBackgroundColor: [AnyObject]? = ZoomTheme.ZoomGradientWithOpacity
/// resultsScreenForegroundColor: UIColor      = UIColor.whiteColor()
///
/// progressBarColor: UIColor                = UIColor(red:0.04, green: 0.71, blue: 0.64, alpha:0.46)
/// progressBarBackgroundColor: UIColor      = UIColor(red:0.3, green: 0.3, blue: 0.3, alpha:0.26)
/// progressTextColor: UIColor               = UIColor.whiteColor()
///
/// tabBackgroundColor: UIColor         = UIColor(red:0.04, green:0.71, blue:0.64, alpha:1.0)
/// tabBackgroundSelectedColor: UIColor = UIColor(red:0.07, green:0.57, blue:0.76, alpha:1.0)
/// tabTextColor:UIColor                = UIColor(red:1.0, green:1.0, blue:1.0, alpha:1.0)
/// tabTextSelectedColor:UIColor        = UIColor(red:1.0, green:1.0, blue:1.0, alpha:1.0)
/// tabTextSuccessColor:UIColor         = UIColor(red:1.0, green:1.0, blue:1.0, alpha:1.0)
/// tabBackgroundSuccessColor: UIColor  = UIColor.blackColor()
///
/// fingerprintSuccesColor: UIColor                  = UIColor.greenColor()
///
///
/// \endcode
SWIFT_CLASS("_TtC18ZoomAuthentication17ZoomCustomization")
@interface ZoomCustomization : NSObject
@property (nonatomic) BOOL showAuthenticationFactorsTabBar;
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull mainBackgroundColors;
@property (nonatomic, strong) UIColor * _Nonnull mainForegroundColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonTextNormalColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonTextHighlightColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundHighlightColor;
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull resultsScreenBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull resultsScreenForegroundColor;
@property (nonatomic, strong) CAGradientLayer * _Nonnull progressBarColor;
@property (nonatomic, strong) UIColor * _Nonnull progressTextColor;
@property (nonatomic, strong) UIColor * _Nonnull progressSpinnerColor1;
@property (nonatomic, strong) UIColor * _Nonnull progressSpinnerColor2;
@property (nonatomic, strong) UIColor * _Nonnull tabBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull tabBackgroundSelectedColor;
@property (nonatomic, strong) UIColor * _Nonnull tabTextColor;
@property (nonatomic, strong) UIColor * _Nonnull tabTextSelectedColor;
@property (nonatomic, strong) UIColor * _Nonnull tabTextSuccessColor;
@property (nonatomic, strong) UIColor * _Nonnull tabBackgroundSuccessColor;
@property (nonatomic, strong) UIColor * _Nonnull fingerprintSuccesColor;
@property (nonatomic, strong) UIImage * _Nullable brandingLogo;
@property (nonatomic, copy) NSString * _Nullable preEnrollScreenTitle;
@property (nonatomic, copy) NSString * _Nullable preEnrollScreenSubtext;
- (nonnull instancetype)init;
@end

/// Represents the possible states of a user enrollment
typedef SWIFT_ENUM(NSInteger, ZoomEffectiveStrategy) {
/// User is not enrolled
  ZoomEffectiveStrategyNotEnrolled = 0,
/// User is enrolled with only the Face authenticator
  ZoomEffectiveStrategyZoom = 1,
/// User is enrolled with both the Face and Pin authenticators
  ZoomEffectiveStrategyZoomAndPin = 2,
/// User is enrolled with both the Face and Finger authenticators
  ZoomEffectiveStrategyZoomAndFinger = 3,
/// User is enrolled with all three of the Face, Finger, and Pin authenticators
  ZoomEffectiveStrategyZoomAndFingerAndPin = 4,
};

@class ZoomEnrollmentResult;

/// Applications should implement this delegate to receive results from an ZoomEnrollmentViewController
/// The method on this delegate will be called exactly once after the Zoom Session has completed
SWIFT_PROTOCOL("_TtP18ZoomAuthentication22ZoomEnrollmentDelegate_")
@protocol ZoomEnrollmentDelegate
- (void)onZoomEnrollmentResultWithResult:(ZoomEnrollmentResult * _Nonnull)result;
@end

enum ZoomEnrollmentStatus : NSInteger;

/// Represents results of a Zoom Enrollment Request
SWIFT_CLASS("_TtC18ZoomAuthentication20ZoomEnrollmentResult")
@interface ZoomEnrollmentResult : NSObject
/// Indicates whether the enrollment succeeded or the cause of failure
@property (nonatomic, readonly) enum ZoomEnrollmentStatus status;
/// State of the face enrollment after completion of enrollment session
@property (nonatomic, readonly) enum ZoomAuthenticatorState faceEnrollmentState;
/// Metrics collected during face enrollment
@property (nonatomic, readonly, strong) ZoomFaceBiometricMetrics * _Nullable faceMetrics;
/// State of the fingerprint enrollment after completion of enrollment session
@property (nonatomic, readonly) enum ZoomAuthenticatorState fingerprintEnrollmentState;
/// State of the pin pad enrollment after completion of enrollment session
@property (nonatomic, readonly) enum ZoomAuthenticatorState pinEnrollmentState;
/// Friendly representation of result object
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Represents the various end states of an enrollment session
typedef SWIFT_ENUM(NSInteger, ZoomEnrollmentStatus) {
/// The user was successfully enrolled
  ZoomEnrollmentStatusUserWasEnrolled = 0,
/// The user was not enrolled
  ZoomEnrollmentStatusUserNotEnrolled = 1,
/// The user prematurely cancelled out of the enrollment session
  ZoomEnrollmentStatusFailedBecauseUserCancelled = 2,
/// The operation could not be completed because the SDK was not validated prior to use.
  ZoomEnrollmentStatusFailedBecauseAppTokenNotValid = 3,
/// The camera access is prevented by user setting
  ZoomEnrollmentStatusFailedBecauseCameraPermissionDeniedByUser = 4,
/// The camera access is prevented by administrator policy
  ZoomEnrollmentStatusFailedBecauseCameraPermissionDeniedByAdministrator = 5,
/// The user could not be enrolled because a fingerprint sensor was available but disabled.
/// This occurs two or three factor enrollment was requested
  ZoomEnrollmentStatusFailedBecauseFingerprintDisabled = 6,
/// The enrollment failed because the user could not validate their fingerprint
  ZoomEnrollmentStatusFailedBecauseUserCouldNotValidateFingerprint = 7,
/// The enrollment terminated due to the app being terminated or put to sleep
  ZoomEnrollmentStatusFailedBecauseOfOSContextSwitch = 8,
/// Enrollment failed due to user exceeding the timeout limit
  ZoomEnrollmentStatusFailedBecauseOfTimeout = 9,
/// Enrollment failed due to low memory
  ZoomEnrollmentStatusFailedBecauseOfLowMemory = 10,
/// An error occurred while writing the biometric to disk – this most likely occurs if user device storage is full
  ZoomEnrollmentStatusFailedBecauseOfDiskWriteError = 11,
/// Enrollment failed due to wifi not turned on in development mode
  ZoomEnrollmentStatusFailedBecauseWifiNotOnInDevMode = 12,
/// Enrollment failed because there was no network connection in development mode
  ZoomEnrollmentStatusFailedBecauseNoConnectionInDevMode = 13,
/// Enrollment failed because user was either not alive or could not provide an enrollment of high enough quality
  ZoomEnrollmentStatusUserFailedToProvideGoodEnrollment = 14,
};


SWIFT_CLASS("_TtC18ZoomAuthentication28ZoomEnrollmentViewController")
@interface ZoomEnrollmentViewController : UIViewController
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
- (void)prepareForEnrollmentWithDelegate:(id <ZoomEnrollmentDelegate> _Nonnull)delegate userID:(NSString * _Nonnull)userID applicationPerUserEncryptionSecret:(NSString * _Nonnull)applicationPerUserEncryptionSecret secret:(NSString * _Nullable)secret;
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end


@interface ZoomEnrollmentViewController (SWIFT_EXTENSION(ZoomAuthentication))
@end

enum ZoomLivenessResult : NSInteger;

/// Represents results of a Zoom face biometric comparison
SWIFT_CLASS("_TtC18ZoomAuthentication24ZoomFaceBiometricMetrics")
@interface ZoomFaceBiometricMetrics : NSObject
/// A sample of images capturing during the face analysis.  This parameter is nil unless ZoomSDK.enableAuditTrail is set to true
@property (nonatomic, readonly, copy) NSArray<UIImage *> * _Nullable auditTrail;
/// The liveness level detected during the zoom session
@property (nonatomic, readonly) enum ZoomLivenessResult livenessResult;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Represents the possible availability states of the fingerprint hardware sensor on this device
typedef SWIFT_ENUM(NSInteger, ZoomFingerprintHardwareCapability) {
/// Device does not have a fingerprint sensor.
/// <ul>
///   <li>
///     A two factor enrollment requested when device is in this state will enroll with Zoom And Pin
///   </li>
///   <li>
///     A three factor enrollment requested when in this state will degrade to a two factor enrollment with Zoom and Pin.
///   </li>
/// </ul>
  ZoomFingerprintHardwareCapabilityNeverAvailable = 0,
/// Device supports a sufficiently capable fingerprint sensor but the user has not enabled touchid at the system level.
/// <ul>
///   <li>
///     A two factor enrollment requested when device is in this state will fail
///   </li>
///   <li>
///     A three factor enrollment requested when device is in this state will fail
///   </li>
/// </ul>
  ZoomFingerprintHardwareCapabilityNotCurrentlyAvailable = 1,
/// Device supports a sufficiently capable fingerprint sensor but access to touchid is currently locked by iOS.  User must enter their pin to re-enable.
/// <ul>
///   <li>
///     A two factor enrollment requested when device is in this state will fail
///   </li>
///   <li>
///     A three factor enrollment requested when device is in this state will fail
///   </li>
/// </ul>
  ZoomFingerprintHardwareCapabilityCurrentlyLockedOut = 2,
/// Device supports fingerprint
  ZoomFingerprintHardwareCapabilityAvailable = 3,
};


/// Represents results of a fingerprint biometric comparison
SWIFT_CLASS("_TtC18ZoomAuthentication22ZoomFingerprintMetrics")
@interface ZoomFingerprintMetrics : NSObject
@property (nonatomic, readonly) BOOL success;
@property (nonatomic, readonly, copy) NSString * _Nullable errorString;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Represents the estimated likilihood that the subject in the ZoOm session is alive.
/// Low Liveness is indicative of spoof attacks or other attempts to fool the biometric verification system with physical objects which attempt to mimic the characteristics of the biometric (photographs, videos, masks etc) and/or poor environment for measuring liveness.
typedef SWIFT_ENUM(NSInteger, ZoomLivenessResult) {
  ZoomLivenessResultLivenessUndetermined = 0,
  ZoomLivenessResultAlive = 1,
};


/// Represents results of a pin passcode comparison
SWIFT_CLASS("_TtC18ZoomAuthentication14ZoomPinMetrics")
@interface ZoomPinMetrics : NSObject
@property (nonatomic, readonly) BOOL success;
@property (nonatomic, readonly) NSInteger retryCount;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

enum ZoomStrategy : NSInteger;
enum ZoomSDKStatus : NSInteger;
enum ZoomUserEnrollmentStatus : NSInteger;

/// The ZoomSDKProtocol exposes methods the app can use to configure the behavior of Zoom.
SWIFT_PROTOCOL("_TtP18ZoomAuthentication15ZoomSDKProtocol_")
@protocol ZoomSDKProtocol
/// initialize <em>must</em> be called at least once by the application before invoking any SDK operations.
/// This function may be called repeatedly without harm.
/// \param appToken Identifies the client for determination of license capabilities
///
/// \param enrollmentStrategy Configures the enrollment strategy that will be used by Zoom.
///
/// \param completion Callback after api token validation has completed
///
- (void)initializeWithAppToken:(NSString * _Nonnull)appToken enrollmentStrategy:(enum ZoomStrategy)enrollmentStrategy completion:(void (^ _Nullable)(BOOL))completion;
/// initialize <em>must</em> be called at least once by the application before invoking any SDK operations.
/// This function may be called repeatedly without harm.
/// \param appToken Identifies the client for determination of license capabilities
///
/// \param enrollmentStrategy Configures the enrollment and authentication methodology that will be used by Zoom
///
/// \param interfaceCustomization Configures the look and feel of Zoom
///
/// \param completion Optional parameter which may be used to customize the look and feel of Zoom
///
- (void)initializeWithAppToken:(NSString * _Nonnull)appToken enrollmentStrategy:(enum ZoomStrategy)enrollmentStrategy interfaceCustomization:(ZoomCustomization * _Nonnull)interfaceCustomization completion:(void (^ _Nullable)(BOOL))completion;
/// Convenience method to check if the zoom sdk client app token is valid.
/// ZoOm requires that the app successfully initializes the SDK and receives confirmation of a valid app token at least once before launching an enrollment or authentication.  After the initial validation, the SDK will allow a limited number of enrollments, or authentications without any further
/// requirement for successful round-trip connection to the ZoOm server. This allows the app to use ZoOm for a limited time without network connectivity.  During this ‘grace period’, the function will return ‘true’.
///
/// returns:
/// True, if the SDK license has been validated, false otherwise.
- (BOOL)isAppTokenValid SWIFT_WARN_UNUSED_RESULT;
- (enum ZoomSDKStatus)getStatus SWIFT_WARN_UNUSED_RESULT;
/// Preload FacialRecognition models – this can be used to reduce the amount of time it takes to initialize a
/// ZoomEnrollmentViewController or ZoomAuthenticationViewController.
/// You may want to call this function when transitioning to a ViewController in your application from which you intend to launch Zoom.
/// This insures that Zoom will launch as quickly as possible when requested.
- (void)preload;
/// Verifies if the specified user is enrolled with Zoom
/// \param userID The userID to query for enrollment status
///
///
/// returns:
/// True if user is enrolled, false otherwise
- (BOOL)isUserEnrolledWithUserID:(NSString * _Nonnull)userID SWIFT_WARN_UNUSED_RESULT;
/// Checks the status of the specified user
/// \param userID The userID to query for enrollment status
///
///
/// returns:
/// Value representing the user’s status
- (enum ZoomUserEnrollmentStatus)getUserEnrollmentStatusWithUserID:(NSString * _Nonnull)userID SWIFT_WARN_UNUSED_RESULT;
/// Returns the set of authenticators that a specified user is enrolled with.
/// \param userID The userID to query for enrollment status
///
///
/// returns:
/// The authenticators the user was enrolled with if enrolled – or NOT_ENROLLED if user is not enrolled
- (enum ZoomEffectiveStrategy)enrolledAuthenticatorsForUserID:(NSString * _Nonnull)forUserID SWIFT_WARN_UNUSED_RESULT;
/// Convenience method to check for camera permissions.
/// This function is used to check the camera permission status prior to using Zoom.  If camera permission has not been previously granted,
/// Zoom will display a UI asking the user to allow permission.  Some applications may wish to manage camera permission themselves - those applications
/// should verify camera permissions prior to transitioning to Zoom.
///
/// returns:
/// Value representing the current camera permission status
@property (nonatomic, readonly) enum ZoomCameraPermissionStatus cameraPermissionStatus;
/// Convenience method to check the system’s biometric status.
///
/// returns:
/// Value representing the current biometric (fingerprint) status
@property (nonatomic, readonly) enum ZoomFingerprintHardwareCapability fingerprintStatus;
/// Delete a specific Zoom User from the device by userID
/// \param userID Identifies user to be deleted
///
///
/// throws:
/// error indicating reason deletion did not complete
- (BOOL)deleteUserWithUserID:(NSString * _Nonnull)userID error:(NSError * _Nullable * _Nullable)error;
/// Delete all Zoom user and biometric data from the device
///
/// throws:
/// error indicating reason deletion did not complete
- (BOOL)deleteAllEnrollmentsAndReturnError:(NSError * _Nullable * _Nullable)error;
/// If this property is set to true, then Zoom will include a sample of some of the camera frames collected during the enrollment/authentication process
/// on the Authentication/Enrollment response.
@property (nonatomic) BOOL auditTrailEnabled;
/// Fetches the version number of the current Zoom SDK release
///
/// returns:
/// version number of sdk release package
@property (nonatomic, readonly, copy) NSString * _Nonnull version;
/// Instantiates and returns a new ZoomEnrollmentViewController – for usage in contexts where programmatic creation and triggering of session is preferable to using a storyboard segue.
/// Caller should call prepareForEnrollment and then presentViewController on returned object.
/// Zoom also supports storyboard/segue transitions via storyboard reference.  As with the programmatic view controller creation, the caller should configure the destinationViewController by calling prepareForEnrollment prior to presentation.
/// | storyboard         | referenced id                | bundle                               |
/// |––––––––––|——————————|–––––––––––––––––––|
/// | ZoomAuthentication | ZoomEnrollmentViewController | com.facetec.ZoomAuthentication |
/// The caller should not store any reference to the view controller when seguing or when using the object returned from this method.
///
/// returns:
/// A new ZoomEnrollmentViewController
- (ZoomEnrollmentViewController * _Nonnull)createEnrollmentVC SWIFT_WARN_UNUSED_RESULT;
/// Instantiates and returns a new ZoomEnrollmentViewController – for usage in contexts where programmatic creation and triggering of session is preferable to using a storyboard segue.
/// Caller should call prepareForEnrollment and then presentViewController on returned object.
/// Zoom also supports storyboard/segue transitions via storyboard reference.  As with the programmatic view controller creation, the caller should configure the destinationViewController by calling prepareForAuthentication prior to presentation.
/// The storyboard reference should use the following parameters:
/// | storyboard         | referenced id                    | bundle                               |
/// |––––––––––|–––––––––––––––––|–––––––––––––––––––|
/// | ZoomAuthentication | ZoomAuthenticationViewController | com.facetec.ZoomAuthentication |
/// The caller should not store any reference to the view controller when seguing or when using the object returned from this method.
///
/// returns:
/// A new ZoomEnrollmentViewController
- (ZoomAuthenticationViewController * _Nonnull)createAuthenticationVC SWIFT_WARN_UNUSED_RESULT;
@end

/// Represents the status of the SDK
typedef SWIFT_ENUM(NSInteger, ZoomSDKStatus) {
/// Initialize was never attempted
  ZoomSDKStatusNeverInitialized = 0,
/// The app token provided was verified
  ZoomSDKStatusInitialized = 1,
/// The app token could not be verified
  ZoomSDKStatusNetworkIssues = 2,
/// The app token provided was invalid
  ZoomSDKStatusInvalidToken = 3,
/// The current devices does not meet security requirements
  ZoomSDKStatusDeviceInsecure = 4,
/// The current version of the SDK is deprecated
  ZoomSDKStatusVersionDeprecated = 5,
};

/// Represents the strategy that Zoom will use to enroll and authenticate a user
typedef SWIFT_ENUM(NSInteger, ZoomStrategy) {
/// Configures Zoom to use Facial Recognition only
  ZoomStrategyZoomOnly = 1,
/// Configures Zoom to use Facial Recognition and Fingerprint if fingerprint available.  If fingerprint is not available, Zoom will use Facial Recognition and Pin
  ZoomStrategyTwoFactor = 2,
/// Configures Zoom to use Facial Recognition, Pin and Fingerprint if fingerprint available.  If fingerprint is not available, Zoom will use Facial Recognition and Pin
  ZoomStrategyThreeFactor = 3,
};

/// Represents the enrollment status of a user id.
typedef SWIFT_ENUM(NSInteger, ZoomUserEnrollmentStatus) {
/// The user is enrolled and ready to authenticate
  ZoomUserEnrollmentStatusUserEnrolled = 0,
/// The user is not enrolled
  ZoomUserEnrollmentStatusUserNotEnrolled = 1,
/// The user was enrolled but is no longer valid due to device security changes
  ZoomUserEnrollmentStatusUserInvalidated = 2,
};

#pragma clang diagnostic pop