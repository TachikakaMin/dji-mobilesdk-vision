//
//  DJIDiagnostics.h
//  DJISDK
//
//  Copyright © 2016, DJI. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN


/**
 *  DJI component for diagnostics.
 */
typedef NS_ENUM(NSUInteger, DJIDiagnosticsWarningComponent) {

    /**
     *  Camera component.
     */
    DJIDiagnosticsWarningComponentCamera = 1000,
    

    /**
     *  Gimbal component.
     */
    DJIDiagnosticsWarningComponentGimbal = 2000,
    

    /**
     *  Battery component.
     */
    DJIDiagnosticsWarningComponentBattery = 3000,
    

    /**
     *  RemoteController component.
     */
    DJIDiagnosticsWarningComponentRemoteController = 4000,
    

    /**
     *  Central component.
     */
    DJIDiagnosticsWarningComponentCentral = 5000,
    

    /**
     *  Video component.
     */
    DJIDiagnosticsWarningComponentVideo = 6000,
    

    /**
     *  Airlink component.
     */
    DJIDiagnosticsWarningComponentAirlink = 7000,
    

    /**
     *  FlightController component.
     */
    DJIDiagnosticsWarningComponentFlightController = 8000,
    

    /**
     *  Vision component.
     */
    DJIDiagnosticsWarningComponentVision = 9000,
    

    /**
     *  RTK component.
     */
    DJIDiagnosticsWarningComponentRTK = 10000,
};


/**
 *  DJI Camera error diagnostics.
 */
typedef NS_ENUM(NSInteger, DJIDiagnosticsErrorCamera) {
    

    /**
     *  Camera upgrade error.
     */
    DJIDiagnosticsErrorCameraUpgradeError = 1001,
    

    /**
     *  Camera sensor error.
     */
    DJIDiagnosticsErrorCameraSensorError = 1002,
    

    /**
     *  Camera is overheated.
     */
    DJIDiagnosticsErrorCameraOverHeat = 1003,
    

    /**
     *  Camera encryption error.
     */
    DJIDiagnosticsErrorCameraEncryptionError = 1004,
    

    /**
     *  SD card or internal storage can't be used when USB connected.
     */
    DJIDiagnosticsErrorCameraUSBConnected = 1005,
    

    /**
     *  NO SD card.
     */
    DJIDiagnosticsErrorCameraNoSDCard = 1006,
    

    /**
     *  SD card error. this error include different reasons and solutions.
     */
    DJIDiagnosticsErrorCameraSDCardError = 1007,
    

    /**
     *  No internal storge. Only supported by Mavic Air and Mavic 2 series.
     */
    DJIDiagnosticsErrorCameraNoInternalStorage = 1008,
    

    /**
     *  Internal storage error. For more detail, please refer to the reason and the
     *  solution.
     */
    DJIDiagnosticsErrorCameraInternalStorageError = 1009,


    /**
     *  No SSD, Only supported by Inspire 2.
     */
    DJIDiagnosticsErrorCameraNoSSD = 1010,


    /**
     *  SSD error. Only supported by Inspire 2. For more detail, please refer to the
     *  reason and the solution.
     */
    DJIDiagnosticsErrorCameraSSDError = 1011,
};


