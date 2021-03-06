#ifndef _PWM_OUT_H_
#define _PWM_OUT_H_

#include "stm32f4xx.h"

u8 PWM_Out_Init(uint16_t hz);
void SetPwm(u16 pwm0,u16 pwm1,u16 pwm2,u16 pwm3,u16 pwm4,u16 pwm5,u16 pwm6,u16 pwm7);
void Step_PWM_init(void);
void step_PWM(u32 num);
void PWM_init_20ms(void);
void SetPwm_dj(u16 pwm4,u16 pwm5,u16 pwm6,u16 pwm7);

#endif

