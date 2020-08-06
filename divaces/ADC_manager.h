/*
 * ADC_manager.h
 *
 * Created: 10.06.2020 21:33:30
 *  Author: ar725
 */ 
#ifndef ADC_MANAGER_H_
#define ADC_MANAGER_H_

#include "tools.h"

#define ADC_COUNT 6
#define INIT_VAL 512

static uint16_t ADC_values[ADC_COUNT] = {INIT_VAL, INIT_VAL, INIT_VAL, INIT_VAL, INIT_VAL, INIT_VAL};
static uint8_t ADC_input_index = 0;

#define SN_TEMPERATURE_VAL ADC_values[2]
#define SN_TEMPERATURE_CRITICAL_HIGH_VAL 700
#define SN_TEMPERATURE_CRITICAL_LOW_VAL 200
#define SN_TEMPERATURE_STATE ((SN_TEMPERATURE_VAL > SN_TEMPERATURE_CRITICAL_LOW_VAL) && (SN_TEMPERATURE_VAL < SN_TEMPERATURE_CRITICAL_HIGH_VAL) )

#define SN_STREAM_VAL ADC_values[3]
#define SN_STREAM_CRITICAL_HIGH_VAL 900
#define SN_STREAM_CRITICAL_LOW_VAL 300
#define SN_STREAM_STATE ((SN_STREAM_VAL > SN_STREAM_CRITICAL_LOW_VAL) && (SN_STREAM_VAL < SN_STREAM_CRITICAL_HIGH_VAL) )
#define SN_STREAM_INIT_TIME 5
static uint8_t SN_StreamExtraTime = 0;
static uint8_t SN_StreamExtraFlag = 0;

#define SN_WATER_LVL_VAL ADC_values[4]
#define SN_WATER_LVL_CRITICAL_HIGH_VAL 1000
#define SN_WATER_LVL_CRITICAL_LOW_VAL 50
#define SN_WATER_LVL_STATE ((SN_WATER_LVL_VAL > SN_WATER_LVL_CRITICAL_LOW_VAL) && (SN_WATER_LVL_VAL < SN_WATER_LVL_CRITICAL_HIGH_VAL) )

#define SN_PRESSURE_VAL ADC_values[5]
#define SN_PRESSURE_CRITICAL_HIGH_VAL 819
#define SN_PRESSURE_CRITICAL_LOW_VAL 10
#define SN_PRESSURE_STATE ((SN_PRESSURE_VAL > SN_PRESSURE_CRITICAL_LOW_VAL) && (SN_PRESSURE_VAL < SN_PRESSURE_CRITICAL_HIGH_VAL) )


void ADC_Init();
void ADC_StartConversion();





#endif /* ADC_MANAGER_H_ */