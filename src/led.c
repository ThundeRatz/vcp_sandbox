/**
 * @file led.c
 *
 * @brief LED control
 */

#include "gpio.h"
#include "main.h"
#include "led.h"

/*****************************************
 * Public Function Body Definitions
 *****************************************/

void led_on(void) {
    HAL_GPIO_WritePin(TARGET_LED_PORT, TARGET_LED_PIN, GPIO_PIN_RESET);
}

void led_off(void) {
    HAL_GPIO_WritePin(TARGET_LED_PORT, TARGET_LED_PIN, GPIO_PIN_SET);
}

void led_toggle(void) {
    HAL_GPIO_TogglePin(TARGET_LED_PORT, TARGET_LED_PIN);
}
