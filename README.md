# AUTOSAR Classic MCAL Port Driver

Implementation of an **AUTOSAR Classic MCAL Port Driver** in Embedded C for the **TM4C123GH6PM (Tiva-C)** microcontroller.

The project focuses on configurable MCU pin initialization, runtime pin direction and mode control, register-level GPIO configuration, and Development Error Tracer (DET) integration following AUTOSAR-style layered software architecture.

## Project Overview

The Port Driver belongs to the **Microcontroller Abstraction Layer (MCAL)** and provides an abstraction between higher software layers and the MCU-specific GPIO hardware.

**Target MCU:** TM4C123GH6PM
**Architecture:** ARM Cortex-M4F
**Language:** C
**AUTOSAR Release:** 4.3.1
**Development Environment:** Code Composer Studio

## Implemented APIs

| API                           | Purpose                                                     |
| ----------------------------- | ----------------------------------------------------------- |
| `Port_Init()`                 | Initializes configured MCU pins                             |
| `Port_SetPinDirection()`      | Changes the direction of a runtime-changeable pin           |
| `Port_RefreshPortDirection()` | Restores configured directions for non-changeable pins      |
| `Port_GetVersionInfo()`       | Returns Port Driver module and software version information |
| `Port_SetPinMode()`           | Changes the operating mode of a runtime-changeable pin      |

## Configuration

The Port Driver uses configuration structures to define properties for each configured pin, including:

* Port and pin number
* Initial direction
* Initial level
* Pin operating mode
* Internal pull-up/pull-down configuration
* Runtime direction changeability
* Runtime mode changeability

The current configuration contains **43 pins across GPIO Ports A–F**.

Pre-compile configuration options are provided for:

* Development Error Detection
* Version Information API
* Runtime Pin Direction API
* Runtime Pin Mode API

## Development Error Handling

DET-based development error checking is included for conditions such as:

* API calls before Port Driver initialization
* Invalid pin identifiers
* Invalid pin modes
* Runtime changes requested for non-changeable pins
* Invalid or null configuration pointers

## Software Architecture

```text
Higher Software Layers
          │
          ▼
     AUTOSAR MCAL
          │
      Port Driver
          │
          ▼
 TM4C123 GPIO Hardware
```

The complete course project also contains supporting modules under the API, ECUAL, MCAL, and Service layers. The **Port Driver is the primary module implemented and demonstrated by this repository**.

## Port Driver Structure

```text
MCAL/PORT/
├── Port.c
├── Port.h
├── PORT_Cfg.h
├── Port_PBcfg.c
└── Port_Regs.h
```

### `Port.c`

Contains the Port Driver API implementations and register-level GPIO configuration.

### `Port.h`

Contains Port Driver interfaces, data types, service IDs, error definitions, and version information.

### `PORT_Cfg.h`

Contains pre-compile configuration parameters and configured pin definitions.

### `Port_PBcfg.c`

Contains the post-build pin configuration used during Port Driver initialization.

### `Port_Regs.h`

Contains GPIO register-offset definitions required by the driver.

## Concepts Applied

* AUTOSAR Classic layered architecture
* MCAL driver development
* Embedded C
* Register-level ARM Cortex-M programming
* Pre-compile and post-build configuration
* Runtime pin direction and mode configuration
* Development Error Tracer integration
* Software and AUTOSAR version compatibility checks

## Development Scope and Attribution

This project was completed as part of an AUTOSAR training course instructed by **Mohamed Tarek**.

The course provided the starter project structure and **Port Driver API prototypes**. My work focused on implementing and configuring the Port Driver functionality, including:

* `Port_Init()`
* `Port_SetPinDirection()`
* `Port_SetPinMode()`
* `Port_RefreshPortDirection()`
* `Port_GetVersionInfo()`
* Port configuration structures
* Runtime direction and mode handling
* DET-based development error handling
* TM4C123 register-level Port configuration

The **DIO module** included in the repository was developed during the instructor-led portion of the course and is not presented as my individual implementation.

## Build Environment

The project was developed using Code Composer Studio for the
TM4C123GH6PM platform.

To inspect or build the project:

1. Clone the repository.
2. Import it as an existing CCS project.
3. Select the TM4C123GH6PM target configuration.
4. Build the project using Code Composer Studio.

## Purpose

The project was developed to apply AUTOSAR Classic concepts through practical implementation of a configurable low-level MCAL driver and to strengthen understanding of hardware abstraction, configuration handling, register-level programming, and development-error detection.
