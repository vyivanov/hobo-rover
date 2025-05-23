/**
  ******************************************************************************
  * @file     stm8s_conf.h
  * @author   MCD Application Team
  * @version  V2.0.0
  * @date     25-February-2011
  * @brief    This file is used to configure the Library.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM8S_CONF_H
#define __STM8S_CONF_H

#ifdef __cplusplus
  extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"

/* Uncomment the line below to enable peripheral header file inclusion */
#if defined(STM8S105) || defined(STM8S103) || defined(STM8S903) || defined (STM8AF626x)
#include "stm8s_adc1.h" 
#endif /* (STM8S105) ||(STM8S103) || (STM8S903) || STM8AF626x*/
#if defined(STM8S208) || defined(STM8S207) || defined (STM8AF52Ax) || defined (STM8AF62Ax)
 #include "stm8s_adc2.h"
#endif /* (STM8S208) || (STM8S207) || (STM8AF62Ax) || (STM8AF52Ax) */
#include "stm8s_awu.h"
#include "stm8s_beep.h"
#if defined (STM8S208) || defined (STM8AF52Ax)
 #include "stm8s_can.h"
#endif /* STM8S208 || STM8AF52Ax */
#include "stm8s_clk.h"
#include "stm8s_exti.h"
#include "stm8s_flash.h"
#include "stm8s_gpio.h"
#include "stm8s_i2c.h"
#include "stm8s_itc.h"
#include "stm8s_iwdg.h"
#include "stm8s_rst.h"
#include "stm8s_spi.h"
#include "stm8s_tim1.h"
#ifndef STM8S903
 #include "stm8s_tim2.h"
#endif /* STM8S903 */
#if defined(STM8S208) || defined(STM8S207) ||defined(STM8S105) || defined (STM8AF52Ax) ||\
    defined (STM8AF62Ax) || defined (STM8AF626x)
 #include "stm8s_tim3.h"
#endif /* (STM8S208) ||defined(STM8S207) ||defined(STM8S105) */ 
#ifndef STM8S903
 #include "stm8s_tim4.h"
#endif /* STM8S903 */
#ifdef STM8S903
 #include "stm8s_tim5.h"
 #include "stm8s_tim6.h"
#endif /* STM8S903 */
#if defined(STM8S208) ||defined(STM8S207) ||defined(STM8S103) ||defined(STM8S903) ||\
    defined (STM8AF52Ax) || defined (STM8AF62Ax)
 #include "stm8s_uart1.h"
#endif /* STM8S208 || STM8S207 || STM8S103 ||STM8S903 || STM8AF52Ax || STM8AF62Ax */
#if defined (STM8S105) || defined (STM8AF626x)
 #include "stm8s_uart2.h"
#endif /* STM8S105 || STM8AF626x */
#if defined(STM8S208) ||defined(STM8S207) || defined (STM8AF52Ax) || defined (STM8AF62Ax)
 #include "stm8s_uart3.h"
#endif /* STM8S208 || STM8S207 || STM8AF52Ax || STM8AF62Ax */ 
#include "stm8s_wwdg.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Uncomment the line below to expanse the "assert_param" macro in the
   Standard Peripheral Library drivers code */
/* #define USE_FULL_ASSERT    (1) */

/* Exported macro ------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT

/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param expr: If expr is false, it calls assert_failed function
  *   which reports the name of the source file and the source
  *   line number of the call that failed.
  *   If expr is true, it returns no value.
  * @retval : None
  */
#define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
void assert_failed(uint8_t* file, uint32_t line);
#else
#define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */

#ifdef __cplusplus
}
#endif

#endif /* __STM8S_CONF_H */

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
