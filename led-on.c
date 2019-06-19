/*
 * File:   led-on.c
 * Author: jason
 *
 * Created on June 18, 2019, 4:26 PM
 */


#include <xc.h>
#include "led-on.h"

void delay_ms(int limit){
    for(int i = 1; i <= limit; i++){
        __delay_ms(1);
    }
}
void main(void) {
    
    TRISB0 = 0;
    int delay = 20;
    
    while(1){
        RB0 = 1;
        delay_ms(delay);
        RB0 = 0;
        delay_ms(delay);
    }
    
    
    return;
}
