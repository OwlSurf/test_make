/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

#include "stm32l4xx_ll_dma.h"
#include "stm32l4xx_ll_crs.h"
#include "stm32l4xx_ll_rcc.h"
#include "stm32l4xx_ll_bus.h"
#include "stm32l4xx_ll_system.h"
#include "stm32l4xx_ll_exti.h"
#include "stm32l4xx_ll_cortex.h"
#include "stm32l4xx_ll_utils.h"
#include "stm32l4xx_ll_pwr.h"
#include "stm32l4xx_ll_tim.h"
#include "stm32l4xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CAM_D0_Pin LL_GPIO_PIN_0
#define CAM_D0_GPIO_Port GPIOC
#define CAM_D1_Pin LL_GPIO_PIN_1
#define CAM_D1_GPIO_Port GPIOC
#define CAM_D2_Pin LL_GPIO_PIN_2
#define CAM_D2_GPIO_Port GPIOC
#define CAM_D3_Pin LL_GPIO_PIN_3
#define CAM_D3_GPIO_Port GPIOC
#define FLASH_PWR_Pin LL_GPIO_PIN_1
#define FLASH_PWR_GPIO_Port GPIOA
#define CAM_D4_Pin LL_GPIO_PIN_4
#define CAM_D4_GPIO_Port GPIOC
#define CAM_D5_Pin LL_GPIO_PIN_5
#define CAM_D5_GPIO_Port GPIOC
#define MPW1_Pin LL_GPIO_PIN_0
#define MPW1_GPIO_Port GPIOB
#define MPW2_Pin LL_GPIO_PIN_1
#define MPW2_GPIO_Port GPIOB
#define MPWRKEY_Pin LL_GPIO_PIN_2
#define MPWRKEY_GPIO_Port GPIOB
#define RF2_LP_Pin LL_GPIO_PIN_12
#define RF2_LP_GPIO_Port GPIOB
#define RF_GPIO_Pin LL_GPIO_PIN_13
#define RF_GPIO_GPIO_Port GPIOB
#define RF_INT_Pin LL_GPIO_PIN_14
#define RF_INT_GPIO_Port GPIOB
#define RF_I2C_RST_Pin LL_GPIO_PIN_15
#define RF_I2C_RST_GPIO_Port GPIOB
#define CAM_D6_Pin LL_GPIO_PIN_6
#define CAM_D6_GPIO_Port GPIOC
#define CAM_D7_Pin LL_GPIO_PIN_7
#define CAM_D7_GPIO_Port GPIOC
#define CAM_HREF_Pin LL_GPIO_PIN_8
#define CAM_HREF_GPIO_Port GPIOC
#define CAM_HREF_EXTI_IRQn EXTI9_5_IRQn
#define CAM1_PWDN_Pin LL_GPIO_PIN_9
#define CAM1_PWDN_GPIO_Port GPIOC
#define CAM_CLK_Pin LL_GPIO_PIN_8
#define CAM_CLK_GPIO_Port GPIOA
#define TMS_Pin LL_GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin LL_GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define CAM2_PWDN_Pin LL_GPIO_PIN_10
#define CAM2_PWDN_GPIO_Port GPIOC
#define CAM_VSYNC_Pin LL_GPIO_PIN_11
#define CAM_VSYNC_GPIO_Port GPIOC
#define CAM_VSYNC_EXTI_IRQn EXTI15_10_IRQn
#define CAM1_RESET_Pin LL_GPIO_PIN_12
#define CAM1_RESET_GPIO_Port GPIOC
#define CAM2_RESET_Pin LL_GPIO_PIN_2
#define CAM2_RESET_GPIO_Port GPIOD
#define SWO_Pin LL_GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Free_pin_Pin LL_GPIO_PIN_4
#define Free_pin_GPIO_Port GPIOB
#define RF_CAM_PWR_Pin LL_GPIO_PIN_5
#define RF_CAM_PWR_GPIO_Port GPIOB
#define LED_Pin LL_GPIO_PIN_8
#define LED_GPIO_Port GPIOB
#define RF1_LP_Pin LL_GPIO_PIN_9
#define RF1_LP_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