/**
 *  DJI Gimbal error diagnostics.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorGimbal){
    

    /**
     *  Gimbal gyroscope error.
     */
    DJIDiagnosticsErrorGimbalGyroscopeError = 2001,
    

    /**
     *  Gimbal pitch error.
     */
    DJIDiagnosticsErrorGimbalPitchError = 2002,
    

    /**
     *  Gimbal roll error.
     */
    DJIDiagnosticsErrorGimbalRollError = 2003,
    

    /**
     *  Gimbal yaw error.
     */
    DJIDiagnosticsErrorGimbalYawError = 2004,
    

    /**
     *  Gimbal cannot receive the data from the flight controller.
     */
    DJIDiagnosticsErrorGimbalConnectToFCError = 2005,
    

    /**
     *  Gimbal motor is overloaded. Reboot automatically.
     */
    DJIDiagnosticsErrorGimbalWaitRestart = 2006,
    

    /**
     *  Gimbal overload.
     */
    DJIDiagnosticsErrorGimbalOverload = 2007,
    

    /**
     *  Gimbal gyroscope is broken.
     */
    DJIDiagnosticsErrorGimbalGyroscopeBroken = 2008,
    

    /**
     *  Gimbal motor is protected.
     */
    DJIDiagnosticsErrorGimbalMotorProtected = 2009,
    

    /**
     *  Gimbal vibration is abnormal.
     */
    DJIDiagnosticsErrorGimbalVibrationAbnormal = 2010,


    /**
     *  Gimbal startup process is blocked.
     */
    DJIDiagnosticsErrorGimbalStartupBlock = 2011,
    

    /**
     *  Gimbal calibration error.
     */
    DJIDiagnosticsErrorGimbalCalibrateError = 2012,
    

    /**
     *  Gimbal run crazy.
     */
    DJIDiagnosticsErrorGimbalRunCrazy = 2013,
    

    /**
     *  Gimbal reaches roll limit.
     */
    DJIDiagnosticsErrorGimbalRollMechLimitError = 2014,
    

    /**
     *  Gimbal reaches pitch limit.
     */
    DJIDiagnosticsErrorGimbalPitchMechLimitError = 2015,
    

    /**
     *  Gimbal sensor initialization error.
     */
    DJIDiagnosticsErrorGimbalSectorsJudgeError = 2016,
};


/**
 *  DJI Battery error diagnostics.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorBattery){
    

    /**
     *  Battery overcurrent happens during the discharge process.
     */
    DJIDiagnosticsErrorBatteryDischargeOverCurrent = 3001,
    

    /**
     *  Battery is overheated during the discharge process.
     */
    DJIDiagnosticsErrorBatteryDischargeOverHeat = 3002,
    

    /**
     *  The temperature is too low for the battery to work.
     */
    DJIDiagnosticsErrorBatteryLowTemperature = 3003,
    

    /**
     *  Battery cell is broken.
     */
    DJIDiagnosticsErrorBatteryCellBroken = 3004,
    

    /**
     *  Battery needs a complete charge and discharge cycle.
     */
    DJIDiagnosticsErrorBatteryNeedStudy = 3005,
    

    /**
     *  Battery is not a DJI battery.
     */
    DJIDiagnosticsErrorBatteryIllegal = 3006,
    

    /**
     *  The battery is not installed properly.
     */
    DJIDiagnosticsErrorBatteryNotInPosition = 3007,
    

    /**
     *  Battery communication failed.
     */
    DJIDiagnosticsErrorBatteryCommunicationFailed = 3008,
    

    /**
     *  The number of battery is not enough.
     */
    DJIDiagnosticsErrorBatteryNotEnough = 3009,
    

    /**
     *  Battery short-circuit.
     */
    DJIDiagnosticsErrorBatteryShortcut = 3010,
    

    /**
     *  Battery voltage is low.
     */
    DJIDiagnosticsErrorBatteryLowVoltage = 3011,
};


/**
 *  DJI Remoter controller error diagnostics.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorRemoteController){
    

    /**
     *  Remote controller FPGA error.
     */
    DJIDiagnosticsErrorRemoteControllerFPGAError = 4001,
    

    /**
     *  Remote controller transmitter error.
     */
    DJIDiagnosticsErrorRemoteControllerTransmitterError = 4002,
    

    /**
     *  Remote controller battery error.
     */
    DJIDiagnosticsErrorRemoteControllerBatteryError = 4003,
    

    /**
     *  Remote controller GPS error.
     */
    DJIDiagnosticsErrorRemoteControllerGPSError = 4004,
    

    /**
     *  Remote controller encryption error.
     */
    DJIDiagnosticsErrorRemoteControllerEncryptionError = 4005,
    

    /**
     *  Remote controller calibration is required.
     */
    DJIDiagnosticsErrorRemoteControllerNeedCalibration = 4006,
    

    /**
     *  Remote controller battery is low.
     */
    DJIDiagnosticsErrorRemoteControllerBatteryLow = 4007,
    

    /**
     *  Remote controller is idle over a long period of time.
     */
    DJIDiagnosticsErrorRemoteControllerIdleTooLong = 4008,
    

    /**
     *  Remote controller is reset, please check RC settings
     */
    DJIDiagnosticsErrorRemoteControllerReset = 4009,
    

    /**
     *  Remote controller is overheated.
     */
    DJIDiagnosticsErrorRemoteControllerOverHeat = 4010,
};


