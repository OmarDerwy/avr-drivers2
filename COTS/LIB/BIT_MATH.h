/*****************************************************************************************************/
/*	Author : Abdelrahman Belkasy ,Omar Derwy	******************************************************/
/*	Date : 21/2/2020	******************************************************************************/
/*	Disc : BIT MATH MACRO FUNCTIONS LIB FILE *********************************************************/
/*****************************************************************************************************/
#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(VAR,BITNO) VAR |=  (1 << BITNO)
#define CLR_BIT(VAR,BITNO) VAR &= ~(1 << BITNO)
#define TOG_BIT(VAR,BITNO) VAR ^=  (1 << BITNO)
#define GET_BIT(VAR,BITNO) ((VAR >> BITNO) & 0x01)


#endif
