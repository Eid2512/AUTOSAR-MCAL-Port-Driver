 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H



/* Id for the company in the AUTOSAR */
#define PORT_VENDOR_ID    (10U)

/* PORT Module Id */
#define PORT_MODULE_ID    (120U)

/* PORT Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.3.1
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (3U)
#define PORT_AR_RELEASE_PATCH_VERSION   (1U)

/*
 * Macros for PORT Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and PORT Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* PORT Pre-Compile Configuration Header file */
#include "PORT_Cfg.h"

/* AUTOSAR Version checking between PORT_Cfg.h and PORT.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PORT_Cfg.h does not match the expected version"
#endif

/* Software Version checking between PORT_Cfg.h and PORT.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PORT_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"

/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
// service id that Initializes the Port Driver module.
#define PORT_INIT_SID                       0X00
// service id that Sets the port pin direction
#define PORT_SET_PIN_DIRECTION_SID          0X01
// service id that Refreshes port direction.
#define PORT_REFRESH_PORT_DIR_SID           0X02
// service id that Returns the version information of this module.
#define PORT_GET_VERSION_INFO_SID           0X03
// service id that Sets the port pin mode.
#define PORT_SET_PIN_MODE_SID               0X04


/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
//Invalid Port Pin ID requested
#define PORT_E_PARAM_PIN                    (uint8)0x0A

//Port Pin not configured as changeable
#define PORT_E_DIRECTION_UNCHANGEABLE       (uint8)0x0B

//API Port_Init service called with wrong parameter
#define PORT_E_PARAM_CONFIG                 (uint8)0x0C

//Port Pin Mode passed not valid
#define PORT_E_PARAM_INVALID_MODE           (uint8)0x0D

//API Port_SetPinMode service called when mode is unchangeable
#define PORT_E_MODE_UNCHANGEABLE            (uint8)0x0E

//API service called without module initialization
#define PORT_E_UNINIT                       (uint8)0x0F

//APIs called with a Null Pointer
#define PORT_E_PARAM_POINTER                (uint8)0x10





/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/


/*Data type for the symbolic name of a port pin.(type based on the microcontroller)*/
typedef uint8 Port_PinType;

/* Boolean type for indicating direction changeability */
typedef uint8 PortPinDirectionChangeableType;
/* Macros for PortPinDirectionChangeable */
#define PORT_PIN_DIR_CHANGEABLE    (TRUE)   /* Pin direction can be changed */
#define PORT_PIN_DIR_FIXED         (FALSE)  /* Pin direction cannot be changed */


/*Port pin mode from mode list for use with Port_Init() function.*/
typedef enum{
    PORT_PIN_MODE_ADC,
    PORT_PIN_MODE_CAN,
    PORT_PIN_MODE_DIO,
    PORT_PIN_MODE_DIO_GPT,
    PORT_PIN_MODE_DIO_WDG,
    PORT_PIN_MODE_FLEXRAY,
    PORT_PIN_MODE_ICU,
    PORT_PIN_MODE_LIN,
    PORT_PIN_MODE_MEM,
    PORT_PIN_MODE_PWM,
    PORT_PIN_MODE_SPI
}Port_PinInitialMode;
//Description: Different port pin modes. (type based on the microcontroller)
typedef uint8 Port_PinModeType;

/*Port Pin Level value from Port pin list.*/
typedef enum{
    PORT_PIN_LEVEL_HIGH,
    PORT_PIN_LEVEL_LOW
}PortPinLevelValue;



/* Boolean type for indicating mode changeability */
typedef uint8 PortPinModeChangeableType;
/* Macros for PortPinModeChangeable */
#define PORT_PIN_MODE_CHANGEABLE    (TRUE)   /* Pin mode can be changed */
#define PORT_PIN_MODE_FIXED         (FALSE)  /* Pin mode cannot be changed */


/* Description: Possible directions of a port pin.
 * The initial direction of the pin (IN or OUT). If the direction is not
 * changeable, the value configured here is fixed.
 * The direction must match the pin mode. E.g. a pin used for an ADC
 * must be configured to be an in port
 */
typedef enum
{
    PORT_PIN_IN,
    PORT_PIN_OUT
}Port_PinDirectionType;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;


/* Description: Structure to configure each individual PIN:
 *      1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *      2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 *      5. initial port pin value (HIGH, LOW)
 *      6. initial port pin mode
 *      7. pin direction changeable (true, false)
 *      8. pin mode changeable (TRUE, FALSE)
 */
typedef struct
{
    uint8 port_num;
    uint8 pin_num;
    Port_PinDirectionType direction;
    Port_InternalResistor resistor;
    uint8 initial_value;
    Port_PinInitialMode initial_mode;
    PortPinDirectionChangeableType pin_dir_changeable;
    PortPinModeChangeableType pin_mode_changeable;
}Port_ConfigPin;

/* Array of Port_ConfigPin */
typedef struct
{
    Port_ConfigPin Pin[PORT_CONFIGURED_PINS];
}Port_ConfigType;

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Post build structure used with Port_Init API */
extern const Port_ConfigType Port_PinConfiguration;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
#if 0
/************************************************************************************
* Service Name: Port_SetupGpioPin
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin configuration:
*              - Setup the pin as Digital GPIO pin
*              - Setup the direction of the GPIO pin
*              - Setup the internal resistor for i/p pin
************************************************************************************/
void Port_SetupGpioPin(const Port_ConfigType *ConfigPtr );
#endif


/************************************************************************************
* Service Name:             Port_Init
* Service ID[hex]:          0x00
* Sync/Async:               Synchronous
* Reentrancy:               Non Reentrant
* Parameters (in):          ConfigPtr - Pointer to configuration set.
* Parameters (inout):       None
* Parameters (out):         None
* Return value:             None
* Description:              Initializes the Port Driver module.
************************************************************************************/
void Port_Init( const Port_ConfigType* ConfigPtr );


/************************************************************************************
* Service Name:             Port_SetPinDirection
* Service ID[hex]:          0x01
* Sync/Async:               Synchronous
* Reentrancy:               Reentrant
* Parameters (in):          Pin       - Port Pin ID number
*                           Direction - Port Pin Direction
* Parameters (inout):       None
* Parameters (out):         None
* Return value:             None
* Description:              Sets the port pin direction
************************************************************************************/
void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction );



/************************************************************************************
* Service Name:             Port_RefreshPortDirection
* Service ID[hex]:          0x02
* Sync/Async:               Synchronous
* Reentrancy:               Non Reentrant
* Parameters (in):          None
* Parameters (inout):       None
* Parameters (out):         None
* Return value:             None
* Description:              Refreshes port direction.
************************************************************************************/
void Port_RefreshPortDirection(void);


/************************************************************************************
* Service Name:             Port_GetVersionInfo
* Service ID[hex]:          0x03
* Sync/Async:               Synchronous
* Reentrancy:               Reentrant
* Parameters (in):          None
* Parameters (inout):       None
* Parameters (out):         version-info --> Pointer to where to store the version information of this module.
* Return value:             None
* Description:              Returns the version information of this module.
************************************************************************************/
void Port_GetVersionInfo(Std_VersionInfoType* versioninfo);


/************************************************************************************
* Service Name:             Port_SetPinMode
* Service ID[hex]:          0x04
* Sync/Async:               Synchronous
* Reentrancy:               Reentrant
* Parameters (in):          Pin     - Port Pin ID number
*                           Mode    - New Port Pin mode to be set on port pin.
* Parameters (inout):       None
* Parameters (out):         None
* Return value:             None
* Description:              Sets the port pin mode.
************************************************************************************/
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);


#endif /* PORT_H */
