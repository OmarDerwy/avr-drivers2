/*****************************************************************************************************/
/*	Author : Abdelrahman Belkasy ,Omar Derwy	******************************************************/
/*	Date : 21/2/2020	******************************************************************************/
/*	Disc : STANDERD DATA TYPES LIB FILE **************************************************************/
/*****************************************************************************************************/

// Header Gard
#ifndef _STD_TYPES_H_
#define _STD_TYPES_H_

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long  int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long  int s32;

typedef float  f32;
typedef double f64;

typedef enum error_state
{
	NOT_OK,
	OK
}error_state;

#define NULL 0

#endif
