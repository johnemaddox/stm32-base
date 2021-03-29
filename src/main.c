/*H************************************************************
 *
 * Blinky Example for ST NUCLEO-G071RB
 *
*************************************************************H*/

#include "stm32g0xx_hal.h"
#include "gpio.h"

int main ()
{
    HAL_Init();
    gpio_init(LED_GPIO_PORT, LED_PIN);

    while(1)
    {
        HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
        HAL_Delay(1000);
    }
}

void SysTick_Handler (void)
{
    HAL_IncTick();
}
