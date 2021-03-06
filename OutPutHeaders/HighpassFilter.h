/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AccelerometerFilter.h"


@interface HighpassFilter : AccelerometerFilter {
	double lastX;
	double lastY;
	double lastZ;
	BOOL hasXCrash;
	BOOL hasYCrash;
	BOOL hasZCrash;
	int xCountDown;
	int yCountDown;
	int zCountDown;
}
-(BOOL)addAccelerationByX:(double)x Y:(double)y Z:(double)z;
@end

