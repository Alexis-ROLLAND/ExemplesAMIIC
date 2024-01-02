/**
 * @file    .c 
 * @author 	Alexis ROLLAND
 * @date	01-2024
 * @brief 	
 *  
 *
 */


#include "lib_ExempleCapteurTOR.h" // Inclusion du fichier .h "Applicatif" renommé

/* Directives de compilation - Macros		*/


/* Déclarations des variables globales 	*/



/*	Implémentation du code */
void Initialiser(void)
{
    //...
    VCAPT_TRIS = 1;     // VCAPT GPIO as input
    
    PR1 = VAL_T_READ_CAPT_100MS;    //  Timer Period = 100ms
    T1CON = 0x0010;     // Timer mode, div by 8, Timer NOT started
    
    IFS0bits.T1IF = 0;  //  Reset Timer interrupt flag (safety))
    IEC0bits.T1IE = 1;  //  Enable Timer interrupt
    IPC0bits.T1IP = 4;  //  Set Timer inerrupt priority
    
    T1CONbits.TON = 1;  // Start Timer
    //...
}

