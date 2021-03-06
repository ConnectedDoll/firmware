#ifndef _HTTP_UTILE_H
#define _HTTP_UTILE_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/i2s.h"
#include "esp_system.h"

#define SAMPLE_RATE (44100)

#define PIN_I2S_DOUT 21
#define PIN_I2S_BCLK 26
#define PIN_I2S_LRC 25

// 44100Hz, 16bit, stereo
void I2S_Init();
void I2S_Write(char* data, int numData);

#endif