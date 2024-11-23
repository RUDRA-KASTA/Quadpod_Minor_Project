#include <stm32f407xx.h>
#include <math.h>
#include <string.h>
#include "stm32f407xx_1.h"
#include "GPIO.h"
#include "SPI.h"
#include "USART.h"
#include "RCC.h"
#include "TIMER.h"
#include "LCD.h"

#define DELAY  15

#ifndef _common_H
#define _common_H

////////PWM//////////
#define PWM_FR_a_VAL(x) TIM4->CCR3=x
#define PWM_FR_b_VAL(x) TIM4->CCR1=x
#define PWM_FR_c_VAL(x) TIM4->CCR2=x

#define PWM_FL_a_VAL(x) TIM3->CCR3=x
#define PWM_FL_b_VAL(x) TIM3->CCR1=x
#define PWM_FL_c_VAL(x) TIM3->CCR2=x

#define PWM_BL_a_VAL(x) TIM2->CCR3=x
#define PWM_BL_b_VAL(x) TIM2->CCR4=x
#define PWM_BL_c_VAL(x) TIM2->CCR2=x

#define PWM_BR_a_VAL(x) TIM1->CCR3=x
#define PWM_BR_b_VAL(x) TIM1->CCR1=x
#define PWM_BR_c_VAL(x) TIM1->CCR2=x

#define PWM_FR_a(th)    PWM_FR_a_VAL(600+(180-th)*10)
#define PWM_FR_b(th)    PWM_FR_b_VAL(1500+th*10)
#define PWM_FR_c(th)    PWM_FR_c_VAL(1500+th*10)

#define PWM_FL_a(th)    PWM_FL_a_VAL(600+th*10)
#define PWM_FL_b(th)    PWM_FL_b_VAL(1500+th*10)
#define PWM_FL_c(th)    PWM_FL_c_VAL(1500+th*6.67)

#define PWM_BL_a(th)    PWM_BL_a_VAL(600+th*10)
#define PWM_BL_b(th)    PWM_BL_b_VAL(1500+th*10)
#define PWM_BL_c(th)    PWM_BL_c_VAL(1500+th*10)

#define PWM_BR_a(th)    PWM_BR_a_VAL(600+(180-th)*10)
#define PWM_BR_b(th)    PWM_BR_b_VAL(1500+th*10)
#define PWM_BR_c(th)    PWM_BR_c_VAL(1500+th*10)

#define TIMER1_ENABLE  TIM1->CR1|=(1<<0)
#define TIMER2_ENABLE  TIM2->CR1|=(1<<0)
#define TIMER3_ENABLE  TIM3->CR1|=(1<<0)
#define TIMER4_ENABLE  TIM4->CR1|=(1<<0)
#define TIMER5_ENABLE  TIM5->CR1|=(1<<0)
#define TIMER6_ENABLE  TIM6->CR1|=(1<<0)

///////////  PWM  ///////////

void PWM_1_a();
void PWM_1_b();
void PWM_1_c();

void PWM_2_a();
void PWM_2_b();
void PWM_2_c();

void PWM_3_a();
void PWM_3_b();
void PWM_3_c();

void PWM_4_a();
void PWM_4_b();
void PWM_4_c();

//////////  USART  //////////
void USART_1_PS4();
void USART_2();
void USART_3();
void UART_4();
void USART_5();
void USART_6();


void stand_up(void);
void stand_up_required_pos(void);
void step_1st(void);
void step_2nd(void);
void step_3rd(void);
void step_4th(void);
void slide_1(void);
void slide_2(void);

void Check (void);

#endif
