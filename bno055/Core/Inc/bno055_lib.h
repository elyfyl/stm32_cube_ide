#ifndef BNO055_H_
#define BNO055_H_

#include "main.h"
#include "stdint.h"
#include "i2c.h"

#define EUL_REG 0x1A
#define BNO055_I2C_ADDR_LO 0x28

typedef struct 
{
    double pitch;
    double roll;
    double yaw;/* data */
}bno055_vector;

void read_bno055_data(uint8_t reg);

#endif  // BNO055_H_