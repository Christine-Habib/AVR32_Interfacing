/*
 * Std_types.h
 *
 *  Created on: Jul 22, 2023
 *      Author: Christine
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef long double f96;

/******************************************************/
/*pointer to function=>for declaration pf x = & fun();*/
/******************************************************/

typedef void(*pf)(void);


#endif /* LIB_STD_TYPES_H_ */