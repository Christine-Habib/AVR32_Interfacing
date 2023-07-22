 /*************************************************************************/
 /*                                                                       */
 /* Author: Christine Habib                                               */
 /* Created on: Jul 22, 2023                                              */
 /* Description: APPto turn ON an LED and a buzzer using DIO              */
 /*                                                                       */
 /*************************************************************************/


#include "Std_types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "DIO_priv.h"

void LED()
{
	/* Set LED PIN to OUTPUT and HIGH                                     */
	DIO_voidSetPinDirection(DIO_u8_PORTA, DIO_u8_PIN_5, DIO_u8_OUTPUT);
	DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN_5,DIO_u8_HIGH);

	/* Set Buzzer PIN to OUTPUT and HIGH                                  */
	DIO_voidSetPinDirection(DIO_u8_PORTC, DIO_u8_PIN_6, DIO_u8_OUTPUT);
	DIO_voidSetPinValue(DIO_u8_PORTC, DIO_u8_PIN_6,DIO_u8_HIGH);
}
