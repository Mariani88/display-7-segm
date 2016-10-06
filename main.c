
#include "display7seg.h"
#include "head.h"



//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
/// Funcion Caratula
/// Display presentation day hour
/// variable lecture diasem, anio, dia, hora, etc
//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[

    void caratula(void)
    {
        //lcd_comand(0b00001100);             //Enciende display sin cursor y sin blink  
        //lcd_gotoxy(1,1);        
        //lcd_putrs("UNIMIC  TECLADO ");
        //sprintf(buffer2,"%02u/%02u/%02u",dia,mes,anio);
        //lcd_gotoxy(9,1);
        //lcd_putrs(buffer2);
        //sprintf(buffer2,"%01u",key);
        //lcd_gotoxy(1,2);
        //lcd_putrs(buffer2);
     
    }

//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
/// Funcion Setup
///
///
//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[

    void Setup(void)
    {
    OSCTUNEbits.INTSRC=1;       //setea el oscilador de 32768 para el RTC
    OSCTUNEbits.PLLEN=0;        //desactiva PLL
    OSCCONbits.IRCF0=1;         //selecciona el clock en 8MHz
    OSCCONbits.IRCF1=1;
    OSCCONbits.IRCF2=1;
    OSCCONbits.SCS0=0;          //oscilator INTRC
    OSCCONbits.SCS1=0;
    TRISA = 0b11110000;
    TRISB = 0;
    TRISC = 0b0110111;
    //TRISAbits.TRISA0=1;
    //TRISBbits.TRISB0=0;
    //TRISCbits.TRISC0=0;
    ANCON0=0b11111111;          // Config AN7 to AN0 Digital Ports
    //ANCON1=0b10010111;          // Config AN11 Analog Port
    ANCON1=0b11111111;          // Config AN12 to AN8 Digital Ports
    ADCON0=0b00101101;          // Control AN11 Analog Port
    ADCON1=0b00010000;          // Config Analog Port
    RTCCFGbits.RTCEN=1;
    RTCCFGbits.RTCWREN=1;
    T1CONbits.T1OSCEN=1;
    Write_RTC();
    lcd_init();
    //lcd_comand(0b00001100);     //Display=on / Cursor=off / Blink=off
    LED_2_On;
 //   LED_3_On;
    }
/*------------------------------------------------------------------------------
********************************************************************************
Funcion main
Funcion principal del programa
********************************************************************************
--------------------------------------------------------------------------------*/ 
void _delay_s(int millis){
    short it = millis/100;
    short index = 1;
    
    for(index = 1; index <= it; index++){
        __delay_ms(98);
    }
}

    
int main(void){
Setup();
caratula();

short count = 0;




while(1){
    
    
    
    on_numbers(count);
    _delay_s(1000);
    count++;
    
    if ( count == 10) count = 0;
    
   // __delay_ms(98);
}    
       
return 0;
}