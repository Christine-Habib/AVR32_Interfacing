 /*************************************************************************/
 /*                                                                       */
 /* Author: Christine Habib                                               */
 /* Created on: Jul 22, 2023                                              */
 /* Description: DIO DRIVER                                               */
 /*                                                                       */
 /*************************************************************************/

#ifndef MCAL_DIO_DIO_PRIV_H_
#define MCAL_DIO_DIO_PRIV_H_

/*          REGISTER ADDRESSES FOR PORT A          */
#define PORTA      *((volatile u8 *) 0x3B)
#define DDRA       *((volatile u8 *) 0x3A)
#define PINA       *((volatile u8 *) 0x39)

/*          REGISTER ADDRESSES FOR PORT B          */
#define PORTB      *((volatile u8 *) 0x38)
#define DDRB       *((volatile u8 *) 0x37)
#define PINB       *((volatile u8 *) 0x36)

/*          REGISTER ADDRESSES FOR PORT C          */
#define PORTC      *((volatile u8 *) 0x35)
#define DDRC       *((volatile u8 *) 0x34)
#define PINC       *((volatile u8 *) 0x33)

/*          REGISTER ADDRESSES FOR PORT D          */
#define PORTD      *((volatile u8 *) 0x32)
#define DDRD       *((volatile u8 *) 0x31)
#define PIND       *((volatile u8 *) 0x30)


#endif /* MCAL_DIO_DIO_PRIV_H_ */
