/*H************************************************************
 *
 * GPIO for ST NUCLEO-G071RB
 *
 *  Just enough code here to run blinky.
 *
*************************************************************H*/

#ifndef GPIO_H
#define GPIO_H

#include "stdint.h"
#include "stm32g0xx_hal.h"

#define LED_PIN         GPIO_PIN_5
#define LED_GPIO_PORT   GPIOA

void gpio_init (GPIO_TypeDef *port, uint32_t pin);

#endif /* GPIO_H */
