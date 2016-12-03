#include "uart.h"
#include "simple_uart.h"
#include <stdarg.h>
#include <stdio.h>



void USART_Configuration(void)//���ڳ�ʼ������
  {  

    simple_uart_config(RTS_PIN_NUMBER, TX_PIN_NUMBER, CTS_PIN_NUMBER, RX_PIN_NUMBER, HWFC);
 //   nrf_gpio_cfg_output(ERROR_PIN); // ERROR_PIN configured as output.

		}			

		
/************************************************************** 
* ������  : fputc()
* ����    : �ض���putc��������������ʹ��printf�����Ӵ���1��ӡ���
* ����    : None
* ���    : None
* ����    : None
* ����    : ���
* ��������: 2014.1.1
* �汾    : V1.00
*************************************************************/
int _write(int fd, char * str, int len)
{
    for (int i = 0; i < len; i++)
    {
        simple_uart_put(str[i]);
    }
    return len;
}





