#ifndef INC_FEB_CAN_ID_H_
#define INC_FEB_CAN_ID_H_

// ******** Static CAN IDs ********

// Charger
#define FEB_CAN_ID_CHARGER_BMS 0x1806e5f4
#define FEB_CAN_ID_CHARGER_CCS 0x18ff50e5

// IVT
#define FEB_CAN_ID_IVT_COMMAND 0x411
#define FEB_CAN_ID_IVT_DEBUG 0x510
#define FEB_CAN_ID_IVT_RESPONSE 0x511
#define FEB_CAN_ID_IVT_CURRENT 0x521
#define FEB_CAN_ID_IVT_VOLTAGE_1 0x522
#define FEB_CAN_ID_IVT_VOLTAGE_2 0x523
#define FEB_CAN_ID_IVT_VOLTAGE_3 0x524
#define FEB_CAN_ID_IVT_TEMPERATURE 0x525
#define FEB_CAN_ID_IVT_POWER 0x526
#define FEB_CAN_ID_IVT_CURRENT_COUNTER 0x527
#define FEB_CAN_ID_IVT_ENERGY_COUNTER 0x528

// RMS
#define FEB_CAN_ID_RMS_VOLTAGE 0xa7
#define FEB_CAN_ID_RMS_MOTOR 0xa5
#define FEB_CAN_ID_RMS_COMMAND 0xc0
#define FEB_CAN_ID_RMS_PARAMETER 0xc1

// APPS
#define FEB_CAN_ID_APPS_TPS 0x80

// ******** Dynamic CAN IDs ********

// BMS
#define FEB_CAN_ID_BMS_STATE 0x0
#define FEB_CAN_ID_BMS_CELL_DATA 0x1
#define FEB_CAN_ID_BMS_ACCUMULATOR_VOLTAGE 0x2
#define FEB_CAN_ID_BMS_ACCUMULATOR_TEMPERATURE 0x3

// APPS
#define FEB_CAN_ID_APPS_BRAKE_PEDAL 0x4
#define FEB_CAN_ID_APPS_BSPD 0x5

// ICS
#define FEB_CAN_ID_ICS_BUTTON_STATE 0x6
#define FEB_CAN_ID_ICS_TEST 0x7

//LVPDB 
#define FEB_CAN_ID_LVPDB_BUS_CURRENT 0x8
#define FEB_CAN_ID_LVPDB_BUS_VOLTAGE 0x9
#define FEB_CAN_ID_LVPDB_CP_CURRENT_ 0xa
#define FEB_CAN_ID_LVPDB_CP_VOLTAGE 0xb
#define FEB_CAN_ID_LVPDB_AF_CURRENT 0xc
#define FEB_CAN_ID_LVPDB_AF_VOLTAGE_ 0xd
#define FEB_CAN_ID_LVPDB_RF_CURRENT 0xe
#define FEB_CAN_ID_LVPDB_RF_VOLTAGE_ 0xf

//Sensor Nodes 
#define FEB_CAN_ID_SENSOR_WHEEL_SPEED_ 0x10
#define FEB_CAN_ID_SENSOR_LIN_POT 0x11

// DART
#define FEB_CAN_ID_DART_DART1_MEASURED_FAN_SPEEDS 0x12
#define FEB_CAN_ID_DART_DART2_MEASURED_FAN_SPEEDS 0x13

#endif /* INC_FEB_CAN_ID_H_ */
