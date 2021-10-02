#include "../../../LIB/STD_TYPES.h"
#include "../../../LIB/BIT_MATH.h"
#include "DIO_Private.h"

/**********************************************************************************************/
void DIO_vidSetPinDirection (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction)
{
    if (OUTPUT == Copy_u8Direction) {
        switch (Copy_u8Port)
        {
            case 'A' : SET_BIT(DDRA,Copy_u8Pin);		break;
            case 'B' : SET_BIT(DDRB,Copy_u8Pin);		break;
            case 'C' : SET_BIT(DDRC,Copy_u8Pin);		break;
            case 'D' : SET_BIT(DDRD,Copy_u8Pin);		break;
        }
    }
    else if (INPUT == Copy_u8Direction) {
        switch (Copy_u8Port)
        {
            case 'A' : CLR_BIT(DDRA,Copy_u8Pin); 		break;
            case 'B' : CLR_BIT(DDRB,Copy_u8Pin); 		break;
            case 'C' : CLR_BIT(DDRC,Copy_u8Pin); 		break;
            case 'D' : CLR_BIT(DDRD,Copy_u8Pin); 		break;
        }
    }
}
/**********************************************************************************************/
void DIO_vidSetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value)
{
    if (HIGH == Copy_u8Value)
    {
        switch (Copy_u8Port)
        {
            case 'A' : SET_BIT(PORTA,Copy_u8Pin);		break;
            case 'B' : SET_BIT(PORTB,Copy_u8Pin);		break;
            case 'C' : SET_BIT(PORTC,Copy_u8Pin);		break;
            case 'D' : SET_BIT(PORTD,Copy_u8Pin);		break;
        }
    }
    else if (LOW == Copy_u8Value)
    {
        switch (Copy_u8Port)
        {
            case 'A' : CLR_BIT(PORTA,Copy_u8Pin);		break;
            case 'B' : CLR_BIT(PORTB,Copy_u8Pin);		break;
            case 'C' : CLR_BIT(PORTC,Copy_u8Pin);		break;
            case 'D' : CLR_BIT(PORTD,Copy_u8Pin);		break;
        }
    }
}

/**********************************************************************************************/
u8 DIO_u8GetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin)
{
    switch (Copy_u8Port)
    {
        case 'A' : return GET_BIT(PINA,Copy_u8Pin);		break;
        case 'B' : return GET_BIT(PINB,Copy_u8Pin);		break;
        case 'C' : return GET_BIT(PINC,Copy_u8Pin);		break;
        case 'D' : return GET_BIT(PIND,Copy_u8Pin);		break;
    }
    return 0;
}

/**********************************************************************************************/
void DIO_vidTogglePinValue (u8 Copy_u8Port, u8 Copy_u8Pin)
{
    switch (Copy_u8Port)
    {
        case 'A' : TOG_BIT(PORTA,Copy_u8Pin);		break;
        case 'B' : TOG_BIT(PORTB,Copy_u8Pin);		break;
        case 'C' : TOG_BIT(PORTC,Copy_u8Pin);		break;
        case 'D' : TOG_BIT(PORTD,Copy_u8Pin);		break;
    }
}

/**********************************************************************************************/
void DIO_vidSetPortDirections (u8 Copy_u8Port, u8 Copy_u8Directions)
{
    switch (Copy_u8Port)
    {
        case 'A' : DDRA = Copy_u8Directions;			break;
        case 'B' : DDRB = Copy_u8Directions;			break;
        case 'C' : DDRC = Copy_u8Directions;			break;
        case 'D' : DDRD = Copy_u8Directions;			break;
    }
}

/**********************************************************************************************/
void DIO_vidSetPortValues (u8 Copy_u8Port, u8 Copy_u8Values)
{
    switch (Copy_u8Port)
    {
        case 'A' : PORTA = Copy_u8Values;		break;
        case 'B' : PORTB = Copy_u8Values;		break;
        case 'C' : PORTC = Copy_u8Values;		break;
        case 'D' : PORTD = Copy_u8Values;		break;
    }
}

/**********************************************************************************************/