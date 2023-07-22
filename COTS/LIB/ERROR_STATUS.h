/*
 * ERROR_STATUS.h
 *
 *  Created on: Jul 22, 2023
 *      Author: Christine
 */

#ifndef LIB_ERROR_STATUS_H_
#define LIB_ERROR_STATUS_H_

typedef enum Error
{

	ES_OK,
	ES_NOK,
	ES_OUT_OF_RANGR,
	ES_NULL_POINTER

}ErrorStatus;

#define void (*pf)(void)


#endif /* LIB_ERROR_STATUS_H_ */
