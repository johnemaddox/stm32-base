/*H************************************************************
 *
 * GPIO for ST NUCLEO-G071RB
 *
 *  Just enough code here to run blinky.
 *
*************************************************************H*/

#include "gpio.h"

void gpio_init (GPIO_TypeDef *port, uint32_t pin)
{
    __HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin =   pin;
    GPIO_InitStruct.Mode =  GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull =  GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(port, &GPIO_InitStruct);
}
