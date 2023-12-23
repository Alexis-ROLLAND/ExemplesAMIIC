/**
 * @file    lib_appExempleBP.c 
 * @author 	Alexis ROLLAND
 * @date	2024-01
 * @brief 	Source file for example (BP + ISR)
 *  
 *
 */

#include "lib_appExempleBP.h" 

/* Directives de compilation - Macros		*/


/* Déclarations des variables globales 	*/



/*	Implémentation du code */
//------------------------------------------------------------------------------
void Initialiser(void){
    //...
    BP_TRIS = 1;        // RE8-INT1 is configured as GPIO Input
    //...
    INTCON2bits.INT1EP = 0;     // Interrupt on positive edge
    IFS1bits.INT1IF = 0;        // Reset interrupt flag
    IEC1bits.INT1IE = 1;        // Enable INT1 interrupt
    IPC5bits.INT1IP = 4;        // INT1 priority is 4
    //...
}
//------------------------------------------------------------------------------
void   TraiterActionBP(void){
    // Whatever...
    return;
}
//------------------------------------------------------------------------------