/**
 *  DJIDiagnosticsErrorCentral.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorCentral){
    

    /**
     *  Battery connection lost.
     */
    DJIDiagnosticsErrorCentralConnectToBatteryError = 5001,
    

    /**
     *  GPS connection lost.
     */
    DJIDiagnosticsErrorCentralConnectToGPSError = 5002,
    

    /**
     *  Flight controller connection lost.
     */
    DJIDiagnosticsErrorCentralConnectToFlightControllerError = 5003,
    

    /**
     *  Remoter controller connection lost.
     */
    DJIDiagnosticsErrorCentralConnectToRemoteControllerError = 5004,


    /**
     *  Camera connection lost.
     */
    DJIDiagnosticsErrorCentralConnectToCameraError = 5005,
    

    /**
     *  Gimbal connection lost.
     */
    DJIDiagnosticsErrorCentralConnectToGimbalError = 5006,
};


/**
 *  DJIDiagnosticsErrorVideo.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorVideo){
    

    /**
     *  Video decoder encryption error.
     */
    DJIDiagnosticsErrorVideoDecoderEncryptionError = 6001,
    

    /**
     *  Deserializer disconnected.
     */
    DJIDiagnosticsErrorVideoDecoderConnectToDeserializerError = 6002,
};


/**
 *  DJI Airlink error diagnostics.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorAirlink){
    

    /**
     *  Aircraft Encoder Error.
     */
    DJIDiagnosticsErrorAirlinkEncoderError = 7001,
    

    /**
     *  The aircraft is upgrading.
     */
    DJIDiagnosticsErrorAirlinkEncoderUpgrade = 7002,
    

    /**
     *  Aircraft signal lost.
     */
    DJIDiagnosticsErrorAirlinkSignalLost = 7003,
};


/**
 *  DJIDiagnosticsErrorFlightController.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorFlightController){
    

    /**
     *  IMU calibration is required.
     */
    DJIDiagnosticsErrorFlightControllerIMUNeedCalibration = 8001,
    

    /**
     *  Incomplete IMU calibration.
     */
    DJIDiagnosticsErrorFlightControllerIMUCalibrationIncomplete = 8002,
    

    /**
     *  IMU data error.
     */
    DJIDiagnosticsErrorFlightControllerIMUDataError = 8003,
    

    /**
     *  General IMU error.
     */
    DJIDiagnosticsErrorFlightControllerIMUError = 8004,
    

    /**
     *  IMU initialization failed.
     */
    DJIDiagnosticsErrorFlightControllerIMUInitFailed = 8005,
    

    /**
     *  Barometer initialization failed.
     */
    DJIDiagnosticsErrorFlightControllerBarometerInitFailed = 8006,
    

    /**
     *  Barometer error.
     */
    DJIDiagnosticsErrorFlightControllerBarometerError = 8007,
    

    /**
     *  Accelerometer initialization failed.
     */
    DJIDiagnosticsErrorFlightControllerAccelerometerInitFailed = 8008,
    

    /**
     *  Gyroscope error.
     */
    DJIDiagnosticsErrorFlightControllerGyroscopeError = 8009,
    

    /**
     *  Aircraft attitude angle is too large.
     */
    DJIDiagnosticsErrorFlightControllerAttitudeError = 8010,
    

    /**
     *  Data recorder errors.
     */
    DJIDiagnosticsErrorFlightControllerDataRecordError = 8011,
    

    /**
     *  Failed to take off.
     */
    DJIDiagnosticsErrorFlightControllerTakeoffFailed = 8012,
    

    /**
     *  Flight Controller System error.
     */
    DJIDiagnosticsErrorFlightControllerSystemError = 8013,
    

    /**
     *  Compass needs restart.
     */
    DJIDiagnosticsErrorFlightControllerCompassNeedRestart = 8014,
    

    /**
     *  Compass rebooting is required.
     */
    DJIDiagnosticsErrorFlightControllerCompassAbnormal = 8015,
    

    /**
     *  Aircraft is warming up.
     */
    DJIDiagnosticsErrorFlightControllerWarmingUp = 8016,
    

    /**
     *  Using the wrong propellers. Inspire 2 has propellers for high  altitudes and low
     *  altitudes. This error will be present when the  wrong propellers are being used
     *  at the wrong altitude.
     */
    DJIDiagnosticsErrorFlightControllerUsingWrongPropellers = 8017,
    

    /**
     *  Strong gale warning.
     */
    DJIDiagnosticsErrorFlightControllerStrongGaleWarning = 8018,


    /**
     *  MC is reading flight data.
     */
    DJIDiagnosticsErrorFlightControllerMCReadingData = 8019,
    

    /**
     *  MC data error.
     */
    DJIDiagnosticsErrorFlightControllerMCDataError = 8020,
    

    /**
     *  Aircraft has not enough force.
     */
    DJIDiagnosticsErrorFlightControllerNotEnoughForce = 8021,
    

    /**
     *  Go home failed.
     */
    DJIDiagnosticsErrorFlightControllerGoHomeFailed = 8022,
    

    /**
     *  Remote controller out of controller, except when aircraft go home.
     */
    DJIDiagnosticsErrorFlightControllerOutOfControl = 8023,
    

    /**
     *  Barometer stuck in the air.
     */
    DJIDiagnosticsErrorFlightControllerBarometerStuckInAir = 8024,
    

    /**
     *  Aircraft GPS Error.
     */
    DJIDiagnosticsErrorFlightControllerGPSError = 8025,

};


