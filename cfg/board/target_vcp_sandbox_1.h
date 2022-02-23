/**
 * @file target_vcp_sandbox_1.h
 *
 * @brief Configurations for USB VCP sandbox
 *
 * @author Lucas Schneider <lucas.schneider@thunderatz.org>
 *
 * @date 02/2022
 */

#ifndef __TARGET_VCP_SANDBOX_1_H__
#define __TARGET_VCP_SANDBOX_1_H__

/*****************************************
 * Public Constants
 *****************************************/

/** LED */
#define TARGET_LED_PORT GPIOC
#define TARGET_LED_PIN GPIO_PIN_13

/** USB */
#define TARGET_USB_UART_HANDLER (huart1)
#define TARGET_USB_UART_HANDLER_INSTANCE USART1
#define TARGET_USB_UART_INIT MX_USART1_UART_Init
#define TARGET_DMA_INIT MX_DMA_Init

#endif // __TARGET_VCP_SANDBOX_1_H__
