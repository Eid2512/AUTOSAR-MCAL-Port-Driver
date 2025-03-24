################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
MCAL/GPT/%.obj: ../MCAL/GPT/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/API" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/ECUAL" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/ECUAL/BUTTON" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/ECUAL/LED" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/MCAL" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/MCAL/DIO" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/MCAL/MCU" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/MCAL/GPT" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/MCAL/PORT" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/SERVICE" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/SERVICE/DET" --include_path="E:/Advanced_Embedded/workspace/AUTOSAR_PORT_DIO_DRIVER_PROJECT/SERVICE/OS" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="MCAL/GPT/$(basename $(<F)).d_raw" --obj_directory="MCAL/GPT" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


