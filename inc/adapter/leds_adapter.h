/**
 * @file led_adapter.h
 *
 * @brief Led adapter control and initialization.
 *
 * @author Vanderson Santos <vanderson.santos@thunderatz.org>
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 * @author Daniel Nery <daniel.nery@thunderatz.org>
 *
 * @date 04/2021
 */

#ifndef __LEDS_ADAPTER_H__
#define __LEDS_ADAPTER_H__

#include "led_handler.h"

/*****************************************
 * Public Types
 *****************************************/

/**
 * @brief LEDs possibilities by color
 */
typedef enum led_adapter_type {
    LED_RED = 0,
    LED_ORANGE = 1,
    LED_GREEN = 2,
    LED_BLUE = 3
} led_adapter_type_t;

/**
 * @brief LEDs actions.
 */
typedef enum led_adapter_action {
    LED_ADAPTER_ACTION_ON,
    LED_ADAPTER_ACTION_OFF,
    LED_ADAPTER_ACTION_TOGGLE,
} led_adapter_action_t;

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief Initializes the led.
 */
void leds_adapter_init();

/**
 * @brief Controls the state of the LED.
 *
 * @param led_color Color of the LED to be controlled.
 * @param action State of the LED.
 */
void leds_adapter_control(led_adapter_type_t led_color, led_adapter_action_t action);

/**
 * @brief Turns all LEDs off
 */
void leds_adapter_turn_all_off(void);

#endif // __LEDS_ADAPTER_H__
