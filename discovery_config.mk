# Name: discovery_config.mk
# Author: Lucas Schneider
# ThundeRatz Robotics Team
# 02/2022

DEVICE_FAMILY  := STM32F0xx
DEVICE_TYPE    := STM32F072xx
DEVICE_DEF     := STM32F072xB
DEVICE         := STM32F072RB

# Linker script file without .ld extension
# Find it on cube folder after code generation
DEVICE_LD_FILE := STM32F072RBTx_FLASH
