/***************************************
���ߣ�CGN
�ļ�����main.c
�������ڣ�2019.4.8
������main������
***************************************/

#include "reg52.h"
#include "userdef.h"
#include "delay.h"
#include "uart.h"

void main(void){
	Uart_Init(9600);
	
	delay_ms(200);
	Uart_SendString("Start\n");
	
	while(1){
	}
}
