/**
 * @file    lib_appExempleBO.h 
 * @author 	Alexis ROLLAND
 * @date	2024-01
 * @brief 	App header file for example file : BP and ISR 
 *  
 *
 */
#ifndef	__LIB_APP_EXEMPLEBP_H__
#define	__LIB_APP_EXEMPLEBP_H__

#ifndef FCY
#define FCY 4000000UL
#endif

#include <libpic30.h>
#include <xc.h>

/**
 * New custom type specialy designed for software flags
 * @attention : compile with -fshort-enums for optimize data size
 */ 
typedef enum {  RESET = 0,          /**< RESET value for a soft_flag_t variable   */
                SET = 1,            /**< SET value for a soft_flag_t variable   */ 
} soft_flag_t;    

//  RE8 is INT1 pin
#define     BP          PORTEbits.RE8
#define     BP_TRIS     TRISEbits.TRISE8

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
 void   TraiterActionBP(void);
 
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
 
 


#endif  /* __LIB_APP_EXEMPLEBP_H__ */



