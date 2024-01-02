/**
 * @file    .h 
 * @author 	Alexis ROLLAND
 * @date	01/2024
 * @brief 	
 *  
 *
 */
#ifndef	__LIB_APP_EXEMPLE_CAPTEUR_TOR_H__
#define	__LIB_APP_EXEMPLE_CAPTEUR_TOR_H__

#ifndef FCY
#define FCY 4000000UL
#endif

#include <libpic30.h>
#include <xc.h>

typedef enum {  LOW_LEVEL = 0, 
                HIGH_LEVEL = 1
} EtatCapteur_t;

#define VCAPT       PORTDbits.RD6           // BP S3
#define VCAPT_TRIS  TRISDbits.TRISD6     

#define VAL_T_READ_CAPT_100MS   50000       // 50000 avec div par 8 

/**
 * @brief Global init function/task 
 * 
 * @param	None
 * 
 * @return  Nothing 
 *
 */
void Initialiser(void);

/**
 * @brief  
 * 
 * @param	
 * 
 * @return   
 *
 */
 
 
 /**
 * @brief  
 * 
 * @param	
 * 
 * @return   
 *
 */
 
 /**
 * @brief  
 * 
 * @param	
 * 
 * @return   
 *
 */
 
 


#endif



