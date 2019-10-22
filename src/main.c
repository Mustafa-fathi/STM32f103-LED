/*
 * main.c
 *
 *  Created on: Aug 26, 2018
 *      Author: Hampota
 */
#include "LSTD_TYPES.h"
#include "MDIO_interface.h"
#include "MRCC_interface.h"

#include "MDIO_private.h"

u8  button;
void main(void)
{
	MRCC_Initialize();
	MRCC_EnableClock(BUS_ABP2,MDIO_PORTA);
	MDIO_Initialize();
	//button = GPIOA -> ODR & (1<<0) ;

	while(1)
	{

		button = GPIOA -> IDR & 0x1 ;


		if (button % 2 != 0)
		{
	           MDIO_SetPinValue(MDIO_PORTA,1,MDIO_HIGH);
		}


		else
		{
			 MDIO_SetPinValue(MDIO_PORTA,1,MDIO_LOW);

		}


		/*

		for (u8 i =0 ; i<200 ;i++)
		{
			for (u8 i=0 ; i<200 ; i++)
			{

				MDIO_SetPinValue(MDIO_PORTA,1,MDIO_HIGH);
			}
		}


		for (u8 i =0 ; i<200 ;i++)
		{
			for (u8 i=0 ; i<200 ; i++)
			{

				MDIO_SetPinValue(MDIO_PORTA,1,MDIO_LOW);
			}
		}
*/

}

}
