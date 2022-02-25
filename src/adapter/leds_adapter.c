/**
 * @file led_adapter.c
 *
 * @brief Led adapter control and initialization.
 *
 * @author Vanderson Santos <vanderson.santos@thunderatz.org>
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 * @author Daniel Nery <daniel.nery@thunderatz.org>
 *
 * @date 04/2021
 */

#include "leds_adapter.h"

/*****************************************
 * Private Variables
 *****************************************/

static led_handler_t m_leds[] = {
    {
        /* LED_COLOR_RED */
        .port = TARGET_LED_RED_PORT,
        .pin = TARGET_LED_RED_PIN,
    },
#if (TARGET_LEDS_AMOUNT > 1)
    {
        /* LED_COLOR_ORANGE */
        .port = TARGET_LED_ORANGE_PORT,
        .pin = TARGET_LED_ORANGE_PIN,
    },
    {
        /* LED_COLOR_GREEN */
        .port = TARGET_LED_GREEN_PORT,
        .pin = TARGET_LED_GREEN_PIN,
    },
    {
        /* LED_COLOR_BLUE */
        .port = TARGET_LED_BLUE_PORT,
        .pin = TARGET_LED_BLUE_PIN,
    }
#endif
};

/*****************************************
 * Public Functions Bodies Definitions
 *****************************************/

void leds_adapter_init(void) {
    for (led_adapter_type_t i = 0; i < TARGET_LEDS_AMOUNT; i++) {
        led_handler_init(&m_leds[i]);
    }
}

void leds_adapter_control(led_adapter_type_t led_color, led_adapter_action_t action) {
    if (led_color >= TARGET_LEDS_AMOUNT) {
        return;
    }

    switch (action) {
        case LED_ADAPTER_ACTION_TOGGLE: {
            led_handler_control(&m_leds[led_color], LED_HANDLER_GPIO_ACTION_TOGGLE);
            break;
        }

        case LED_ADAPTER_ACTION_ON: {
            led_handler_control(&m_leds[led_color], LED_HANDLER_GPIO_ACTION_SET);
            break;
        }

        case LED_ADAPTER_ACTION_OFF: {
            led_handler_control(&m_leds[led_color], LED_HANDLER_GPIO_ACTION_RESET);
            break;
        }
    }
}

void leds_adapter_turn_all_off(void) {
    for (led_adapter_type_t i = 0; i < TARGET_LEDS_AMOUNT; i++) {
        leds_adapter_control(i, LED_ADAPTER_ACTION_OFF);
    }
}
