#pragma once
/******************************************************************************/
/* File   : WdgIf.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgWdgIf.hpp"
#include "WdgIf_core.hpp"
#include "infWdgIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_WdgIf:
      INTERFACES_EXPORTED_WDGIF
      public abstract_module
   ,  public class_WdgIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, WDGIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, WDGIF_CONFIG_DATA, WDGIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, WDGIF_CODE) DeInitFunction (void);
      FUNC(void, WDGIF_CODE) MainFunction   (void);
      WDGIF_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_WdgIf, WDGIF_VAR) WdgIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

