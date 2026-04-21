/*
 * Copyright (c) 2025 Rapyuta Robotics
 * SPDX-License-Identifier: Apache-2.0
 *
 * Runtime-configurable I2C transfer timeout for STM32 drivers.
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_I2C_I2C_STM32_TIMEOUT_H_
#define ZEPHYR_INCLUDE_DRIVERS_I2C_I2C_STM32_TIMEOUT_H_

#include <zephyr/device.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Set the I2C transfer timeout for an STM32 I2C device.
 *
 * @param dev Pointer to the I2C device.
 * @param timeout_ms Timeout in milliseconds.
 */
void i2c_stm32_set_transfer_timeout(const struct device *dev, uint32_t timeout_ms);

/**
 * @brief Get the current I2C transfer timeout for an STM32 I2C device.
 *
 * @param dev Pointer to the I2C device.
 * @return Current timeout in milliseconds.
 */
uint32_t i2c_stm32_get_transfer_timeout(const struct device *dev);

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_INCLUDE_DRIVERS_I2C_I2C_STM32_TIMEOUT_H_ */
