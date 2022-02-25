/**
 * @file mcu_adapter.h
 *
 * @brief MCU related.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 * @author Daniel Nery <daniel.nery@thunderatz.org>
 * @author Bernardo Coutinho <bernardo.coutinho@thunderatz.org>
 *
 * @date 12/2019
 */

#ifndef __MCU_ADAPTER_H__
#define __MCU_ADAPTER_H__

#include <stdint.h>
#include <stdbool.h>

#include "main.h"

/*****************************************
 * Public Macros
 *****************************************/

#define reset_timer(ticks) (ticks = HAL_GetTick())
#define get_timer(ticks) (HAL_GetTick() - ticks)

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief Initializes hardware and peripherals.
 */
void mcu_adapter_init(void);

/**
 * @brief Initializes System Clock.
 *
 * @note  Defined by cube.
 */
void SystemClock_Config(void);

/**
 * @brief  Provides accurate delay (in milliseconds) based
 *         on variable incremented.
 *
 * @param ms Specifies the delay time length, in milliseconds.
 */
void mcu_adapter_sleep_ms(uint32_t ms);

/**
 * @brief  Povides a tick value in millisecond.
 *
 * @return tick value.
 */
uint32_t mcu_adapter_get_tick_ms();

#endif // __MCU_ADAPTER_H__
