/*** H file header ****************************************************/

#ifndef EXAMPLE_H_
#define EXAMPLE_H_

/*** Macros ************************************************ Macros ***/

/*** Defines ********************************************** Defines ***/

//! Documentation of the global define
#define globaldefine 0

/*** Types ************************************************** Types ***/

//! Documentation of the global unsigned char type definition.
typedef unsigned char uint8_t;

//! Documentation of the global unsigned int type definition.
typedef unsigned int uint16_t;

//! Documentation of the global structure type definition.
typedef struct
{
   //! Documentation of the first structure element.
   uint8_t globalstructurevariable1;
   //! Documentation of the second structure element.
   uint16_t globalstructurevariable2;
} globalstructuretypedef;

//! Documentation of the global enumeration type definition.
typedef enum
{
   //! Documentation of the first enumeration constant.
   globalenumerationconstant0 = 0,
   //! Documentation of the second enumeration constant.
   globalenumerationconstant1 = 1
} globalenumerationtypedef;

/*** Constants ****************************************** Constants ***/

//! Documentation of the global constant.
const globalconstant = 0;

/*** Variables ****************************************** Variables ***/

//! Documentation of the global structure.
static globalstructuretypedef globalstructure;

//! Documentation of the global enumeration.
static globalenumerationtypedef globalenumeration;

/*** Global functions **************************** Global functions ***/

/**********************************************************************/
/*!
@brief      Documentation of the global function.
@param[in]  inputparameter Documentation of the input parameter.
@param[out] outputparameter Documentation of the output parameter.
@retval     returnvalue Documentation of the return value.
*/
/**********************************************************************/
uint8_t globalfunction (uint8_t inputparameter, uint16_t* outputparameter);

/*** C file footer ****************************************************/

#endif
