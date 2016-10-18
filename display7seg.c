#include "display7seg.h"

void on_number(short number){
    
    switch (number){
        case 0: 
        A_ON; B_ON; C_ON; D_ON; E_ON; F_ON; G_OFF;
        break;
        
        case 1: 
        A_OFF; B_ON; C_ON; D_OFF; E_OFF; F_OFF; G_OFF;
        break;
        
        case 2: 
        A_ON; B_ON; C_OFF; D_ON; E_ON; F_OFF; G_ON;
        break;
        
        case 3: 
        A_ON; B_ON; C_ON; D_ON; E_OFF; F_OFF; G_ON;
        break;
        
        case 4: 
        A_OFF; B_ON; C_ON; D_OFF; E_OFF; F_ON; G_ON;
        break;
        
        case 5: 
        A_ON; B_OFF; C_ON; D_ON; E_OFF; F_ON; G_ON;
        break;
        
        case 6: 
        A_ON; B_OFF; C_ON; D_ON; E_ON; F_ON; G_ON;
        break;
        
        case 7: 
        A_ON; B_ON; C_ON; D_OFF; E_OFF; F_OFF; G_OFF;
        break;
        
        case 8: 
        A_ON; B_ON; C_ON; D_ON; E_ON; F_ON; G_ON;
        break;
        
        case 9: 
        A_ON; B_ON; C_ON; D_ON; E_OFF; F_ON; G_ON;
        break;
    }
}   

void clear_Segment(){
    A_OFF;
    B_OFF;
    C_OFF;
    D_OFF;
    E_OFF;
    F_OFF;
    G_OFF;
}

void on_numbers(short number, bool uni){
    on_number(number);
    
    if(uni){
        UNI_ON;
        DEC_OFF;
    }else{
        UNI_OFF;
        DEC_ON;
    }
}

void write(short number){
    int time = 0;
    short dec = number/10;
    short uni = number - dec*10;
    clear_Segment();
    while(time < 500){   
        on_numbers(uni, 1);
        __delay_ms(10);
        UNI_OFF;
        on_numbers(dec, 0);
        //DEC_ON;
        __delay_ms(10);
        DEC_OFF;
        time = time + 20;
    }
}