#ifndef __PWM_H
#define __PWM_H

#include "userdef.h"

#define TSTEP (-(signed char)(FOSC/12/10000))

sbit P_CH1=P0^0;
sbit P_CH2=P0^5;

void PWM_Init(unsigned int cycle);			//PWM��ʼ��,��������ʱ��,��λ0.1ms
void PWM_CH1(unsigned int vaule);				//PWM_CHANNEL1ֵ����
void PWM_CH2(unsigned int vaule);				//PWM_CHANNEL2ֵ����

#endif
