# Name: bluepill_config.mk
# Author: Lucas Schneider
# ThundeRatz Robotics Team
# 02/2022

DEVICE_FAMILY  := STM32F1xx
DEVICE_TYPE    := STM32F103xx
DEVICE_DEF     := STM32F103xB
DEVICE         := STM32F103C8

# Linker script file without .ld extension
# Find it on cube folder after code generation
DEVICE_LD_FILE := STM32F103C8Tx_FLASH
