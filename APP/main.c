/*
 * main.c
 *
 *  Created on: Jan 29, 2021
 *      Author: Kishk
 *
 */

#include "../Services/STD_TYPES.h"
#include "../Services/BIT_MATHS.h"
#include "util/delay.h"
#include "../MCAL/01-DIO/DIO_interface.h"
#include "../MCAL/04- ADC/ADC_interface.h"
#include "../HAL/04- CLCD/CLCD_interface.h"



int main(void) {
	ADC_voidInit();
	CLCD_voidInit();
	u16 LOC_u16Result =0;
//	u8  LOC_u16Temp	=0;
	while (1) {
		CLCD_voidSetPosition(CLCD_ROW_1,CLCD_COL_1);
		CLCD_voidSendString((u8 *) "LDR:");
		LOC_u16Result = ((u32)ADC_u16GETChannelResult(ADC_ADC0_PORTA_PIN0)*5000)/1023;
		CLCD_voidSetPosition(CLCD_ROW_1,CLCD_COL_5);
		CLCD_voidSendString((u8 *) "    ");
		CLCD_voidSetPosition(CLCD_ROW_1,CLCD_COL_5);
		CLCD_voidSendNumber(LOC_u16Result);
		_delay_ms(300);
	}

}

