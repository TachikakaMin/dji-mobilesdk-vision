//
//  DJIRTKBaseStation.h
//  DJISDK
//
//  Copyright © 2019 DJI. All rights reserved.
//

#import <DJISDK/DJISDK.h>

@class DJIRTKBaseStation;
@class DJIRTKBaseStationBatteryState;
@class DJIRTKBaseStationState;
NS_ASSUME_NONNULL_BEGIN


/**
 *  This protocol provides a delegate method to update the base station state.
 */
@protocol DJIRTKBaseStationDelegate <NSObject>


/**
 *  Callback function that updates the RTK base station battery state. Only
 *  Supported by Phantom 4 RTK and M200 series V2.
 *  
 *  @param baseStation Instance of the Base Station for which battery state will be updated.
 *  @param state Base station battery State.
 */
- (void)baseStation:(DJIRTKBaseStation *_Nonnull)baseStation didUpdateBaseStationBatteryState:(DJIRTKBaseStationBatteryState *)state;


/**
 *  Callback function that updates the RTK base station state. Only Supported by
 *  Phantom 4 RTK and M200 series V2.
 *  
 *  @param baseStation Instance of the Base Station for which state will be updated.
 *  @param state Base station State.
 */
- (void)baseStation:(DJIRTKBaseStation *_Nonnull)baseStation didUpdateBaseStationState:(DJIRTKBaseStationState *)state;

@end


/**
 *  RTK Base Station.
 */
@interface DJIRTKBaseStation : DJIBaseComponent


/**
 *  DJI base station delegate.
 */
@property(nonatomic, weak) id<DJIRTKBaseStationDelegate> delegate;


/**
 *  Gets the referencing location manually configured to the  base station. When a
 *  user can get a more accurate  location (coordinate with less absolute error) of
 *  the base  station by using external tools, the accurate location can  be set to
 *  the base station to improve the accuracy of the  aircraft location. If the
 *  offset between the referencing  location and the location detected by the ground
 *  system is  larger than 5 meters, the base station will ignore the referencing
 *  location. It is only supported by Phantom 4 RTK and M200 series V2.
 *  
 *  @param location The referencing location of the base station.
 *  @param error Error if there is any.
 *  @param completion Completion block that receives the execution result.
 */
- (void)getBaseStationReferencingLocationWithCompletion:(void (^_Nonnull)(CLLocation *_Nullable location, NSError *_Nullable error))completion;


/**
 *  Sets the referencing location of the base station to improve the accuracy.  When
 *  a user  can get a more accurate location (coordinate with less absolute error)
 *  of the base station  by using external tools, the accurate location can be set
 *  to the  base station to improve  the accuracy of the aircraft location. If the
 *  offset between  the referencing location and  the location detected by the base
 *  station is larger than  5 meters, the base station will  ignore the referencing
 *  location. It is only supported  by Phantom 4 RTK and M200 series V2.
 *  
 *  @param location The referencing location of the base station.
 *  @param completion Completion block that receives the execution result.
 */
- (void)setBaseStationReferencingLocation:(CLLocation *)location withCompletion:(DJICompletionBlock)completion;


/**
 *  Reset RTK base station's location. This will make base station's location type
 *  became `DJIRTKBaseStationLocationTypeAuto`. The previously set location  by
 *  `setBaseStationReferencingLocation:withCompletion` will be invalid.
 *  
 *  @param completion Completion block that receives the execution result.
 */
- (void)resetRTKBaseStationLocationWithCompletion:(DJICompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
