################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/fileHandling\ Demo.c 

OBJS += \
./src/fileHandling\ Demo.o 

C_DEPS += \
./src/fileHandling\ Demo.d 


# Each subdirectory must supply rules for building sources it contributes
src/fileHandling\ Demo.o: ../src/fileHandling\ Demo.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/fileHandling Demo.d" -MT"src/fileHandling\ Demo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


