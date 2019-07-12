//
//  DJIVideoFeedBaseTypes.h
//  DJISDK
//
//  Copyright © 2019 DJI. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/**
 *  The physical source of a video feed.
 */
typedef NS_ENUM(NSInteger, DJIVideoFeedPhysicalSource) {

    /**
     *  The video feed is from the main camera. It is the physical source used by most
     *  of DJI products.  `DJIVideoFeedPhysicalSourceLeftCamera`  and
     *  `DJIVideoFeedPhysicalSourceRightCamera` are used instead in  M210 series and
     *  M210 V2 series.
     */
    DJIVideoFeedPhysicalSourceMainCamera,
    

    /**
     *  The video feed is from the FPV camera on Inspire 2, M200 series and M200 V2
     *  series.
     */
    DJIVideoFeedPhysicalSourceFPVCamera,
    

    /**
     *  The video feed is from one of the LB ports (AV or HDMI) while EXT Port is
     *  enabled.  It is only used for stand-alone Lightbridge 2 or aircraft with stand-
     *  alone Lightbridge 2 modules (e.g. M600).
     */
    DJIVideoFeedPhysicalSourceLB,
    

    /**
     *  The video feed is from EXT port while EXT port is enabled. It is only used for
     *  Lightbridge 2 or aircrafts with Lightbridge 2 (e.g. M600).
     */
    DJIVideoFeedPhysicalSourceEXT,
    

    /**
     *  The video feed is from the HDMI port while EXT port is disabled.  It is only
     *  used for stand-alone Lightbridge 2 or aircraft with stand-alone Lightbridge 2
     *  modules.
     */
    DJIVideoFeedPhysicalSourceHDMI,
    

    /**
     *  The video feed is from AV port while EXT port is disabled. It is only used for
     *  stand-alone Lightbridge 2 or aircraft with stand-alone Lightbridge 2 modules.
     */
    DJIVideoFeedPhysicalSourceAV,
    

    /**
     *  The video feed is from the port (left) main camera. It is only used for M210
     *  series and M210 V2 series.
     */
    DJIVideoFeedPhysicalSourceLeftCamera,
    

    /**
     *  The video feed is from the starboard (right) main camera. It is only used for
     *  M210 series and M210 V2 series.
     */
    DJIVideoFeedPhysicalSourceRightCamera,

    /**
     *  Unknown video physical source.
     */
    DJIVideoFeedPhysicalSourceUnknown = 0xFF,
};

NS_ASSUME_NONNULL_END
