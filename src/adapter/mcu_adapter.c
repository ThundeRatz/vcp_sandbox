/**
 * @file mcu_adapter.c
 *
 * @brief MCU related.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 * @author Daniel Nery <daniel.nery@thunderatz.org>
 *
 * @date 09/2019
 */

#include "mcu_adapter.h"

#include "gpio.h"

/*****************************************
 * Public Functions Bodies Definitions
 *****************************************/

void mcu_adapter_init(void) {
    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();
}

void mcu_adapter_sleep_ms(uint32_t ms) {
    HAL_Delay(ms);
}

uint32_t mcu_adapter_get_tick_ms(void) {
    return HAL_GetTick();
}
