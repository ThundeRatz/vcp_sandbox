/**
 * @file main.c
 *
 * @brief Main function
 */

#include "mcu_adapter.h"
#include "leds_adapter.h"

#include "usb_device.h"

#include "usbd_cdc_if.h"

/*****************************************
 * Private Constant Definitions
 *****************************************/

#define LED_TOGGLE_DELAY_MS 1500

/*****************************************
 * Private Functions Prototypes
 *****************************************/

int8_t CDC_Receive_FS(uint8_t *Buf, uint32_t *Len);

/*****************************************
 * Private Variables Definitions
 *****************************************/

static uint8_t buffer[50];
extern USBD_HandleTypeDef hUsbDeviceFS;

/*****************************************
 * Main Function
 *****************************************/

int main(void)
{
    mcu_adapter_init();

    MX_USB_DEVICE_Init();

    USBD_Interface_fops_FS.Receive = CDC_Receive_FS;

    for (;;)
    {
        leds_adapter_control(LED_RED, LED_ADAPTER_ACTION_TOGGLE);
        mcu_adapter_sleep_ms(LED_TOGGLE_DELAY_MS);
    }
}

/*****************************************
 * Public Functions Bodies Definitions
 *****************************************/

int8_t CDC_Receive_FS(uint8_t *Buf, uint32_t *Len)
{
    uint8_t result = USBD_CDC_SetRxBuffer(&hUsbDeviceFS, &buffer[0]);

    if (result == USBD_OK) {
        result = USBD_CDC_ReceivePacket(&hUsbDeviceFS);
    }

    if (result == USBD_OK) {
        //copia o que foi lido para nosso buffer
    }
    return result;
}
