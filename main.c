/*
 * GccApplication001.c
 *
 * Created: 28/3/2019 8:46:16 AM
 * Author : Malin - Sri Lanka
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include "util/delay.h"

int main(void)
{
    DDRB=0b00000001;
	
    while (1) 
    {
		PORTB=0b00000001;
		_delay_ms(1000);
		PORTB=0b00000000;
		_delay_ms(1000);
		
		
    }
}

