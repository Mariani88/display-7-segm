#include "ADconversor.h"

float calculate_temperature(int voltage){
    return 0.588 * voltage - 50;
}

int read_temperature(){
    ADCON0bits.ADON = 1; //start conversor
    ADCON0bits.GO = 1;
    int voltage = 0;  
    
    while(ADCON0bits.GO){
        __delay_ms(10);
        voltage = (int)ADRESH*1000;
        ADCON0bits.GO = voltage == 0;
    }
        ADCON0bits.ADON = 0; //shutdown conversor
   
    return calculate_temperature(voltage);  //SACAR EL 5
}
