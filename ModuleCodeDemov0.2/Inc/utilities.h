#ifndef UTILITIES
#define UTILITIES

#include "stdint.h"
#include "stm32f1xx_hal.h"

void EmptyBuffer(uint8_t* a);
uint16_t GetTemperature (ADC_HandleTypeDef *hadc);
void Tx_Pin_Disable(void);
void Tx_Pin_Enable(void);
uint8_t GetTx_DIS(I2C_HandleTypeDef *hi2c);
#endif
