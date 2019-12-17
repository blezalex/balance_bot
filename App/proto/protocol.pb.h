/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Mon Dec 16 20:10:51 2019. */

#ifndef PB_PROTOCOL_PB_H_INCLUDED
#define PB_PROTOCOL_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _RequestId {
    RequestId_MSG_NONE = 0,
    RequestId_READ_CONFIG = 1,
    RequestId_WRITE_CONFIG = 2,
    RequestId_GET_STATS = 3,
    RequestId_CALLIBRATE_ACC = 4,
    RequestId_SAVE_CONFIG = 5,
    RequestId_GET_DEBUG_BUFFER = 6
} RequestId;
#define _RequestId_MIN RequestId_MSG_NONE
#define _RequestId_MAX RequestId_GET_DEBUG_BUFFER
#define _RequestId_ARRAYSIZE ((RequestId)(RequestId_GET_DEBUG_BUFFER+1))

typedef enum _ReplyId {
    ReplyId_NO_REPLY = 0,
    ReplyId_GENERIC_OK = 1,
    ReplyId_GENERIC_FAIL = 2,
    ReplyId_STATS = 3,
    ReplyId_CONFIG = 4,
    ReplyId_CRC_MISMATCH = 5,
    ReplyId_DEBUG_BUFFER = 6
} ReplyId;
#define _ReplyId_MIN ReplyId_NO_REPLY
#define _ReplyId_MAX ReplyId_DEBUG_BUFFER
#define _ReplyId_ARRAYSIZE ((ReplyId)(ReplyId_DEBUG_BUFFER+1))

/* Struct definitions */
typedef struct _Config_BalancingConfig {
    float balance_expo;
    uint32_t global_gyro_lpf;
    float imu_beta;
    int32_t max_control_angle;
    int32_t max_rotation_rate;
    int32_t max_current;
    float rc_lpf;
/* @@protoc_insertion_point(struct:Config_BalancingConfig) */
} Config_BalancingConfig;

typedef struct _Config_Callibration {
    bool has_x_offset;
    float x_offset;
    bool has_y_offset;
    float y_offset;
    bool has_z_offset;
    float z_offset;
/* @@protoc_insertion_point(struct:Config_Callibration) */
} Config_Callibration;

typedef struct _Config_PidConfig {
    float p;
    float d;
    float i;
    float max_i;
/* @@protoc_insertion_point(struct:Config_PidConfig) */
} Config_PidConfig;

typedef struct _Stats {
    float batt_voltage;
    float batt_current;
    float motor_current;
    float speed;
    float distance_traveled;
    float drive_angle;
    float stear_angle;
    uint32_t pad_pressure1;
    uint32_t pad_pressure2;
    float motor_duty;
    float esc_temp;
    float motor_temp;
/* @@protoc_insertion_point(struct:Stats) */
} Stats;

typedef struct _Config {
    bool has_callibration;
    Config_Callibration callibration;
    Config_PidConfig balance_pid;
    Config_PidConfig yaw_pid;
    Config_BalancingConfig balance_settings;
/* @@protoc_insertion_point(struct:Config) */
} Config;

/* Default values for struct fields */
extern const float Config_Callibration_x_offset_default;
extern const float Config_Callibration_y_offset_default;
extern const float Config_Callibration_z_offset_default;
extern const float Config_PidConfig_p_default;
extern const float Config_PidConfig_d_default;
extern const float Config_PidConfig_i_default;
extern const float Config_PidConfig_max_i_default;
extern const float Config_BalancingConfig_balance_expo_default;
extern const uint32_t Config_BalancingConfig_global_gyro_lpf_default;
extern const float Config_BalancingConfig_imu_beta_default;
extern const int32_t Config_BalancingConfig_max_control_angle_default;
extern const int32_t Config_BalancingConfig_max_rotation_rate_default;
extern const int32_t Config_BalancingConfig_max_current_default;
extern const float Config_BalancingConfig_rc_lpf_default;

/* Initializer values for message structs */
#define Config_init_default                      {false, Config_Callibration_init_default, Config_PidConfig_init_default, Config_PidConfig_init_default, Config_BalancingConfig_init_default}
#define Config_Callibration_init_default         {false, 0, false, 0, false, 0}
#define Config_PidConfig_init_default            {1200, 0.65, 0.1, 3}
#define Config_BalancingConfig_init_default      {0.15, 2u, 0.02, 30, 360, 25, 0.007}
#define Stats_init_default                       {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define Config_init_zero                         {false, Config_Callibration_init_zero, Config_PidConfig_init_zero, Config_PidConfig_init_zero, Config_BalancingConfig_init_zero}
#define Config_Callibration_init_zero            {false, 0, false, 0, false, 0}
#define Config_PidConfig_init_zero               {0, 0, 0, 0}
#define Config_BalancingConfig_init_zero         {0, 0, 0, 0, 0, 0, 0}
#define Stats_init_zero                          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Config_BalancingConfig_balance_expo_tag  1
#define Config_BalancingConfig_global_gyro_lpf_tag 2
#define Config_BalancingConfig_imu_beta_tag      3
#define Config_BalancingConfig_max_control_angle_tag 4
#define Config_BalancingConfig_max_rotation_rate_tag 5
#define Config_BalancingConfig_max_current_tag   6
#define Config_BalancingConfig_rc_lpf_tag        7
#define Config_Callibration_x_offset_tag         4
#define Config_Callibration_y_offset_tag         5
#define Config_Callibration_z_offset_tag         6
#define Config_PidConfig_p_tag                   1
#define Config_PidConfig_d_tag                   2
#define Config_PidConfig_i_tag                   3
#define Config_PidConfig_max_i_tag               4
#define Stats_batt_voltage_tag                   1
#define Stats_batt_current_tag                   2
#define Stats_motor_current_tag                  3
#define Stats_speed_tag                          5
#define Stats_distance_traveled_tag              6
#define Stats_drive_angle_tag                    7
#define Stats_stear_angle_tag                    8
#define Stats_pad_pressure1_tag                  9
#define Stats_pad_pressure2_tag                  10
#define Stats_motor_duty_tag                     11
#define Stats_esc_temp_tag                       12
#define Stats_motor_temp_tag                     13
#define Config_callibration_tag                  1
#define Config_balance_pid_tag                   2
#define Config_yaw_pid_tag                       3
#define Config_balance_settings_tag              4

/* Struct field encoding specification for nanopb */
extern const pb_field_t Config_fields[5];
extern const pb_field_t Config_Callibration_fields[4];
extern const pb_field_t Config_PidConfig_fields[5];
extern const pb_field_t Config_BalancingConfig_fields[8];
extern const pb_field_t Stats_fields[13];

/* Maximum encoded size of messages (where known) */
#define Config_size                              117
#define Config_Callibration_size                 15
#define Config_PidConfig_size                    20
#define Config_BalancingConfig_size              54
#define Stats_size                               62

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTOCOL_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
