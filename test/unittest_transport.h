/*H************************************************************
 *
 * PlatformIO Test Transport for ST NUCLEO-G071RB
 *
 *  This code comes from the PlatformIO docs and is for providing
 *  test feedback between the client and host. This code is using
 *  the stm32cube framework and communicating via uart on the same
 *  usb port as the stlink on a G071RB, this config will likely be
 *  different on other ST boards.
 *
 * https://docs.platformio.org/en/latest/plus/unit-testing.html#test-transport
 *
*************************************************************H*/

#ifndef UNITEST_TRANSPORT_H
#define UNITEST_TRANSPORT_H

#ifdef __cplusplus
extern "C" {
#endif

void unittest_uart_begin();
void unittest_uart_putchar(char c);
void unittest_uart_flush();
void unittest_uart_end();

#ifdef __cplusplus
}
#endif

#endif /* UNITEST_TRANSPORT_H */
