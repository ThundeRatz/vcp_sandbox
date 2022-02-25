/**
 * @file main.c
 *
 * @brief Main function
 */

#include "mcu_adapter.h"
#include "leds_adapter.h"

#include "usb_device.h"

/*****************************************
 * Private Constant Definitions
 *****************************************/

#define LED_TOGGLE_DELAY_MS 1500

/*****************************************
 * Main Function
 *****************************************/

int main(void) {
    mcu_adapter_init();

    MX_USB_DEVICE_Init();

    for (;;) {
        leds_adapter_control(LED_RED, LED_ADAPTER_ACTION_TOGGLE);
        mcu_adapter_sleep_ms(LED_TOGGLE_DELAY_MS);
    }
}
