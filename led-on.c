/*
 * File:   led-on.c
 * Author: jason
 *
 * Created on June 18, 2019, 4:26 PM
 */


#include <xc.h>

void main(void) {
    
    TRISB0 = 0;
    RB0 = 1;
    
    return;
}
