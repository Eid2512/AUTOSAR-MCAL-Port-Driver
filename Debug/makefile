################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./tm4c123gh6pm_startup_ccs.obj" \
"./API/App.obj" \
"./ECUAL/BUTTON/Button.obj" \
"./ECUAL/LED/Led.obj" \
"./MCAL/DIO/Dio.obj" \
"./MCAL/DIO/Dio_PBcfg.obj" \
"./MCAL/GPT/Gpt.obj" \
"./MCAL/MCU/Mcu.obj" \
"./MCAL/PORT/Port.obj" \
"./MCAL/PORT/Port_PBcfg.obj" \
"./SERVICE/DET/Det.obj" \
"./SERVICE/OS/Os.obj" \
"./SERVICE/main.obj" \
"../tm4c123gh6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include API/subdir_vars.mk
-include ECUAL/BUTTON/subdir_vars.mk
-include ECUAL/LED/subdir_vars.mk
-include MCAL/DIO/subdir_vars.mk
-include MCAL/GPT/subdir_vars.mk
-include MCAL/MCU/subdir_vars.mk
-include MCAL/PORT/subdir_vars.mk
-include SERVICE/DET/subdir_vars.mk
-include SERVICE/OS/subdir_vars.mk
-include SERVICE/subdir_vars.mk
-include subdir_rules.mk
-include API/subdir_rules.mk
-include ECUAL/BUTTON/subdir_rules.mk
-include ECUAL/LED/subdir_rules.mk
-include MCAL/DIO/subdir_rules.mk
-include MCAL/GPT/subdir_rules.mk
-include MCAL/MCU/subdir_rules.mk
-include MCAL/PORT/subdir_rules.mk
-include SERVICE/DET/subdir_rules.mk
-include SERVICE/OS/subdir_rules.mk
-include SERVICE/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
AUTOSAR_PORT_DIO_DRIVER_PROJECT.out 

EXE_OUTPUTS__QUOTED += \
"AUTOSAR_PORT_DIO_DRIVER_PROJECT.out" 


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "AUTOSAR_PORT_DIO_DRIVER_PROJECT.out"

# Tool invocations
AUTOSAR_PORT_DIO_DRIVER_PROJECT.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"AUTOSAR_PORT_DIO_DRIVER_PROJECT.map" --heap_size=0 --stack_size=512 -i"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/lib" -i"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="AUTOSAR_PORT_DIO_DRIVER_PROJECT_linkInfo.xml" --rom_model -o "AUTOSAR_PORT_DIO_DRIVER_PROJECT.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "tm4c123gh6pm_startup_ccs.obj" "API\App.obj" "ECUAL\BUTTON\Button.obj" "ECUAL\LED\Led.obj" "MCAL\DIO\Dio.obj" "MCAL\DIO\Dio_PBcfg.obj" "MCAL\GPT\Gpt.obj" "MCAL\MCU\Mcu.obj" "MCAL\PORT\Port.obj" "MCAL\PORT\Port_PBcfg.obj" "SERVICE\DET\Det.obj" "SERVICE\OS\Os.obj" "SERVICE\main.obj" 
	-$(RM) "tm4c123gh6pm_startup_ccs.d" "API\App.d" "ECUAL\BUTTON\Button.d" "ECUAL\LED\Led.d" "MCAL\DIO\Dio.d" "MCAL\DIO\Dio_PBcfg.d" "MCAL\GPT\Gpt.d" "MCAL\MCU\Mcu.d" "MCAL\PORT\Port.d" "MCAL\PORT\Port_PBcfg.d" "SERVICE\DET\Det.d" "SERVICE\OS\Os.d" "SERVICE\main.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

