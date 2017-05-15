//
//  Phoenix.h
//  Wrapper for openbr,opencv
//
//  Created by FaceTec, Inc. on 7/27/15.
//  Copyright (c) 2015 FaceTec, Inc.. All rights reserved.
//

#ifndef phoenix_h
#define phoenix_h

#import <Foundation/Foundation.h>

#import "TargetConditionals.h"
#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>
typedef UIImage NUIImage;

#else

#import <AppKit/AppKit.h>
typedef NSImage NUIImage;

#endif

// defines public API of Phoenix Objective-C Module

// information sent back to sdk for active feedback after a frame is sent into zoom processing
typedef NS_ENUM(NSInteger, PhoenixPhase) {
    ZOOM_CLOSE,
    ZOOM_FAR,
    MID_ENROLLMENT_1,
    MID_ENROLLMENT_2,
    MID_ENROLLMENT_GLASSES,
    PROCESSING_COMPLETE_TIMED_OUT,
    PROCESSING_COMPLETE_SUCCESS,
    PROCESSING_COMPLETE_FAILURE
};

// information send back to sdk via phoenix_retrieveFaceFeedback()
typedef NS_ENUM(NSInteger, ZoomFaceFeedback) {
    HOLD_STEADY,
    FACE_NOT_FOUND,
    MOVE_FACE_CLOSER,
    MOVE_FACE_FURTHER_AWAY,
    MOVE_FACE_AWAY_A_LITTLE,
    FACE_CENTERED_TOO_FAR_TOP,
    FACE_CENTERED_TOO_FAR_BOTTOM,
    FACE_CENTERED_TOO_FAR_LEFT,
    FACE_CENTERED_TOO_FAR_RIGHT,
    FACE_ROTATED_TOO_FAR_LEFT,
    FACE_ROTATED_TOO_FAR_RIGHT,
    MOVE_PHONE_TO_EYE_LEVEL,
    FACE_NOT_LOOKING_STRAIGHT_AHEAD
};

// specify ZoomSession mode for authentication or enrollment
typedef NS_ENUM(NSInteger, ZoomSessionType) {
    ENROLL,
    AUTHENTICATE
};

// result of an authentication
typedef NS_ENUM(NSInteger, ZoomAuthenticationMatchResult) {
    AUTHENTICATED,
    NOT_AUTHENTICATED
};

typedef NS_ENUM(NSInteger, PhoenixLivenessFeedback) {
    LIVENESS_NOT_CALCULATED = 0,
    LIVENESS_UNDETERMINED = 1,
    ALIVE = 2
};

typedef NS_ENUM(NSInteger, PhoenixMotionFeedback) {
    MOTION_NOT_CALCULATED = 0,
    MOTION_CALCULATED_AND_FAILED = 1,
    MOTION_CALCULATED_AND_SUCCEEDED = 2
};

typedef NS_ENUM(NSInteger, PhoenixGlassesStateFeedback) {
    GLASSES_SCORES_NOT_CALCULATED = 0,
    GLASSES_SCORES_MATCHED = 1,
    ENROLL_WITH_GLASSES_AUTHENTICATE_WITHOUT_GLASSES = 2,
    ENROLL_WTHOUT_GLASSES_AUTHENTICATE_WITH_GLASSES = 3,
    DETECTED_GLASSES_DURING_ENROLLMENT = 4,
    DID_NOT_DETECT_GLASSES_DURING_ENROLLMENT = 5
};

typedef NS_ENUM(NSInteger, ZoomMeasurementResult) {
    UNDETERMINED = 0,
    UNZOOMED = 1,
    ZOOMED = 2
};

#ifdef __cplusplus

extern "C" {
#endif
    
    /**
     Initialize and de-initialize openbr
     */
    void phoenix_initialize();
    void phoenix_initializeFromBundle(NSString* bundleName);
    void phoenix_initializeFromPath(NSString* path);
    void phoenix_deinitialize();

    /**
     Allocate and De-Allocate SessionState -- a container for native data created/mutated during the course of a session
     */
    void phoenix_beginZoomSession(ZoomSessionType sessionType);
    BOOL phoenix_endZoomSession();
    void phoenix_resumeEnrollment();

    /**
     Configure properties on the session which influence data capture behavior
     */
    void phoenix_setStringSampleMetadata(NSString* key, NSString *value);
    void phoenix_setIntSampleMetadata(NSString* key, int value);
    void phoenix_setDoubleSampleMetadata(NSString* key, double value);
    void phoenix_configureAuditTrailEnabled(BOOL enabled);
    void phoenix_configureSendDiagnosticsToFaceTecEnabled(BOOL enabled);
    
    /**
     Mutate biometric properties on the session
     */
    void phoenix_loadBiometricPackage(NSString* serializedBiometric);
    BOOL phoenix_mergeBiometric();

    /**
     Process Image/Motion in the context of the currently active session
     */
    void phoenix_processImage(CVImageBufferRef img);
    void phoenix_processMotionSample(double xAcceleration, double yAcceleration, double zAcceleration);

    /**
     Retrieve data collected/properties-computed curing the session
     */
    PhoenixPhase phoenix_retrievePhase();
    ZoomFaceFeedback phoenix_retrieveFaceFeedback();

    float phoenix_retrieveAuthenticationResult();
    BOOL phoenix_retrieveHasRecognitionSucceeded();
    PhoenixLivenessFeedback phoenix_retrieveLivenessResult();
    PhoenixLivenessFeedback phoenix_retrieveEnrollmentLivenessResult();
    PhoenixMotionFeedback phoenix_retrieveCorrelatedMotionDetection();
    PhoenixGlassesStateFeedback phoenix_retrieveGlassesState();
    bool phoenix_retrieveSufficientLivenessDataWasCaptured();

    NSString* phoenix_retrieveBiometricPackage();
    
    NSArray<NUIImage*>* phoenix_retrieveAuditTrail();
    NSString* phoenix_retrieveDiagnosticModel(int maxDiagnosticFramesToSend);
        
    NSArray<NSArray<NSNumber*>*>* phoenix_retrieveMotionData();
    
    NSString* phoenix_getRetryReasonMessage();
    
    BOOL _phoenix_isPhoenixInitializedForDiagnostics();
    
#ifdef __cplusplus
}
#endif

#endif
