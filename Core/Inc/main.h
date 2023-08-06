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
#include "stm32g0xx_hal.h"

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
#define DET_Pin GPIO_PIN_14
#define DET_GPIO_Port GPIOC
#define DE_Pin GPIO_PIN_15
#define DE_GPIO_Port GPIOC
#define FLS_CS_Pin GPIO_PIN_0
#define FLS_CS_GPIO_Port GPIOA
#define LAN_CS_Pin GPIO_PIN_4
#define LAN_CS_GPIO_Port GPIOA
#define LAN_IRQ_Pin GPIO_PIN_1
#define LAN_IRQ_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_11
#define SCL_GPIO_Port GPIOA
#define SDA_Pin GPIO_PIN_12
#define SDA_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_13
#define LED2_GPIO_Port GPIOA
#define BOOT0LED_Pin GPIO_PIN_14
#define BOOT0LED_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */
extern SPI_HandleTypeDef hspi1;
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
