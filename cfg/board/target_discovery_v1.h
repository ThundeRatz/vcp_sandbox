/**
 * @file target_discovery_v1.h
 *
 * @brief Configurations for USB VCP sandbox
 *
 * @author Lucas Schneider <lucas.schneider@thunderatz.org>
 *
 * @date 02/2022
 */

#ifndef __TARGET_DISCOVERY_V1_H__
#define __TARGET_DISCOVERY_V1_H__

/*****************************************
 * Public Constants
 *****************************************/

/** LED */
#define TARGET_LEDS_AMOUNT 4

#define TARGET_LED_RED_PORT GPIOC
#define TARGET_LED_RED_PIN GPIO_PIN_6
#define TARGET_LED_ORANGE_PORT GPIOC
#define TARGET_LED_ORANGE_PIN GPIO_PIN_8
#define TARGET_LED_GREEN_PORT GPIOC
#define TARGET_LED_GREEN_PIN GPIO_PIN_9
#define TARGET_LED_BLUE_PORT GPIOC
#define TARGET_LED_BLUE_PIN GPIO_PIN_7

/** USB */
#define TARGET_USB_HANDLER
#define TARGET_USB_HANDLER_INSTANCE
#define TARGET_USB_INIT

#endif // __TARGET_DISCOVERY_V1_H__
