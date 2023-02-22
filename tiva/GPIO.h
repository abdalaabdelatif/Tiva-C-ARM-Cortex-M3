#ifndef GPIO
#define GPIO
#include "STD_TYPES.h"
#include "CLOCK.h"
/*
GPIODEN
GPIO Port A (APB) base: 0x4000.4000
GPIO Port B (APB) base: 0x4000.5000
GPIO Port C (APB) base: 0x4000.6000
GPIO Port D (APB) base: 0x4000.7000
GPIO Port E (APB) base: 0x4002.4000
GPIO Port F (APB) base: 0x4002.5000
Offset 0x51C
Type RW, reset 





*/
void MCAL_GPIOEnable (u8 GPIO_PORT , u8 GPIO_Pin);
void MCAL_GPIOSetPin(u8 GPIO_PORT , u8 GPIO_Pin);
void MCAL_GPIOResetPin(u8 GPIO_PORT , u8 GPIO_Pin);


#define GPIOADEN  *((unsigned int *)0x4000451C)
#define GPIOADIR  *((unsigned int *)0x40004400)
#define GPIOADATA *((unsigned int *)0x400043FC)



#define GPIOBDEN  *((unsigned int *)0x4000551C)
#define GPIOBDIR  *((unsigned int *)0x40005400)
#define GPIOBDATA *((unsigned int *)0x400053FC)



#define GPIOCDEN  *((unsigned int *)0x4000651C)
#define GPIOCDIR  *((unsigned int *)0x40006400)
#define GPIOCDATA *((unsigned int *)0x400063FC)



#define GPIODDEN  *((unsigned int *)0x4000751C)
#define GPIODDIR  *((unsigned int *)0x40007400)
#define GPIODDATA *((unsigned int *)0x400073FC)



#define GPIOEDEN  *((unsigned int *)0x4002451C)
#define GPIOEDIR  *((unsigned int *)0x40024400)
#define GPIOEDATA *((unsigned int *)0x400243FC)



#define GPIOFDEN  *((unsigned int *)0x4002551C)
#define GPIOFDIR  *((unsigned int *)0x40025400)
#define GPIOFDATA *((unsigned int *)0x400253FC)

#endif
