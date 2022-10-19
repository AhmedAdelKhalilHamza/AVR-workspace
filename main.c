/*
 * main.c
 *
 *  Created on: Oct 16, 2022
 *      Author: EL MAHDY 01007778867
 */


#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>


void main(void)
{
	DDRA = 0xFF;

	while(1)
	{
		/*PORTA= 0b00000011;
		_delay_ms(1000);
		PORTA= 0b00001100;
		_delay_ms(1000);
		PORTA= 0b00110000;
		_delay_ms(1000);
		PORTA= 0b11000000;
		_delay_ms(1000);*/

		PORTA= 0b01010101;
		_delay_ms(1000);
		PORTA= 0b10101010;
		_delay_ms(1000);
	}
}

