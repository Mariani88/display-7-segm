#include "display7seg.h"

void clear_Segment(){
    A_OFF;
    B_OFF;
    C_OFF;
    D_OFF;
    E_OFF;
    F_OFF;
    G_OFF;
}

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

void on_numbers(short uni){
    UNI_ON;
    DEC_OFF;
    on_number(uni);
}