/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "error.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef enum{
  BITRATE_1000K = 0,
  BITRATE_500K = 1,
  BITRATE_250K = 2,
  BITRATE_125K = 3
} CanSpeed_t;

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
#define CANx_RX_IRQn                   CAN1_RX0_IRQn
#define CANx_RX_IRQHandler             CAN1_RX0_IRQHandler
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

//**************
//See stm32f4xx.h for other bit macros
//**************
#define BIT_MASK_AT(pos)         (1 << (pos))
#define SET_BIT_AT(value,pos)    ((value) |= BIT_MASK_AT(pos))
#define CLEAR_BIT_AT(value,pos)  ((value) &= ~BIT_MASK_AT(pos))
#define GET_BIT_AT(value,pos)    (((value) & BIT_MASK_AT(pos)) ? 1 : 0)
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(PdmFatalError_t EErrorCode);
void EnterStopMode(CanSpeed_t eSpeed);
/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ErrorLED_Pin GPIO_PIN_0
#define ErrorLED_GPIO_Port GPIOC
#define StatusLED_Pin GPIO_PIN_1
#define StatusLED_GPIO_Port GPIOC

#define PF_IS1_Pin GPIO_PIN_3
#define PF_IS1_GPIO_Port GPIOC
#define PF_IN1_Pin GPIO_PIN_14
#define PF_IN1_GPIO_Port GPIOB
#define PF_DEN1_Pin GPIO_PIN_13
#define PF_DEN1_GPIO_Port GPIOB

#define PF_IS2_Pin GPIO_PIN_2
#define PF_IS2_GPIO_Port GPIOC
#define PF_IN2_Pin GPIO_PIN_7
#define PF_IN2_GPIO_Port GPIOC
#define PF_DEN2_Pin GPIO_PIN_6
#define PF_DEN2_GPIO_Port GPIOC

#define PF_IS3_Pin GPIO_PIN_0
#define PF_IS3_GPIO_Port GPIOA
#define PF_IN3_Pin GPIO_PIN_0
#define PF_IN3_GPIO_Port GPIOB
#define PF_DEN3_Pin GPIO_PIN_5
#define PF_DEN3_GPIO_Port GPIOC

#define PF_IS4_Pin GPIO_PIN_1
#define PF_IS4_GPIO_Port GPIOA
#define PF_IN4_Pin GPIO_PIN_6
#define PF_IN4_GPIO_Port GPIOA
#define PF_DEN4_Pin GPIO_PIN_5
#define PF_DEN4_GPIO_Port GPIOA

#define BATT_SENSE_Pin GPIO_PIN_3
#define BATT_SENSE_GPIO_Port GPIOA

#define DIG_IN1_Pin GPIO_PIN_10
#define DIG_IN1_GPIO_Port GPIOA
#define DIG_IN2_Pin GPIO_PIN_9
#define DIG_IN2_GPIO_Port GPIOC

#define EXTRA1_Pin GPIO_PIN_10
#define EXTRA1_GPIO_Port GPIOC
#define EXTRA2_Pin GPIO_PIN_11
#define EXTRA2_GPIO_Port GPIOC
#define EXTRA3_Pin GPIO_PIN_13
#define EXTRA3_GPIO_Port GPIOC

#define CAN_STBY_GPIO_Port GPIOC
#define CAN_STBY_Pin GPIO_PIN_12

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
