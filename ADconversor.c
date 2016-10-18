#include "ADconversor.h"

float calculate_temperature(short voltage){
    float temperature =  0.588 * (float)voltage - 50;
    
    if(temperature < 0){
        return 0;
    }
    
    return temperature;
}

short read_temperature(){
    ADCON0bits.ADON = 1; //start conversor
    ADCON0bits.GO = 1;
    short voltage = -1;  
    
    while(ADCON0bits.GO){
        __delay_ms(1);
        voltage = (short)(ADRESH);
        //__delay_ms(10);
        ADCON0bits.GO = voltage < 0;
    }
        ADCON0bits.ADON = 0; //shutdown conversor
   
    return (short)calculate_temperature(voltage); 
}
