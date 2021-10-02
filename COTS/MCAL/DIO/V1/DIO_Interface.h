//Header Gard
#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_


void DIO_vidSetPinDirection (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);

void DIO_vidSetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);

u8 DIO_u8GetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin);

void DIO_vidTogglePinValue (u8 Copy_u8Port, u8 Copy_u8Pin);

void DIO_vidSetPortDirections (u8 Copy_u8Port, u8 Copy_u8Directions);

void DIO_vidSetPortValues (u8 Copy_u8Port, u8 Copy_u8Values);


#define PORTA 	'A'
#define PORTB 	'B'
#define PORTC 	'C'
#define PORTD 	'D'

#define PIN0 	0
#define PIN1	1
#define PIN2 	2
#define PIN3 	3
#define PIN4 	4
#define PIN5 	5
#define PIN6 	6
#define PIN7 	7

#define INPUT	0
#define OUTPUT	1

#define HIGH 	1
#define LOW 	0


#endif
