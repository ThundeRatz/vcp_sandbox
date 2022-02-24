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
#define TARGET_USB_HANDLER
#define TARGET_USB_HANDLER_INSTANCE
#define TARGET_USB_INIT

#endif // __TARGET_VCP_SANDBOX_1_H__
