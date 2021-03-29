/*H************************************************************
 *
 * Test All
 *
 *  Test runner for all tests, new tests must be added between
 *  UNITY_BEGIN and UNITY_END. Basic setup for stm32cube Framework.
 *
*************************************************************H*/

#include <unity.h>
#include "stm32g0xx_hal.h"
#include "test_blinky.h"

/* a two second delay is called after HAL_init() to allow
 * time for the host and target device to establish a connection
 * using the protocol defined in the transport.
*/
int main ()
{
    HAL_Init();
    HAL_Delay(2000);

    UNITY_BEGIN();

    test_blinky();

    UNITY_END();
}

void SysTick_Handler (void)
{
    HAL_IncTick();
}
