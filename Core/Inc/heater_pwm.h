/*
 * heater_pwm.h
 *
 *  Created on: Jan 25, 2021
 *      Author: HB
 */

#ifndef INC_HEATER_PWM_H_
#define INC_HEATER_PWM_H_

/* Config --------------------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Typedef -------------------------------------------------------------------*/
#define HEATER_PWM_TimerType   TIM_HandleTypeDef*
#define HEATER_PWM_ChannelType uint16_t

typedef struct {
  HEATER_PWM_TimerType Timer;
  HEATER_PWM_ChannelType Channel;
  float Duty;
} HEATER_PWM_HandleTypeDef;

/* Define --------------------------------------------------------------------*/

/* Macro ---------------------------------------------------------------------*/

/* Public variables ----------------------------------------------------------*/

/* Public function prototypes ------------------------------------------------*/

/**
 * @brief PWM-controlled heater initialization.
 * @param[in] hheaterpwm Heater handler
 * @return None
 */
void HEATER_PWM_Init(HEATER_PWM_HandleTypeDef* heaterpwm);

/**
 * @brief Sets duty of PWM-controlled heater.
 * @param[in] hheaterpwm Heater handler
 * @param[in] duty       PWM duty in percents
 * @return None
 */
void HEATER_PWM_SetDuty(HEATER_PWM_HandleTypeDef* heaterpwm, float duty);

#endif /* INC_HEATER_PWM_H_ */
