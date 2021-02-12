/*
 * File:   main.c
 * Author: 19179166
 *
 * Created on 12 de Fevereiro de 2021, 15:51
 */


#include <xc.h>
#include "config.h"

void main(void) 
{
    TRISDbits.TRISD7= 0;
            
    while(1)
    {
        PORTDbits.RD7= 1;
        __delay_ms(500);
        PORTDbits.RD7= 1;
        
    }
    
}
