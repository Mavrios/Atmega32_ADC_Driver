/*
 * ADC_private.h
 *
 *  Created on: Mar 19, 2021
 *      Author: Kishk
 */

#ifndef MCAL_04__ADC_ADC_PRIVATE_H_
#define MCAL_04__ADC_ADC_PRIVATE_H_


#define ADCSRA   (* (volatile u8 *) (0x26))
#define ADMUX    (* (volatile u8 *) (0x27))
#define ADCH	 (* (volatile u8 *) (0x25))
#define ADCL	 (* (volatile u8 *) (0x24))
#define SFIOR	 (* (volatile u8 *) (0x30))


#define REFS0	6
#define REFS1	7
#define ADLAR	5
#define MUX0	0
#define MUX1	1
#define MUX2	2
#define MUX3	3
#define MUX4	4

#define ADPS0	0
#define ADPS1	1
#define ADPS2	2
#define ADIE	3
#define ADIF	4
#define ADATE	5
#define ADSC	6
#define ADEN	7

#define ADTS0	5
#define ADTS1	6
#define ADTS2	7



#endif /* MCAL_04__ADC_ADC_PRIVATE_H_ */
