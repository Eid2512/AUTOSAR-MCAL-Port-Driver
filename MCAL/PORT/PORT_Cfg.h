/*
 * PORT_Cfg.h
 *
 *      Author: Eid
 */

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/* ============================= */
/*  Module: Port Configuration   */
/* ============================= */

/*
 * Software Version: 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version: 4.3.1
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION      (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION      (3U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION      (1U)

/* ============================= */
/*       Pre-Compile Options     */
/* ============================= */

/* Enable Development Error Detection */
#define PORT_DEV_ERROR_DETECT               (STD_ON)

/* Enable Version Info API */
#define PORT_VERSION_INFO_API               (STD_ON)

/* Enable API to Set Pin Direction */
#define PORT_SET_PIN_DIRECTION_API          (STD_ON)

/* Enable API to Set Pin Mode */
#define PORT_SET_PIN_MODE_API               (STD_ON)

/* ============================= */
/*        MCU-Specific Ports     */
/* ============================= */

/* Number of Configured Pins */
#define PORT_CONFIGURED_PINS                (43U)

/* Definition of Available Tiva-C Ports */
#define PORT_PortA                  (0U)
#define PORT_PortB                  (1U)
#define PORT_PortC                  (2U)
#define PORT_PortD                  (3U)
#define PORT_PortE                  (4U)
#define PORT_PortF                  (5U)

/* Definition of Pins (0-7 per Port) */
#define PORT_Pin0                   (0U)
#define PORT_Pin1                   (1U)
#define PORT_Pin2                   (2U)
#define PORT_Pin3                   (3U)
#define PORT_Pin4                   (4U)
#define PORT_Pin5                   (5U)
#define PORT_Pin6                   (6U)
#define PORT_Pin7                   (7U)

/* ============================= */
/*      Version Compatibility    */
/* ============================= */

#if ((PORT_CFG_SW_MAJOR_VERSION != 1U) || \
     (PORT_CFG_SW_MINOR_VERSION != 0U) || \
     (PORT_CFG_SW_PATCH_VERSION != 0U))
#error "Software version mismatch in Port_Cfg.h"
#endif

#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != 4U) || \
     (PORT_CFG_AR_RELEASE_MINOR_VERSION != 3U) || \
     (PORT_CFG_AR_RELEASE_PATCH_VERSION != 1U))
#error "AUTOSAR version mismatch in Port_Cfg.h"
#endif

#endif /* PORT_CFG_H_ */



