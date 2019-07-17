/***************************************
作者：CGN
文件名：main.c
创建日期：2019.4.8
描述：main主函数
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
