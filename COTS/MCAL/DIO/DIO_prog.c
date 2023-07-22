 /*************************************************************************/
 /*                                                                       */
 /* Author: Christine Habib                                               */
 /* Created on: Jul 22, 2023                                              */
 /* Description: DIO DRIVER                                               */
 /*                                                                       */
 /*************************************************************************/


#include "Std_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "DIO_priv.h"

/*Description: This function sets PORTS direction either OUTPUT or INPUT */
void DIO_voidSetPortDirection(u8 PortId, u8 Direction)
{
	if(DIO_u8_OUTPUT == Direction) /*check if output                     */
	{
		switch(PortId)             /*set PORT to output                  */
		{
			case DIO_u8_PORTA: DDRA = 0xff; break;
			case DIO_u8_PORTB: DDRB = 0xff; break;
			case DIO_u8_PORTC: DDRC = 0xff; break;
			case DIO_u8_PORTD: DDRD = 0xff; break;

		}
	}
	if(DIO_u8_INPUT == Direction) /*check if input                       */
		{
		switch(PortId)            /*set PORT to input                    */
		{
			case DIO_u8_PORTA: DDRA = 0x00; break;
			case DIO_u8_PORTB: DDRB = 0x00; break;
			case DIO_u8_PORTC: DDRC = 0x00; break;
			case DIO_u8_PORTD: DDRD = 0x00; break;

		}
		}
}

/* Description: This function sets PORTS value either HIGH or LOW       */
void DIO_voidSetPortValue(u8 PortId, u8 Value)
{
	switch(PortId)         /*set PORT to either high or low             */
	{
	case DIO_u8_PORTA: PORTA=Value; break;
	case DIO_u8_PORTB: PORTB=Value; break;
	case DIO_u8_PORTC: PORTC=Value; break;
	case DIO_u8_PORTD: PORTD=Value; break;
	}
}

/*Description: This function sets PINS direction either OUTPUT or INPUT */
void DIO_voidSetPinDirection(u8 PortId, u8 PinId, u8 Direction)
{
	/* check PORT and PIN ID */
	if(PortId <= DIO_u8_PORTD && PinId <= DIO_u8_PIN_7)
	{
		if(DIO_u8_OUTPUT == Direction) /*check if output                */
		{
			switch(PortId)             /*set PIN to output              */
			{
				case DIO_u8_PORTA: SET_BIT(DDRA,PinId); break;
				case DIO_u8_PORTB: SET_BIT(DDRB,PinId); break;
				case DIO_u8_PORTC: SET_BIT(DDRC,PinId); break;
				case DIO_u8_PORTD: SET_BIT(DDRD,PinId); break;
			}
		}
	}
	else if(DIO_u8_INPUT == Direction) /*check if input                 */
		{
			switch(PortId)             /*set PIN to input               */
			{
				case DIO_u8_PORTA: CLR_BIT(DDRA,PinId); break;
				case DIO_u8_PORTB: CLR_BIT(DDRB,PinId); break;
				case DIO_u8_PORTC: CLR_BIT(DDRC,PinId); break;
				case DIO_u8_PORTD: CLR_BIT(DDRD,PinId); break;
			}
		}
}

/* Description: This function sets PINS value either HIGH or LOW        */
void DIO_voidSetPinValue(u8 PortId, u8 PinId, u8 Value)
{
	/* check PORT and PIN ID */
	if(PortId <= DIO_u8_PORTD && PinId <= DIO_u8_PIN_7)
	{
		if(DIO_u8_HIGH == Value) /*check if high                        */
		{
			switch(PortId)       /*set PIN to high                      */
			{
				case DIO_u8_PORTA: SET_BIT(PORTA,PinId); break;
				case DIO_u8_PORTB: SET_BIT(PORTB,PinId); break;
				case DIO_u8_PORTC: SET_BIT(PORTC,PinId); break;
				case DIO_u8_PORTD: SET_BIT(PORTD,PinId); break;
			}
		}
		else if(DIO_u8_LOW == Value) /*check if low                      */
		{
			switch(PortId)           /*set PIN to low                    */
			{
				case DIO_u8_PORTA: CLR_BIT(PORTA,PinId); break;
				case DIO_u8_PORTB: CLR_BIT(PORTB,PinId); break;
				case DIO_u8_PORTC: CLR_BIT(PORTC,PinId); break;
				case DIO_u8_PORTD: CLR_BIT(PORTD,PinId); break;
			}
		}
	}
}

/* Description: This function gets PINSS value either HIGH or LOW        */
u8 DIO_u8GetPinValue(u8 PortId, u8 PinId)
{
	u8 PinValue;
	/* check PORT and PIN ID */
	if(PortId <= DIO_u8_PORTD && PinId <= DIO_u8_PIN_7)
		{
			switch(PortId)
			{
				case DIO_u8_PORTA: PinValue=GET_BIT(PINA,PinId); break;
				case DIO_u8_PORTB: PinValue=GET_BIT(PINB,PinId); break;
				case DIO_u8_PORTC: PinValue=GET_BIT(PINC,PinId); break;
				case DIO_u8_PORTD: PinValue=GET_BIT(PIND,PinId); break;
			}
		}
	return PinValue;
}
