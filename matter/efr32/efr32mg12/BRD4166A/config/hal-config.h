/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
/*******************************************************************************
 * @file
 * @brief hal-config.h
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#pragma once

#include "em_device.h"
#include "hal-config-types.h"

#ifndef HAL_I2CSENSOR_ENABLE
#define HAL_I2CSENSOR_ENABLE (0)
#endif

#ifndef HAL_SPIDISPLAY_ENABLE
#define HAL_SPIDISPLAY_ENABLE (1)
#endif
#define HAL_SPIDISPLAY_EXTCOMIN_CALLBACK
#if defined(FEATURE_IOEXPANDER)
#define HAL_SPIDISPLAY_EXTMODE_EXTCOMIN (0)
#else
#define HAL_SPIDISPLAY_EXTMODE_EXTCOMIN (1)
#endif
#define HAL_SPIDISPLAY_EXTMODE_SPI (0)
#define HAL_SPIDISPLAY_EXTCOMIN_USE_PRS (0)
#define HAL_SPIDISPLAY_EXTCOMIN_USE_CALLBACK (0)
#define HAL_SPIDISPLAY_FREQUENCY (1000000)

#define HAL_CLK_HFCLK_SOURCE (HAL_CLK_HFCLK_SOURCE_HFXO)
#define HAL_CLK_LFECLK_SOURCE (HAL_CLK_LFCLK_SOURCE_LFXO)
#define HAL_CLK_LFBCLK_SOURCE (HAL_CLK_LFCLK_SOURCE_LFXO)
#define HAL_CLK_LFACLK_SOURCE (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_HFXO_AUTOSTART (HAL_CLK_HFXO_AUTOSTART_NONE)

#define HAL_DCDC_BYPASS (0)

// $[PA]
#define HAL_PA_ENABLE (1)

// $[SERIAL]
#define HAL_SERIAL_USART0_ENABLE (0)
#define HAL_SERIAL_LEUART0_ENABLE (0)
#define HAL_SERIAL_USART1_ENABLE (0)
#define HAL_SERIAL_USART2_ENABLE (0)
#define HAL_SERIAL_USART3_ENABLE (0)
#define HAL_SERIAL_RXWAKE_ENABLE (0)

#define HAL_SERIAL_APP_RX_QUEUE_SIZE (128)
#define HAL_SERIAL_APP_BAUD_RATE (115200)
#define HAL_SERIAL_APP_RXSTOP (16)
#define HAL_SERIAL_APP_RXSTART (16)
#define HAL_SERIAL_APP_TX_QUEUE_SIZE (128)
#define HAL_SERIAL_APP_FLOW_CONTROL (HAL_USART_FLOW_CONTROL_NONE)

// $[USART0]
#define HAL_USART0_ENABLE (1)
#define HAL_USART0_RX_QUEUE_SIZE (128)
#define HAL_USART0_BAUD_RATE (115200)
#define HAL_USART0_RXSTOP (16)
#define HAL_USART0_RXSTART (16)
#define HAL_USART0_TX_QUEUE_SIZE (128)
#define HAL_USART0_FLOW_CONTROL (HAL_USART_FLOW_CONTROL_NONE)

// $[BTL_BUTTON]

#define BSP_BTL_BUTTON_PIN (14U)
#define BSP_BTL_BUTTON_PORT (gpioPortD)

// [BTL_BUTTON]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT (1)

#define BSP_BUTTON0_PIN (14U)
#define BSP_BUTTON0_PORT (gpioPortD)

#define BSP_BUTTON1_PIN (15U)
#define BSP_BUTTON1_PORT (gpioPortD)

#define BSP_BUTTON_COUNT (2U)
#define BSP_BUTTON_INIT                                                                                                            \
    {                                                                                                                              \
        { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN }, { BSP_BUTTON1_PORT, BSP_BUTTON1_PIN }                                               \
    }
#define BSP_BUTTON_GPIO_DOUT (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE (HAL_GPIO_MODE_INPUT)
// [BUTTON]$

// $[CMU]
#define BSP_CLK_HFXO_PRESENT (1)
#define BSP_CLK_HFXO_FREQ (38400000UL)
#define BSP_CLK_HFXO_INIT CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE (332)
#define BSP_CLK_LFXO_PRESENT (1)
#define BSP_CLK_LFXO_INIT CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_FREQ (32768U)
#define BSP_CLK_LFXO_CTUNE (32U)
// [CMU]$

// $[DCDC]
#define BSP_DCDC_PRESENT (1)

#define BSP_DCDC_INIT EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[GPIO]
#define PORTIO_GPIO_SWV_PIN (2U)
#define PORTIO_GPIO_SWV_PORT (gpioPortF)
#define PORTIO_GPIO_SWV_LOC (0U)

#define BSP_TRACE_SWO_PIN (2U)
#define BSP_TRACE_SWO_PORT (gpioPortF)
#define BSP_TRACE_SWO_LOC (0U)

// [GPIO]$

// $[I2C0]
#define PORTIO_I2C0_SCL_PIN (11U)
#define PORTIO_I2C0_SCL_PORT (gpioPortC)
#define PORTIO_I2C0_SCL_LOC (15U)

#define PORTIO_I2C0_SDA_PIN (10U)
#define PORTIO_I2C0_SDA_PORT (gpioPortC)
#define PORTIO_I2C0_SDA_LOC (15U)

#define BSP_I2C0_SCL_PIN (11U)
#define BSP_I2C0_SCL_PORT (gpioPortC)
#define BSP_I2C0_SCL_LOC (15U)

#define BSP_I2C0_SDA_PIN (10U)
#define BSP_I2C0_SDA_PORT (gpioPortC)
#define BSP_I2C0_SDA_LOC (15U)

// [I2C0]$

// $[I2C1]
#define PORTIO_I2C1_SCL_PIN (5U)
#define PORTIO_I2C1_SCL_PORT (gpioPortC)
#define PORTIO_I2C1_SCL_LOC (17U)

#define PORTIO_I2C1_SDA_PIN (4U)
#define PORTIO_I2C1_SDA_PORT (gpioPortC)
#define PORTIO_I2C1_SDA_LOC (17U)

#define BSP_I2C1_SCL_PIN (5U)
#define BSP_I2C1_SCL_PORT (gpioPortC)
#define BSP_I2C1_SCL_LOC (17U)

#define BSP_I2C1_SDA_PIN (4U)
#define BSP_I2C1_SDA_PORT (gpioPortC)
#define BSP_I2C1_SDA_LOC (17U)

// [I2C1]$

// $[I2CSENSOR]

#define BSP_I2CSENSOR_PERIPHERAL (HAL_I2C_PORT_I2C0)
#define BSP_I2CSENSOR_SCL_PIN (11U)
#define BSP_I2CSENSOR_SCL_PORT (gpioPortC)
#define BSP_I2CSENSOR_SCL_LOC (15U)

#define BSP_I2CSENSOR_SDA_PIN (10U)
#define BSP_I2CSENSOR_SDA_PORT (gpioPortC)
#define BSP_I2CSENSOR_SDA_LOC (15U)

// [I2CSENSOR]$

// $[LED]
#define BSP_LED_PRESENT (1)

#define BSP_LED0_PIN (8U)
#define BSP_LED0_PORT (gpioPortD)

#define BSP_LED1_PIN (9U)
#define BSP_LED1_PORT (gpioPortD)

#define BSP_LED_COUNT (2U)
#define BSP_LED_INIT                                                                                                               \
    {                                                                                                                              \
        { BSP_LED0_PORT, BSP_LED0_PIN }, { BSP_LED1_PORT, BSP_LED1_PIN }                                                           \
    }
#define BSP_LED_POLARITY (1)
// [LED]$

// $[PA]

#define BSP_PA_VOLTAGE (1800U)
// [PA]$

// $[PTI]
#define PORTIO_PTI_DCLK_PIN (11U)
#define PORTIO_PTI_DCLK_PORT (gpioPortB)
#define PORTIO_PTI_DCLK_LOC (6U)

#define PORTIO_PTI_DFRAME_PIN (13U)
#define PORTIO_PTI_DFRAME_PORT (gpioPortB)
#define PORTIO_PTI_DFRAME_LOC (6U)

#define PORTIO_PTI_DOUT_PIN (12U)
#define PORTIO_PTI_DOUT_PORT (gpioPortB)
#define PORTIO_PTI_DOUT_LOC (6U)

#define BSP_PTI_DFRAME_PIN (13U)
#define BSP_PTI_DFRAME_PORT (gpioPortB)
#define BSP_PTI_DFRAME_LOC (6U)

#define BSP_PTI_DOUT_PIN (12U)
#define BSP_PTI_DOUT_PORT (gpioPortB)
#define BSP_PTI_DOUT_LOC (6U)

#define HAL_PTI_MODE (HAL_PTI_MODE_UART)
#define HAL_PTI_BAUD_RATE (1600000)

// [PTI]$

// $[SERIAL]
#define BSP_SERIAL_APP_TX_PIN (0U)
#define BSP_SERIAL_APP_TX_PORT (gpioPortA)
#define BSP_SERIAL_APP_TX_LOC (0U)

#define BSP_SERIAL_APP_RX_PIN (1U)
#define BSP_SERIAL_APP_RX_PORT (gpioPortA)
#define BSP_SERIAL_APP_RX_LOC (0U)

#define BSP_SERIAL_APP_CTS_PIN (2U)
#define BSP_SERIAL_APP_CTS_PORT (gpioPortA)
#define BSP_SERIAL_APP_CTS_LOC (30U)

#define BSP_SERIAL_APP_RTS_PIN (3U)
#define BSP_SERIAL_APP_RTS_PORT (gpioPortA)
#define BSP_SERIAL_APP_RTS_LOC (30U)

// [SERIAL]$

// $[SPINCP]
#define BSP_SPINCP_NHOSTINT_PIN (6U)
#define BSP_SPINCP_NHOSTINT_PORT (gpioPortA)

#define BSP_SPINCP_NWAKE_PIN (7U)
#define BSP_SPINCP_NWAKE_PORT (gpioPortA)

#define BSP_SPINCP_USART_PORT (HAL_SPI_PORT_USART2)
#define BSP_SPINCP_MOSI_PIN (0U)
#define BSP_SPINCP_MOSI_PORT (gpioPortK)
#define BSP_SPINCP_MOSI_LOC (29U)

#define BSP_SPINCP_MISO_PIN (2U)
#define BSP_SPINCP_MISO_PORT (gpioPortK)
#define BSP_SPINCP_MISO_LOC (30U)

#define BSP_SPINCP_CLK_PIN (7U)
#define BSP_SPINCP_CLK_PORT (gpioPortF)
#define BSP_SPINCP_CLK_LOC (18U)

#define BSP_SPINCP_CS_PIN (5U)
#define BSP_SPINCP_CS_PORT (gpioPortA)
#define BSP_SPINCP_CS_LOC (29U)

// [SPINCP]$

// $[TIMER0]
#define PORTIO_TIMER0_CC0_PIN (11U)
#define PORTIO_TIMER0_CC0_PORT (gpioPortD)
#define PORTIO_TIMER0_CC0_LOC (19U)

#define PORTIO_TIMER0_CC1_PIN (12U)
#define PORTIO_TIMER0_CC1_PORT (gpioPortD)
#define PORTIO_TIMER0_CC1_LOC (19U)

#define PORTIO_TIMER0_CC2_PIN (13U)
#define PORTIO_TIMER0_CC2_PORT (gpioPortD)
#define PORTIO_TIMER0_CC2_LOC (19U)

#define BSP_TIMER0_CC0_PIN (11U)
#define BSP_TIMER0_CC0_PORT (gpioPortD)
#define BSP_TIMER0_CC0_LOC (19U)

#define BSP_TIMER0_CC1_PIN (12U)
#define BSP_TIMER0_CC1_PORT (gpioPortD)
#define BSP_TIMER0_CC1_LOC (19U)

#define BSP_TIMER0_CC2_PIN (13U)
#define BSP_TIMER0_CC2_PORT (gpioPortD)
#define BSP_TIMER0_CC2_LOC (19U)

// [TIMER0]$

// $[UARTNCP]
#define BSP_UARTNCP_USART_PORT (HAL_SERIAL_PORT_USART0)
#define BSP_UARTNCP_TX_PIN (0U)
#define BSP_UARTNCP_TX_PORT (gpioPortA)
#define BSP_UARTNCP_TX_LOC (0U)

#define BSP_UARTNCP_RX_PIN (1U)
#define BSP_UARTNCP_RX_PORT (gpioPortA)
#define BSP_UARTNCP_RX_LOC (0U)

#define BSP_UARTNCP_CTS_PIN (2U)
#define BSP_UARTNCP_CTS_PORT (gpioPortA)
#define BSP_UARTNCP_CTS_LOC (30U)

#define BSP_UARTNCP_RTS_PIN (3U)
#define BSP_UARTNCP_RTS_PORT (gpioPortA)
#define BSP_UARTNCP_RTS_LOC (30U)

// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CTS_PIN (2U)
#define PORTIO_USART0_CTS_PORT (gpioPortA)
#define PORTIO_USART0_CTS_LOC (30U)

#define PORTIO_USART0_RTS_PIN (3U)
#define PORTIO_USART0_RTS_PORT (gpioPortA)
#define PORTIO_USART0_RTS_LOC (30U)

#define PORTIO_USART0_RX_PIN (1U)
#define PORTIO_USART0_RX_PORT (gpioPortA)
#define PORTIO_USART0_RX_LOC (0U)

#define PORTIO_USART0_TX_PIN (0U)
#define PORTIO_USART0_TX_PORT (gpioPortA)
#define PORTIO_USART0_TX_LOC (0U)

#define BSP_USART0_TX_PIN (0U)
#define BSP_USART0_TX_PORT (gpioPortA)
#define BSP_USART0_TX_LOC (0U)

#define BSP_USART0_RX_PIN (1U)
#define BSP_USART0_RX_PORT (gpioPortA)
#define BSP_USART0_RX_LOC (0U)

#define BSP_USART0_CTS_PIN (2U)
#define BSP_USART0_CTS_PORT (gpioPortA)
#define BSP_USART0_CTS_LOC (30U)

#define BSP_USART0_RTS_PIN (3U)
#define BSP_USART0_RTS_PORT (gpioPortA)
#define BSP_USART0_RTS_LOC (30U)

// [USART0]$

// $[USART1]
#define PORTIO_USART1_CLK_PIN (8U)
#define PORTIO_USART1_CLK_PORT (gpioPortC)
#define PORTIO_USART1_CLK_LOC (11U)

#define PORTIO_USART1_CS_PIN (9U)
#define PORTIO_USART1_CS_PORT (gpioPortC)
#define PORTIO_USART1_CS_LOC (11U)

#define PORTIO_USART1_RX_PIN (7U)
#define PORTIO_USART1_RX_PORT (gpioPortC)
#define PORTIO_USART1_RX_LOC (11U)

#define PORTIO_USART1_TX_PIN (6U)
#define PORTIO_USART1_TX_PORT (gpioPortC)
#define PORTIO_USART1_TX_LOC (11U)

#define BSP_USART1_MOSI_PIN (6U)
#define BSP_USART1_MOSI_PORT (gpioPortC)
#define BSP_USART1_MOSI_LOC (11U)

#define BSP_USART1_MISO_PIN (7U)
#define BSP_USART1_MISO_PORT (gpioPortC)
#define BSP_USART1_MISO_LOC (11U)

#define BSP_USART1_CLK_PIN (8U)
#define BSP_USART1_CLK_PORT (gpioPortC)
#define BSP_USART1_CLK_LOC (11U)

#define BSP_USART1_CS_PIN (9U)
#define BSP_USART1_CS_PORT (gpioPortC)
#define BSP_USART1_CS_LOC (11U)

// [USART1]$

// $[USART2]
#define PORTIO_USART2_CLK_PIN (7U)
#define PORTIO_USART2_CLK_PORT (gpioPortF)
#define PORTIO_USART2_CLK_LOC (18U)

#define PORTIO_USART2_CS_PIN (5U)
#define PORTIO_USART2_CS_PORT (gpioPortA)
#define PORTIO_USART2_CS_LOC (29U)

#define PORTIO_USART2_RX_PIN (2U)
#define PORTIO_USART2_RX_PORT (gpioPortK)
#define PORTIO_USART2_RX_LOC (30U)

#define PORTIO_USART2_TX_PIN (0U)
#define PORTIO_USART2_TX_PORT (gpioPortK)
#define PORTIO_USART2_TX_LOC (29U)

#define BSP_USART2_MOSI_PIN (0U)
#define BSP_USART2_MOSI_PORT (gpioPortK)
#define BSP_USART2_MOSI_LOC (29U)

#define BSP_USART2_MISO_PIN (2U)
#define BSP_USART2_MISO_PORT (gpioPortK)
#define BSP_USART2_MISO_LOC (30U)

#define BSP_USART2_CLK_PIN (7U)
#define BSP_USART2_CLK_PORT (gpioPortF)
#define BSP_USART2_CLK_LOC (18U)

#define BSP_USART2_CS_PIN (5U)
#define BSP_USART2_CS_PORT (gpioPortA)
#define BSP_USART2_CS_LOC (29U)

// [USART2]$

// $[USART3]
#define PORTIO_USART3_CLK_PIN (2U)
#define PORTIO_USART3_CLK_PORT (gpioPortC)
#define PORTIO_USART3_CLK_LOC (18U)

#define PORTIO_USART3_CS_PIN (3U)
#define PORTIO_USART3_CS_PORT (gpioPortC)
#define PORTIO_USART3_CS_LOC (18U)

#define PORTIO_USART3_RX_PIN (1U)
#define PORTIO_USART3_RX_PORT (gpioPortC)
#define PORTIO_USART3_RX_LOC (18U)

#define PORTIO_USART3_TX_PIN (0U)
#define PORTIO_USART3_TX_PORT (gpioPortC)
#define PORTIO_USART3_TX_LOC (18U)

#define BSP_USART3_MOSI_PIN (0U)
#define BSP_USART3_MOSI_PORT (gpioPortC)
#define BSP_USART3_MOSI_LOC (18U)

#define BSP_USART3_MISO_PIN (1U)
#define BSP_USART3_MISO_PORT (gpioPortC)
#define BSP_USART3_MISO_LOC (18U)

#define BSP_USART3_CLK_PIN (2U)
#define BSP_USART3_CLK_PORT (gpioPortC)
#define BSP_USART3_CLK_LOC (18U)

#define BSP_USART3_CS_PIN (3U)
#define BSP_USART3_CS_PORT (gpioPortC)
#define BSP_USART3_CS_LOC (18U)

// [USART3]$

// $[Custom pin names]
#define HALL_ENABLE_PIN (10U)
#define HALL_ENABLE_PORT (gpioPortB)

#define HALL_OUT1_PIN (11U)
#define HALL_OUT1_PORT (gpioPortB)

#define IMU_ENABLE_PIN (8U)
#define IMU_ENABLE_PORT (gpioPortF)

#define ENV_SENSE_ENABLE_PIN (9U)
#define ENV_SENSE_ENABLE_PORT (gpioPortF)

#define MIC_ENABLE_PIN (10U)
#define MIC_ENABLE_PORT (gpioPortF)

#define UV_ALS_INT_PIN (11U)
#define UV_ALS_INT_PORT (gpioPortF)

#define IMU_INT_PIN (12U)
#define IMU_INT_PORT (gpioPortF)

#define CCS811_INT_PIN (13U)
#define CCS811_INT_PORT (gpioPortF)

#define CCS811_ENABLE_PIN (14U)
#define CCS811_ENABLE_PORT (gpioPortF)

#define CCS811_WAKE_PIN (15U)
#define CCS811_WAKE_PORT (gpioPortF)

#define RGB_LED_ENABLE_PIN (14U)
#define RGB_LED_ENABLE_PORT (gpioPortJ)

// [Custom pin names]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif
