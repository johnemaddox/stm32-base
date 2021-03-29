/*H************************************************************
 *
 * Blinky Test
 *
 * Most of this code comes from the STM32 example on PlatformIO.
 *
*************************************************************H*/

#include "test_blinky.h"
#include "stm32g0xx_hal.h"
#include "gpio.h"
#include <unity.h>

static void test_setup (void)
{
    gpio_init(LED_GPIO_PORT, LED_PIN);
}

static void test_teardown (void)
{
    HAL_GPIO_DeInit(LED_GPIO_PORT, LED_PIN);
}

static void test_led_builtin_pin_number (void)
{
    TEST_ASSERT_EQUAL(LED_PIN, 0x0020);
}

static void test_led_state_high (void)
{
    HAL_GPIO_WritePin(LED_GPIO_PORT, LED_PIN, GPIO_PIN_SET);
    TEST_ASSERT_EQUAL(HAL_GPIO_ReadPin(LED_GPIO_PORT, LED_PIN), GPIO_PIN_SET);
}

static void test_led_state_low (void)
{
    HAL_GPIO_WritePin(LED_GPIO_PORT, LED_PIN, GPIO_PIN_RESET);
    TEST_ASSERT_EQUAL(HAL_GPIO_ReadPin(LED_GPIO_PORT, LED_PIN), GPIO_PIN_RESET);
}

void test_blinky (void)
{
    test_setup();

    RUN_TEST(test_led_builtin_pin_number);

    for (size_t i=0; i < 5; i++)
    {
        RUN_TEST(test_led_state_high);
        HAL_Delay(500);
        RUN_TEST(test_led_state_low);
        HAL_Delay(500);
    }

    test_teardown();
}
