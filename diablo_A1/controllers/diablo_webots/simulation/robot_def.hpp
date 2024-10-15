#ifndef ROBOT_DEF_HPP
#define ROBOT_DEF_HPP
#include <webots/distance_sensor.h>
#include <webots/motor.h>
#include <webots/robot.h>
#include <webots/position_sensor.h>
#include <webots/inertial_unit.h>
#include <webots/accelerometer.h>
#include <webots/touch_sensor.h>
#include <webots/keyboard.h>
#include <webots/mouse.h>
#include <webots/joystick.h>
#include <webots/gyro.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <cmath> 
#include <unistd.h>

#define USE_RVIZ 1
#define USE_GNU_PLOT 1
#define TIME_STEP 5

#define ROBOT_NAME "TITA"  // position of the robot node with respect to root node children
#define ACCELEROMETER "accl"
#define GYROSCOPE "gyro"
#define INETIA_UNIT "imu"
#define LEFT_WHEEL "LEFT_WHEEL"
#define RIGHT_WHEEL "RIGHT_WHEEL"
#define USE_CLOSECHAIN 0
#if USE_CLOSECHAIN
#define LINK_NUM 13U
const double init_position[MOTOR_NUM] = {0.0, 0.0, -M_PI/2-0.9, 0.0, 0.0, 0.0, -M_PI/2-0.9, 0.0};
#else
#define LINK_NUM 9U
#define MOTOR_NUM 8
const double init_position[MOTOR_NUM] = {0.0, 0.0, -M_PI/2, 0.0, 0.0, 0.0, -M_PI/2, 0.0};
#endif
const char LINK_DEF[LINK_NUM][15] = {"TITA","LEFT_HIP","LEFT_THIGH","LEFT_CALF","LEFT_WHEEL","RIGHT_HIP","RIGHT_THIGH","RIGHT_CALF","RIGHT_WHEEL"};
const char motors_c[MOTOR_NUM][40] = {"left_hip_abduction_joint", "left_hip_flexion_joint", "left_knee_joint", "left_ankle_joint", "right_hip_abduction_joint", "right_hip_flexion_joint", "right_knee_joint", "right_ankle_joint"};
const char pos_c[MOTOR_NUM][40] = {"left_hip_abduction_joint_sensor", "left_hip_flexion_joint_sensor", "left_knee_joint_sensor", "left_ankle_joint_sensor", "right_hip_abduction_joint_sensor", "right_hip_flexion_joint_sensor", "right_knee_joint_sensor", "right_ankle_joint_sensor"};

const float torque_max[8] = {90, 90, 90, 20, 90, 90, 90, 20};
const float rpm_max[8] = {180,180,180,1000,180,180,180,1000};
const float torque_limit[8] = {53, 53, 53, 10, 53, 53, 53, 10};

#endif