#ifndef __USART_H
#define __USART_H

#include "userdef.h"

/*Define UART parity mode*/
#define NONE_PARITY     0   //None parity
#define ODD_PARITY      1   //Odd parity
#define EVEN_PARITY     2   //Even parity
#define MARK_PARITY     3   //Mark parity
#define SPACE_PARITY    4   //Space parity

#define PARITYBIT NONE_PARITY   //Testing even parity

extern unsigned char UART_DATA;
extern unsigned char UART_STATE;

void Uart_Init(unsigned int BAUD);			//���ڳ�ʼ��
void Uart_SendData(BYTE dat);						//����һ�ֽ�����
void Uart_SendString(char *s);					//�����ַ���(��\0��β������)
void Uart_SendBytes(BYTE *s,WORD i);		//���Ͷ���ֽ�

#endif