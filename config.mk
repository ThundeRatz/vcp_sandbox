# Name: config.mk
# Author: Daniel Nery Silva de Oliveira
# ThundeRatz Robotics Team
# 06/2019

# Cube file name without .ioc extension
PROJECT_NAME = discovery
VERSION := v1

TARGET_BOARD := target_$(PROJECT_NAME)_$(VERSION)

# Device configs
ifeq ($(PROJECT_NAME), bluepill)
include bluepill_config.mk
else ifeq ($(PROJECT_NAME), discovery)
include discovery_config.mk
else
$(error Unknown Project)
endif

# Lib dir
LIB_DIR  := lib

# Cube Directory
CUBE_DIR := cube

# Config Files Directory
CFG_DIR := cfg

# Tests Directory
TEST_DIR := tests

# Default values, can be set on the command line or here
DEBUG   ?= 1
VERBOSE ?= 0
TEST    ?= 0

TEST_NAME ?= test_main
