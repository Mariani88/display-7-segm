/*********************************************************************
 *
 *                Unimic XC8  Version 1.1   10 September 2015
 *
 *********************************************************************
 * FileName:        unmc_config_01.h
 * Dependencies:
 * Processor:       PIC18F26J50
 * Compiler:        XC8 1.34
 * Company:         Microchip Technology, Inc.
 *
 *********************************************************************/
#ifndef INOUT2_H
#define	INOUT2_H
//char key = 18;         //variable key

//
///** L E D **********************************************************/

//#define LED_1           LATBbits.LATB2
#define LED_2           LATBbits.LATB1
#define LED_3           LATBbits.LATB0

//#define LED_1_On        LED_1 = 1;
#define LED_2_On        LED_2 = 1;
#define LED_3_On        LED_3 = 1;

//#define LED_1_Off       LED_1 = 0;
#define LED_2_Off       LED_2 = 0;
#define LED_3_Off       LED_3 = 0;

//#define mLED_1_Toggle   LED_1 = !LED_1;
#define LED_2_Toggle    LED_2 = !LED_2;
#define LED_3_Toggle    LED_3 = !LED_3;
//
///** S W I T C H *****************************************************/
#define switch1         PORTCbits.RC4
#define switch2         PORTCbits.RC5

///** KEYBOARD *****************************************************/
#define row1            LATAbits.LATA0
#define row2            LATAbits.LATA1
#define row3            LATAbits.LATA2
#define row4            LATAbits.LATA3
#define column1         PORTAbits.RA5
#define column2         PORTAbits.RA7
#define column3         PORTAbits.RA6
#define column4         PORTCbits.RC2

/********************************************************************/
//display 7 seg
#define A           PORTBbits.RB7
#define B           PORTBbits.RB6
#define C           PORTBbits.RB5
#define D           PORTBbits.RB4
#define E           PORTBbits.RB3
#define F           PORTBbits.RB2
#define G           PORTBbits.RB1

#define A_OFF       A = 0
#define B_OFF       B = 0
#define C_OFF       C = 0
#define D_OFF       D = 0
#define E_OFF       E = 0
#define F_OFF       F = 0
#define G_OFF       G = 0
    
#define A_ON       A = 1
#define B_ON       B = 1
#define C_ON       C = 1
#define D_ON       D = 1
#define E_ON       E = 1
#define F_ON       F = 1
#define G_ON       G = 1

#define DEC        PORTBbits.RB0
#define UNI        PORTCbits.RC7

#define DEC_OFF    DEC = 1
#define UNI_OFF    UNI = 1

#define DEC_ON     DEC = 0
#define UNI_ON     UNI = 0
#endif