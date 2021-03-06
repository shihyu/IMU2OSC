//
//  IMUOSCHandlers.h
//  IMU2OSC
//
//  Created by Jamie Bullock on 18/05/2012.
//  Copyright (c) 2012 Birmingham City University. All rights reserved.
//

#ifndef IMU2OSC_IMUOSCHandlers_h
#define IMU2OSC_IMUOSCHandlers_h

void osc_init(const char *address, unsigned int port);
void osc_send_euler(double *euler);
void osc_send_cal(double *gyro, double *accel, double *mag);


#endif
