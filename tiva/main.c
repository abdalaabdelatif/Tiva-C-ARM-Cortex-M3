#include "CLOCK.h"
#include "GPIO.h"
#include "DELAY.h"

int main ()
{
	MCAL_GPIOEnable(PORTF , PIN1);
	MCAL_GPIOEnable(PORTF , PIN2);
	MCAL_GPIOEnable(PORTF , PIN3);
	
	
while(1)
{
  MCAL_GPIOSetPin(PORTF , PIN1);
	Delay(10000000);
	MCAL_GPIOSetPin(PORTF , PIN2);
	Delay(10000000);
	MCAL_GPIOSetPin(PORTF , PIN3);
	Delay(10000000);
	MCAL_GPIOResetPin(PORTF , PIN2);
	Delay(10000000);
	MCAL_GPIOResetPin(PORTF , PIN1);
	Delay(10000000);
	MCAL_GPIOResetPin(PORTF , PIN3);
	Delay(10000000);
}
}