/**
 *  DJI Vision error diagnostics.
 */
typedef NS_ENUM (NSInteger, DJIDiagnosticsErrorVision){
    

    /**
     *  Propeller Guard Mounted.
     */
    DJIDiagnosticsErrorVisionPropellerGuard = 9001,
    

    /**
     *  Vision sensor error.
     */
    DJIDiagnosticsErrorVisionSensorError = 9002,
    

    /**
     *  Vision sensor calibration error.
     */
    DJIDiagnosticsErrorVisionSensorCalibrationError = 9003,
    

    /**
     *  Vision sensor communication error.
     */
    DJIDiagnosticsErrorVisionSensorCommunicationError = 9004,
    

    /**
     *  Vision system error.
     */
    DJIDiagnosticsErrorVisionSystemError = 9005,
    

    /**
     *  Vision system calibration is required.
     */
    DJIDiagnosticsErrorVisionSystemNeedCalibration = 9006,
    

    /**
     *  Tof sensor error.
     */
    DJIDiagnosticsErrorVisionTofSenserError = 9007,
    

    /**
     *  3D Tof sensor error.
     */
    DJIDiagnosticsErrorVision3DTofSenserError = 9008,
};


/**
 *  DJIDiagnosticsErrorRTK.
 */
typedef NS_ENUM(NSInteger, DJIDiagnosticsErrorRTK) {

    /**
     *  RTK Positioning Error.
     */
    DJIDiagnosticsErrorRTKPositioningError = 10001,

    /**
     *  RTK Orienteering Error.
     */
    DJIDiagnosticsErrorRTKOrienteeringError = 10002,
};


/**
 *  Product Diagnostics.
 */
@interface DJIDiagnostics : NSObject


/**
 *  Component index of the diagnostics. It is valid when the diagnostics is related
 *  to camera  or gimbal and the connected product has multiple gimbals and cameras
 *  (e.g. M210).
 */
@property(nonatomic, readonly) NSUInteger componentIndex;


/**
 *  Diagnostics error code.
 */
@property(nonatomic, readonly) NSInteger code;


/**
 *  The reason of the error.
 */
@property(nonatomic, readonly) NSString *_Nonnull reason;


/**
 *  The suggested solution for the error.
 */
@property(nonatomic, readonly) NSString *_Nullable solution;


/**
 *  The component for the error.
 */
@property(nonatomic, readonly) DJIDiagnosticsWarningComponent component;


@end

NS_ASSUME_NONNULL_END
