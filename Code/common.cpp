#include "common.h"
#include <math.h>


////////////////////////  LEDs  ////////////////////////
void LEDs()
{
	GPIO_Handle_t GPIO_Btn;
	GPIO_Btn.pGPIOx=GPIOD;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_12;                 
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinSpeed=GPIO_SPEED_MED;
	GPIO_Init(&GPIO_Btn);
	
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_13;                 
	GPIO_Init(&GPIO_Btn);
	
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_14;                 
	GPIO_Init(&GPIO_Btn);
	
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_15;                 
	GPIO_Init(&GPIO_Btn);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                                           Leg 1                                                        ////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PWM_1_a()
{
	GPIO_Handle_t GPIO_Btn;																					/// channel 3
  GPIO_Btn.pGPIOx=GPIOD;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=2;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_14;    	
	GPIO_Init(&GPIO_Btn);
	
	TimerPeriClock(TIM4,ENABLE);
	TIM4->PSC=0x54;
	TIM4->ARR=0x4E1F;
	TIM4->CR1|=(1<<7);
	TIM4->CR1|=(1<<0);
	TIM4->CCMR2|=(0<<0);//O/P FIRST CANNEL 
	TIM4->CCMR2|=(7<<4);
	TIM4->CCMR2|=(1<<3);
	TIM4->CCER|=(1<<9);//Active Low
	TIM4->CCER|=(1<<8);
}
void PWM_1_b()
{
	GPIO_Handle_t GPIO_Btn;																									/// channel 1
  GPIO_Btn.pGPIOx=GPIOD;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=2;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_12;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM4->CCMR1|=(0<<0);//O/P FIRST CANNEL 
	TIM4->CCMR1|=(7<<4);
	TIM4->CCMR1|=(1<<3);
	TIM4->CCER|=(1<<0);
	TIM4->CCER|=(1<<1);//Active Low
}
void PWM_1_c()
{
	GPIO_Handle_t GPIO_Btn;																										/// channel 2
  GPIO_Btn.pGPIOx=GPIOD;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=2;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_13;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM4->CCMR1|=(0<<8);//O/P FIRST CANNEL 
	TIM4->CCMR1|=(7<<12);
	TIM4->CCMR1|=(1<<11);
	TIM4->CCER|=(1<<4);
	TIM4->CCER|=(1<<5);//Active Low	
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                                           Leg 2                                                        ////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PWM_2_a()
{
	GPIO_Handle_t GPIO_Btn;																					/// channel 3
  GPIO_Btn.pGPIOx=GPIOC;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=2;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_8;    	
	GPIO_Init(&GPIO_Btn);
	
	TimerPeriClock(TIM3,ENABLE);
	TIM3->PSC=0x54;
	TIM3->ARR=0x4E1F;
	TIM3->CR1|=(1<<7);
	TIM3->CR1|=(1<<0);
	TIM3->CCMR2|=(0<<0);//O/P FIRST CANNEL 
	TIM3->CCMR2|=(7<<4);
	TIM3->CCMR2|=(1<<3);
	TIM3->CCER|=(1<<9);//Active Low
	TIM3->CCER|=(1<<8);
}
void PWM_2_b()
{
	GPIO_Handle_t GPIO_Btn;																									/// channel 1
  GPIO_Btn.pGPIOx=GPIOC;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=2;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_6;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM3->CCMR1|=(0<<0);//O/P FIRST CANNEL 
	TIM3->CCMR1|=(7<<4);
	TIM3->CCMR1|=(1<<3);
	TIM3->CCER|=(1<<0);
	TIM3->CCER|=(1<<1);//Active Low
}
void PWM_2_c()
{
	GPIO_Handle_t GPIO_Btn;																										/// channel 2
  GPIO_Btn.pGPIOx=GPIOC;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=2;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_7;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM3->CCMR1|=(0<<8);//O/P FIRST CANNEL 
	TIM3->CCMR1|=(7<<12);
	TIM3->CCMR1|=(1<<11);
	TIM3->CCER|=(1<<4);
	TIM3->CCER|=(1<<5);//Active Low	
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                                           Leg 3                                                        ////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PWM_3_a()
{
	GPIO_Handle_t GPIO_Btn;																					/// channel 3
  GPIO_Btn.pGPIOx=GPIOA;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=1;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_2;    	
	GPIO_Init(&GPIO_Btn);
	
	TimerPeriClock(TIM2,ENABLE);
	TIM2->PSC=0x54;
	TIM2->ARR=0x4E1F;
	
	TIM2->CR1|=(1<<7);
	TIM2->CR1|=(1<<0);
	TIM2->CCMR2|=(0<<0);//O/P FIRST CANNEL 
	TIM2->CCMR2|=(7<<4);
	TIM2->CCMR2|=(1<<3);
	TIM2->CCER|=(1<<9);//Active Low
	TIM2->CCER|=(1<<8);
}
void PWM_3_b()
{
	GPIO_Handle_t GPIO_Btn;																									/// channel 4
  GPIO_Btn.pGPIOx=GPIOA;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=1;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_3;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM2->CCMR2|=(0<<8);//O/P FIRST CANNEL 
	TIM2->CCMR2|=(7<<12);
	TIM2->CCMR2|=(1<<11);
	TIM2->CCER|=(1<<12);
	TIM2->CCER|=(1<<13);//Active Low
}
void PWM_3_c()
{
	GPIO_Handle_t GPIO_Btn;																										/// channel 2
  GPIO_Btn.pGPIOx=GPIOA;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=1;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_1;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM2->CCMR1|=(0<<8);//O/P FIRST CANNEL 
	TIM2->CCMR1|=(7<<12);
	TIM2->CCMR1|=(1<<11);
	TIM2->CCER|=(1<<4);
	TIM2->CCER|=(1<<5);//Active Low	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                                           Leg 4                                                        ////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PWM_4_a()
{
	GPIO_Handle_t GPIO_Btn;																				//channel 3
  GPIO_Btn.pGPIOx=GPIOE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=1;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_13;                  
	GPIO_Init(&GPIO_Btn);
	
	TimerPeriClock(TIM1,ENABLE);
	TIM1->PSC=0xA8;
	TIM1->ARR=0x4E1F;
	
	TIM1->CR1|=(1<<7);
	TIM1->CR1|=(1<<0);
	TIM1->CCMR2|=(0<<0);//O/P FIRST CANNEL 
	TIM1->CCMR2|=(7<<4);
	TIM1->CCMR2|=(1<<3);
	TIM1->CCER|=(1<<9);//Active Low
	TIM1->CCER|=(1<<8);
	TIM1->BDTR|=(1<<15);
}
void PWM_4_b()
{
	GPIO_Handle_t GPIO_Btn;																									/// channel 1
  GPIO_Btn.pGPIOx=GPIOE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=1;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_9;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM1->CCMR1|=(0<<0);//O/P FIRST CANNEL 
	TIM1->CCMR1|=(7<<4);
	TIM1->CCMR1|=(1<<3);
	TIM1->CCER|=(1<<0);
	TIM1->CCER|=(1<<1);//Active Low
}
void PWM_4_c()
{
	GPIO_Handle_t GPIO_Btn;																										/// channel 2
  GPIO_Btn.pGPIOx=GPIOE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_OUT;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_ALE;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinPuPdControl=GPIO_NPULL;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinAltFunMode=1;
	GPIO_Btn.GPIO_PinConfig.GPIO_PinNumber=GPIO_11;    	
	GPIO_Init(&GPIO_Btn);
	
	TIM1->CCMR1|=(0<<8);//O/P FIRST CANNEL 
	TIM1->CCMR1|=(7<<12);
	TIM1->CCMR1|=(1<<11);
	TIM1->CCER|=(1<<4);
	TIM1->CCER|=(1<<5);//Active Low	
}





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                                     Specific Functions                                                 ////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Check (void)
{
	PWM_FL_a(90);
	PWM_FL_b(0);
	PWM_FL_c(0);
	
	PWM_FR_a(90);
	PWM_FR_b(0);
	PWM_FR_c(0);
	
	PWM_BL_a(90);
	PWM_BL_b(0);
	PWM_BL_c(0);
	
	PWM_BR_a(90);
	PWM_BR_b(0);
	PWM_BR_c(0);
}

void stand_up(void)
{
	int r;
	
	PWM_FL_a(90);
	PWM_FL_b(0);
	PWM_FL_c(0);
	
	PWM_FR_a(90);
	PWM_FR_b(0);
	PWM_FR_c(0);
	
	PWM_BL_a(90);
	PWM_BL_b(0);
	PWM_BL_c(0);
	
	PWM_BR_a(90);
	PWM_BR_b(0);
	PWM_BR_c(0);
														 //// 90,0,0
	waitms(3000);              //// 45,-45,-45
	
	for(r=0;r<=45;r++)
	{
		PWM_FL_b(r);
		PWM_FR_b(r);
		PWM_BL_b(r);
		PWM_BR_b(r);
		PWM_FL_c((-2*r));
		PWM_FR_c((-2*r));
		PWM_BL_c((-2*r));
		PWM_BR_c((-2*r));
		waitms(DELAY);
	}
	for(r=0;r<=45;r++)
	{
		PWM_FL_a((90-r));
		PWM_FR_a((90-r));
		PWM_BL_a((90+r));
		PWM_BR_a((90+r));
		waitms(DELAY);
	}
	
	for(r=0;r<=60;r++)
	{
		PWM_FL_b((60-r));
		PWM_FR_b((60-r));
		PWM_BL_b((60-r));
		PWM_BR_b((60-r));
		
		PWM_FL_c((-90-r/2));
		PWM_FR_c((-90-r/2));
		PWM_BL_c((-90-r/2));
		PWM_BR_c((-90-r/2));
		
		waitms(DELAY);
	}
	
	for(r=0;r<=45;r++)
	{
		PWM_FL_b((-r));
		PWM_FR_b((-r));
		PWM_BL_b((-r));
		PWM_BR_b((-r));
		
		PWM_FL_c((-120+(5*r/3)));
		PWM_FR_c((-120+(5*r/3)));
		PWM_BL_c((-120+(5*r/3)));
		PWM_BR_c((-120+(5*r/3)));
		
		waitms(DELAY);
	}
}

void stand_up_required_pos(void)
{
	int r;
	
	PWM_FL_a(90);
	PWM_FL_b(0);
	PWM_FL_c(0);
	
	PWM_FR_a(90);
	PWM_FR_b(0);
	PWM_FR_c(0);
	
	PWM_BL_a(90);
	PWM_BL_b(0);
	PWM_BL_c(0);
	
	PWM_BR_a(90);
	PWM_BR_b(0);
	PWM_BR_c(0);
														 //// 90,0,0
	waitms(3000);              //// 45,-45,-45
	
	for(r=0;r<=45;r++)
	{
		PWM_FL_b(r);
		PWM_FR_b(r);
		PWM_BL_b(r);
		PWM_BR_b(r);
		PWM_FL_c((-2*r));
		PWM_FR_c((-2*r));
		PWM_BL_c((-2*r));
		PWM_BR_c((-2*r));
		waitms(DELAY);
	}
	for(r=0;r<=45;r++)
	{
		PWM_FL_a((90-r));
		PWM_BL_a((90+r));
		PWM_BR_a((90+r));
		waitms(DELAY);
	}
	for(r=0;r<=60;r++)
	{
		if(r<=45)
		{
			PWM_FL_b((45-r));
			PWM_FR_b((45-r));
			PWM_BL_b((45-r));
			PWM_BR_b((45-r));
		}
		
		PWM_FL_c((-90-r/2));
		PWM_FR_c((-90-r/2));
		PWM_BL_c((-90-r/2));
		PWM_BR_c((-90-r/2));
		
		waitms(DELAY);
	}
	for(r=0;r<=60;r++)
	{
		PWM_FL_b((-r));
		PWM_FR_b((-r));
		PWM_BL_b((-r));
		PWM_BR_b((-r));
		
		PWM_FL_c((-120+(3*r/2)));
		PWM_FR_c((-120+(3*r/2)));
		PWM_BL_c((-120+(3*r/2)));
		PWM_BR_c((-120+(3*r/2)));
		
		waitms((DELAY));
	}
	for(r=0;r<=45;r++)
	{
		PWM_FL_a((45-r));
		PWM_BL_a((135+r));
		waitms(DELAY);
	}
}



void step_1st(void)
{
	int r;
	
//	for(r=0;r<=45;r++)
//	{
//		PWM_BR_c((-30-r));
//		waitms(DELAY);
//	}
	for(r=0;r<=60;r++)
	{
		if(r<45)
		{
			PWM_BR_c((-30-r));
		}
		PWM_BR_b((-60+r));
		waitms(DELAY);
	}
	for(r=0;r<=45;r++)
	{
		PWM_BR_a((135-r));
		waitms(DELAY);
	}
	for(r=0;r<=60;r++)
	{
		if(r<=45)
		{
			PWM_BR_c((-75+r));
		}
		PWM_BR_b((-r));
		waitms(DELAY);
	}
}

void step_2nd(void)
{
	int r;
	
//	for(r=0;r<=45;r++)
//	{
//		PWM_FR_c((-30-r));
//		waitms(DELAY);
//	}
	for(r=0;r<=60;r++)
	{
		if(r<45)
		{
			PWM_FR_c((-30-r));
		}
		PWM_FR_b((-60+r));
		waitms(DELAY);
	}
	for(r=0;r<=45;r++)
	{
		PWM_FR_a((90-r));
		waitms(DELAY);
	}
	for(r=0;r<=60;r++)
	{
		if(r<=45)
		{
			PWM_FR_c((-75+r));
		}
		PWM_FR_b((-r));
		waitms(DELAY);
	}
}

void slide_1(void)
{
	int r ;
	
	for(r=0;r<=90;r++)
	{
		PWM_FL_a((r));
		PWM_FR_a((45-(r/2)));
		PWM_BL_a((180-r/2));
		PWM_BR_a((90+r));
		waitms((2*DELAY));
	}
}



void step_3rd(void)
{
	int r;
	
//	for(r=0;r<=45;r++)
//	{
//		PWM_BL_c((-30-r));
//		waitms(DELAY);
//	}
	for(r=0;r<=60;r++)
	{
		if(r<45)
		{
			PWM_BL_c((-30-r));
		}
		PWM_BL_b((-60+r));
		waitms(DELAY);
	}
	for(r=0;r<=45;r++)
	{
		PWM_BL_a((135-r));
		waitms(DELAY);
	}
	for(r=0;r<=60;r++)
	{
		if(r<=45)
		{
			PWM_BL_c((-75+r));
		}
		PWM_BL_b((-r));
		waitms(DELAY);
	}
}

void step_4th(void)
{
	int r;
	
//	for(r=0;r<=45;r++)
//	{
//		PWM_FL_c((-30-r));
//		waitms(DELAY);
//	}
	for(r=0;r<=60;r++)
	{
		if(r<45)
		{
			PWM_FL_c((-30-r));
		}
		PWM_FL_b((-60+r));
		waitms(DELAY);
	}
	for(r=0;r<=45;r++)
	{
		PWM_FL_a((90-r));
		waitms(DELAY);
	}
	for(r=0;r<=60;r++)
	{
		if(r<=45)
		{
			PWM_FL_c((-75+r));
		}
		PWM_FL_b((-r));
		waitms(DELAY);
	}
}


void slide_2(void)
{
	int r ;
	
	for(r=0;r<=90;r++)
	{
		PWM_FL_a((45-(r/2)));
		PWM_FR_a((r));
		PWM_BL_a((90+r));
		PWM_BR_a((180-(r/2)));
		waitms(DELAY);
	}
}
































