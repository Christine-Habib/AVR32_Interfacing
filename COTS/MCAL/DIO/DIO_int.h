 /*************************************************************************/
 /*                                                                       */
 /* Author: Christine Habib                                               */
 /* Created on: Jul 22, 2023                                              */
 /* Description: DIO DRIVER                                               */
 /*                                                                       */
 /*************************************************************************/
#include "Std_types.h"
#include "Bit_Math.h"

#ifndef MCAL_DIO_DIO_INT_H_
#define MCAL_DIO_DIO_INT_H_

/************************************************************************/
/* Description: Definition for DIO HIGH and LOW                         */
#define DIO_u8_HIGH       1
#define DIO_u8_LOW        0

/***********************************************************************/
/* Description: Definition for DIO OUTPUT and INPUT					   */
#define DIO_u8_OUTPUT     1
#define DIO_u8_INPUT      0

/***********************************************************************/
/* Description: DIO PORTS Definition                                   */
#define DIO_u8_PORTA      0
#define DIO_u8_PORTB      1
#define DIO_u8_PORTC      2
#define DIO_u8_PORTD      3

/***********************************************************************/
/* Description : DIO PINS Definitions                                  */

#define DIO_u8_PIN_0      0
#define DIO_u8_PIN_1      1
#define DIO_u8_PIN_2      2
#define DIO_u8_PIN_3      3
#define DIO_u8_PIN_4      4
#define DIO_u8_PIN_5      5
#define DIO_u8_PIN_6      6
#define DIO_u8_PIN_7      7


/***********************************************************************/
/* Description : Prototype declaration                                 */
/***********************************************************************/

/* Description : Function to set PIN direction either INPUT or OUTPUT  */
void DIO_voidSetPinDirection(u8 PortId, u8 PinId, u8 Direction);

/* Description : Function to set PIN value either HIGH or LOW          */
void DIO_voidSetPinValue(u8 PortId, u8 PinId, u8 Value);

/* Description : Function to get PIN value either HIGH or LOW          */
u8 DIO_u8GetPinValue(u8 PortId, u8 PinId);

/* Description : Function to set PORT direction either INPUT or OUTPUT */
void DIO_voidSetPortDirection(u8 PortId, u8 Direction);

/* Description : Function to set PORT value either HIGH or LOW         */
void DIO_voidSetPortValue(u8 PortId, u8 Value);

#endif /* MCAL_DIO_DIO_INT_H_                                          */
