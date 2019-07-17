/***************************************
���ߣ�CGN
�ļ�����delay.c
�������ڣ�2019.4.8
��������ʱ����
***************************************/

#include "reg52.h"
#include "intrins.h"
#include "delay.h"

void delay_ms(unsigned int t)		
{
	while(t--){

#if (FOSC==11059200L)
		unsigned char i, j;
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		}while (--i);
		
#elif (FOSC==12000000L)
		unsigned char i, j;
		i = 2;
		j = 239;
		do{
			while (--j);
		}while (--i);
		
#else
#error "Please use correct delay function"
#endif

	}
}
