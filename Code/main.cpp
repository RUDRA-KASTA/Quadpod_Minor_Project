#include <stdint.h>
#include <stm32f407xx.h>
#include <string.h>
#include "stm32f407xx_1.h"
#include "common.h"
#include <math.h>
#include "stdio.h"
#include "USART.h"

/*
SWCLK	PA14    // don't use these pins
SWDIO	PA13
*/

int cnt,r;
int temp;
int ang;

int main(void)
{
/////////////////////////////////////////// PLL //////////////////////////////////////////////
	
	RCC_Init();
	delay_con();
	
/////////////////////////////////////////// PLL //////////////////////////////////////////////
	
	PWM_1_a();						//done        //D14
	PWM_1_b();						//done        //D12																									////2400  180 DEGREE
	PWM_1_c();						//done        //D13																									////600   0 degree
	
	PWM_2_a();						//done
	PWM_2_b();						//done
	PWM_2_c();						//done
	
	PWM_3_a();						//done
	PWM_3_b();						//done
	PWM_3_c();						//done
	
	PWM_4_a();						//done
	PWM_4_b();						//done
	PWM_4_c();						//done
	
	
///////////////////////////////////////////////////////////////////////////////////////	
	
	Check();
	
	while(0);
	stand_up_required_pos();
	while(0);
	waitms(5000);

while(1)
{
	step_1st();
	step_2nd();
	waitms(1000);
	slide_1();
	waitms(1000);
	step_3rd();
	step_4th();
	waitms(1000);
	slide_2();
	waitms(1000);
}
	
//	PWM_FL_a(45);
//	PWM_FL_b(-45);
//	PWM_FL_c(-45);
//	
//	PWM_FR_a(45);
//	PWM_FR_b(-45);
//	PWM_FR_c(-45);
//	
//	PWM_BL_a(135);
//	PWM_BL_b(-45);
//	PWM_BL_c(-45);
//	
//	PWM_BR_a(45);
//	PWM_BR_b(-45);
//	PWM_BR_c(-45);
}