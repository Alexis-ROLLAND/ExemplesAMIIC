/**
 * @file    ExempleBP_main.c 
 * @author 	Alexis ROLLAND
 * @date	2024-01
 * @brief 	ExempleBP, main source file
 *  
 *
 */

#include "lib_appExempleBP.h"

/**
 * Insérer Ici les bits de configuration pour le MCU 						  
 * Copier / Coller depuis le fichier Config_Pic24.txt					  
 */
/*--------------------------------------------------------------------------*/
/* PIC24FJ128GA010															*/
/*--------------------------------------------------------------------------*/
#pragma config POSCMOD = HS         // Primary Oscillator Select (EC, XT, HS, NONE)
#pragma config OSCIOFNC = ON        // Primary Oscillator Output Function (ON, OFF)
#pragma config FCKSM = CSDCMD       // Clock Switching and Monitor (CSECME, CSECMD, CSDCMD)
#pragma config FNOSC = PRI          // Oscillator Select (FRC, FRCPLL, PRI, PRIPLL, SOSC, LPRC, FRCDIV)
#pragma config IESO = OFF           // Internal External Switch Over Mode (ON, OFF)
#pragma config WDTPS = PS256        // Watchdog Timer Postscaler (PS1, PS2, PS4, PS8,..., PS32768)
#pragma config FWPSA = PR32         // WDT Prescaler (PR32, PR128)
#pragma config WINDIS = ON          // Watchdog Timer Window (ON, OFF)
#pragma config FWDTEN = OFF         // Watchdog Timer Enable (ON, OFF)
#pragma config ICS = PGx2           // Comm Channel Select (PGx1, PGx2)
#pragma config BKBUG = OFF          // Background Debug (ON, OFF)
#pragma config GWRP = OFF           // General Code Segment Write Protect (ON, OFF)
#pragma config GCP = OFF            // General Code Segment Code Protect (ON, OFF)
#pragma config JTAGEN = OFF         // JTAG Port Enable (ON, OFF)
//----------------------------------------------------------------------------
/* Directives de compilation - Macros		*/


//------------------------------------------------------------------------------
/* Déclarations des variables globales 	*/
soft_flag_t evtBP = RESET;


//------------------------------------------------------------------------------
/* Programme Principal			*/
int main(void){
    Initialiser();		// Appel fonction d'initialisation
    while(1){
        // ... 
        if (evtBP == SET){
            TraiterActionBP();
            evtBP = RESET;
        }
        // ...
    }
}	
//------------------------------------------------------------------------------
void _ISR __attribute__((no_auto_psv)) _INT1Interrupt (void){
    evtBP = SET;                // Set Software Flag
    IFS1bits.INT1IF = 0;        // Reset interrupt flag / Acquittement Interruption
} /* _INT1Interrupt   */
//------------------------------------------------------------------------------



