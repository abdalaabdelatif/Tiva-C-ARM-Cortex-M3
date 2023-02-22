#include "STD_TYPES.h"
#include "GPIO.h"

void MCAL_GPIOEnable (u8 GPIO_PORT , u8 GPIO_Pin)
{
	if (GPIO_PORT == PORTA)
	{
		if (GPIO_Pin == PIN0)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x01;
			GPIOADIR  |= 0x01;
			
		}
		else if (GPIO_Pin == PIN1)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x02;
			GPIOADIR  |= 0x02;
			
		}
		else if (GPIO_Pin == PIN2)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x04;
			GPIOADIR  |= 0x04;
			
		}
		else if (GPIO_Pin == PIN3)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x08;
			GPIOADIR  |= 0x08;
			
		}
		else if (GPIO_Pin == PIN4)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x10;
			GPIOADIR  |= 0x10;
			
		}
		else if (GPIO_Pin == PIN5)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x20;
			GPIOADIR  |= 0x20;
			
		}
		else if (GPIO_Pin == PIN6)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x40;
			GPIOADIR  |= 0x40;
			
		}
		else if (GPIO_Pin == PIN7)
		{
			RCCGPIO   |= 0x01;
			GPIOADEN  |= 0x80;
			GPIOADIR  |= 0x80;
			
		}
	}
		
		
		
		
		
		
		
		
		else if (GPIO_PORT == PORTB)
	{
		if (GPIO_Pin == PIN0)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x01;
			GPIOBDIR  |= 0x01;
			
		}
		else if (GPIO_Pin == PIN1)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x02;
			GPIOBDIR  |= 0x02;
			
		}
		else if (GPIO_Pin == PIN2)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x04;
			GPIOBDIR  |= 0x04;
			
		}
		else if (GPIO_Pin == PIN3)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x08;
			GPIOBDIR  |= 0x08;
			
		}
		else if (GPIO_Pin == PIN4)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x10;
			GPIOBDIR  |= 0x10;
			
		}
		else if (GPIO_Pin == PIN5)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x20;
			GPIOBDIR  |= 0x20;
			
		}
		else if (GPIO_Pin == PIN6)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x40;
			GPIOBDIR  |= 0x40;
			
		}
		else if (GPIO_Pin == PIN7)
		{
			RCCGPIO   |= 0x02;
			GPIOBDEN  |= 0x80;
			GPIOBDIR  |= 0x80;
			
		}
		
	}
		
		
		
		else if (GPIO_PORT == PORTC)
	{
		if (GPIO_Pin == PIN0)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x01;
			GPIOCDIR  |= 0x01;
			
		}
		else if (GPIO_Pin == PIN1)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x02;
			GPIOCDIR  |= 0x02;
			
		}
		else if (GPIO_Pin == PIN2)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x04;
			GPIOCDIR  |= 0x04;
			
		}
		else if (GPIO_Pin == PIN3)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x08;
			GPIOCDIR  |= 0x08;
			
		}
		else if (GPIO_Pin == PIN4)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x10;
			GPIOCDIR  |= 0x10;
			
		}
		else if (GPIO_Pin == PIN5)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x20;
			GPIOCDIR  |= 0x20;
			
		}
		else if (GPIO_Pin == PIN6)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x40;
			GPIOCDIR  |= 0x40;
			
		}
		else if (GPIO_Pin == PIN7)
		{
			RCCGPIO   |= 0x04;
			GPIOCDEN  |= 0x80;
			GPIOCDIR  |= 0x80;
			
		}
	}
		
		
		
		
		
		
		else if (GPIO_PORT == PORTD)
	{
		if (GPIO_Pin == PIN0)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x01;
			GPIODDIR  |= 0x01;
			
		}
		else if (GPIO_Pin == PIN1)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x02;
			GPIODDIR  |= 0x02;
			
		}
		else if (GPIO_Pin == PIN2)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x04;
			GPIODDIR  |= 0x04;
			
		}
		else if (GPIO_Pin == PIN3)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x08;
			GPIODDIR  |= 0x08;
			
		}
		else if (GPIO_Pin == PIN4)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x10;
			GPIODDIR  |= 0x10;
			
		}
		else if (GPIO_Pin == PIN5)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x20;
			GPIODDIR  |= 0x20;
			
		}
		else if (GPIO_Pin == PIN6)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x40;
			GPIODDIR  |= 0x40;
			
		}
		else if (GPIO_Pin == PIN7)
		{
			RCCGPIO   |= 0x08;
			GPIODDEN  |= 0x80;
			GPIODDIR  |= 0x80;
			
		}
		
		
	}
		
		
		
		
		else if (GPIO_PORT == PORTE)
	{
		if (GPIO_Pin == PIN0)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x01;
			GPIOEDIR  |= 0x01;
			
		}
		else if (GPIO_Pin == PIN1)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x02;
			GPIOEDIR  |= 0x02;
			
		}
		else if (GPIO_Pin == PIN2)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x04;
			GPIOEDIR  |= 0x04;
			
		}
		else if (GPIO_Pin == PIN3)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x08;
			GPIOEDIR  |= 0x08;
			
		}
		else if (GPIO_Pin == PIN4)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x10;
			GPIOEDIR  |= 0x10;
			
		}
		else if (GPIO_Pin == PIN5)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x20;
			GPIOEDIR  |= 0x20;
			
		}
		else if (GPIO_Pin == PIN6)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x40;
			GPIOEDIR  |= 0x40;
			
		}
		else if (GPIO_Pin == PIN7)
		{
			RCCGPIO   |= 0x10;
			GPIOEDEN  |= 0x80;
			GPIOEDIR  |= 0x80;
			
		}
		
	}
		
		
		
		
		
		else if (GPIO_PORT == PORTF)
	{
		if (GPIO_Pin == PIN0)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x01;
			GPIOFDIR  |= 0x01;
			
		}
		else if (GPIO_Pin == PIN1)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x02;
			GPIOFDIR  |= 0x02;
			
		}
		else if (GPIO_Pin == PIN2)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x04;
			GPIOFDIR  |= 0x04;
			
		}
		else if (GPIO_Pin == PIN3)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x08;
			GPIOFDIR  |= 0x08;
			
		}
		else if (GPIO_Pin == PIN4)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x10;
			GPIOFDIR  |= 0x10;
			
		}
		else if (GPIO_Pin == PIN5)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x20;
			GPIOFDIR  |= 0x20;
			
		}
		else if (GPIO_Pin == PIN6)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x40;
			GPIOFDIR  |= 0x40;
			
		}
		else if (GPIO_Pin == PIN7)
		{
			RCCGPIO   |= 0x20;
			GPIOFDEN  |= 0x80;
			GPIOFDIR  |= 0x80;
			
		}
		
	}
		
		
		
		
		
		
		
	}

	
	
	void MCAL_GPIOSetPin(u8 GPIO_PORT , u8 GPIO_Pin)
	{
		if(GPIO_PORT == PORTA)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOADATA |= 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOADATA |= 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOADATA |= 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOADATA |= 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOADATA |= 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOADATA |= 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOADATA |= 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOADATA |= 0x80 ;
			}
		}
		
		
		else if(GPIO_PORT == PORTB)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOBDATA |= 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOBDATA |= 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOBDATA |= 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOBDATA |= 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOBDATA |= 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOBDATA |= 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOBDATA |= 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOBDATA |= 0x80 ;
			}
		}
		
		
		else if(GPIO_PORT == PORTC)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOCDATA |= 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOCDATA |= 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOCDATA |= 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOCDATA |= 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOCDATA |= 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOCDATA |= 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOCDATA |= 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOCDATA |= 0x80 ;
			}
		}
		
		
		
		else if(GPIO_PORT == PORTD)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIODDATA |= 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIODDATA |= 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIODDATA |= 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIODDATA |= 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIODDATA |= 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIODDATA |= 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIODDATA |= 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIODDATA |= 0x80 ;
			}
		}
		
		
		
		
		else if(GPIO_PORT == PORTE)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOEDATA |= 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOEDATA |= 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOEDATA |= 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOEDATA |= 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOEDATA |= 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOEDATA |= 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOEDATA |= 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOEDATA |= 0x80 ;
			}
		}
		
		
		
		else if(GPIO_PORT == PORTF)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOFDATA |= 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOFDATA |= 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOFDATA |= 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOFDATA |= 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOFDATA |= 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOFDATA |= 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOFDATA |= 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOFDATA |= 0x80 ;
			}
		}
		
		
		
		
		
	}
	
	
	
	
	
	
	
	void MCAL_GPIOResetPin(u8 GPIO_PORT , u8 GPIO_Pin)
	{
		if(GPIO_PORT == PORTA)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOADATA &= ~(unsigned int) 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOADATA &= ~(unsigned int) 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOADATA &= ~(unsigned int) 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOADATA &= ~(unsigned int) 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOADATA &= ~(unsigned int) 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOADATA &= ~(unsigned int) 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOADATA &= ~(unsigned int) 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOADATA &= ~(unsigned int) 0x80 ;
			}
		}
		
		
		else if(GPIO_PORT == PORTB)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOBDATA &= ~(unsigned int) 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOBDATA &= ~(unsigned int) 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOBDATA &= ~(unsigned int) 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOBDATA &= ~(unsigned int) 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOBDATA &= ~(unsigned int) 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOBDATA &= ~(unsigned int) 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOBDATA &= ~(unsigned int) 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOBDATA &= ~(unsigned int) 0x80 ;
			}
		}
		
		
		else if(GPIO_PORT == PORTC)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOCDATA &= ~(unsigned int) 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOCDATA &= ~(unsigned int) 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOCDATA &= ~(unsigned int) 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOCDATA &= ~(unsigned int) 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOCDATA &= ~(unsigned int) 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOCDATA &= ~(unsigned int) 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOCDATA &= ~(unsigned int) 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOCDATA &= ~(unsigned int) 0x80 ;
			}
		}
		
		
		
		else if(GPIO_PORT == PORTD)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIODDATA &= ~(unsigned int) 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIODDATA &= ~(unsigned int) 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIODDATA &= ~(unsigned int) 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIODDATA &= ~(unsigned int) 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIODDATA &= ~(unsigned int) 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIODDATA &= ~(unsigned int) 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIODDATA &= ~(unsigned int) 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIODDATA &= ~(unsigned int) 0x80 ;
			}
		}
		
		
		
		
		else if(GPIO_PORT == PORTE)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOEDATA &= ~(unsigned int) 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOEDATA &= ~(unsigned int) 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOEDATA &= ~(unsigned int) 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOEDATA &= ~(unsigned int) 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOEDATA &= ~(unsigned int) 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOEDATA &= ~(unsigned int) 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOEDATA &= ~(unsigned int) 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOEDATA &= ~(unsigned int) 0x80 ;
			}
		}
		
		
		
		else if(GPIO_PORT == PORTF)
		{
			if(GPIO_Pin == PIN0)
			{
				GPIOFDATA &= ~(unsigned int) 0x01 ;
			}
			else if(GPIO_Pin == PIN1)
			{
				GPIOFDATA &= ~(unsigned int) 0x02 ;
			}
			else if(GPIO_Pin == PIN2)
			{
				GPIOFDATA &= ~(unsigned int) 0x04 ;
			}
			else if(GPIO_Pin == PIN3)
			{
				GPIOFDATA &= ~(unsigned int) 0x08 ;
			}
			else if(GPIO_Pin == PIN4)
			{
				GPIOFDATA &= ~(unsigned int) 0x10 ;
			}
			else if(GPIO_Pin == PIN5)
			{
				GPIOFDATA &= ~(unsigned int) 0x20 ;
			}
			else if(GPIO_Pin == PIN6)
			{
				GPIOFDATA &= ~(unsigned int) 0x40 ;
			}
			else if(GPIO_Pin == PIN7)
			{
				GPIOFDATA &= ~(unsigned int) 0x80 ;
			}
		}
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	