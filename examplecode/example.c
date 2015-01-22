/*** C file header ****************************************************/

/*** Includes ******************************************** Includes ***/
#include "example.h"

/*** Macros ************************************************ Macros ***/

/*** Defines ********************************************** Defines ***/

//! Documentation of the local define
#define localdefine 0

/*** Types ************************************************** Types ***/

//! Documentation of the local structure type definition.
typedef struct
{
   //! Documentation of the first structure element.
   uint8_t localstructurevariable1;
   //! Documentation of the second structure element.
   uint16_t localstructurevariable2;
} localstructuretypedef;

//! Documentation of the local enumeration type definition.
typedef enum
{
   //! Documentation of the first enumeration constant.
   localenumerationconstant0 = 0,
   //! Documentation of the second enumeration constant.
   localenumerationconstant1 = 1
} localenumerationtypedef;

/*** Constants ****************************************** Constants ***/

//! Documentation of the local constant.
const localconstant = 0;

/*** Variables ****************************************** Variables ***/

//! Documentation of the local structure.
static localstructuretypedef localstructure;

//! Documentation of the local enumeration.
static localenumerationtypedef localenumeration;

/*** Local functions ****************************** Local functions ***/

/**********************************************************************/
/*!
@brief      Documentation of the local function.
@param[in]  inputparameter Documentation of the input parameter.
@param[out] outputparameter Documentation of the output parameter.
@retval     returnvalue Documentation of the return value.
*/
/**********************************************************************/
static uint8_t localfunction (uint8_t inputparameter, uint16_t* outputparameter);

/*** Global functions **************************** Global functions ***/

uint8_t globalfunction (uint8_t inputparameter, uint16_t* outputparameter);

/*** C file footer ****************************************************/
