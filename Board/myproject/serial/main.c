/******************** (C) COPYRIGHT 2014������ ********************
 * �ļ���  ��main
 * ����    ��         
 * ʵ��ƽ̨������nRF5188������
 * ����    ���������
 * ����    �����
 * ����    ��qfv5.taobao.com
**********************************************************************/
#include "nrf51.h"
#include  "led.h"
#include  "uart.h"
#include "nrf_delay.h"
void simple_uart_putstring(const uint8_t *str);
int main(void)
{
    // 
	 LED_Init();
	 USART_Configuration();
    while (1)
    {
        LED2_Toggle();
        simple_uart_putstring("testdddddd\r\n");
	   	printf("helloworld!\r\n");
		  nrf_delay_ms(500);
        
    } 
}

