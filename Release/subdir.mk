################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ADTRI.cpp \
../ASP.cpp \
../Bigtravel.cpp \
../JUMP.cpp \
../KSPHERES.cpp \
../LOTERY.cpp \
../PERSHFTS.cpp \
../PRIME1.cpp \
../SUBINC.cpp \
../TIMEASR.cpp \
../TWTCLOSE.cpp \
../WDTBAM.cpp \
../he1.cpp \
../pc.cpp \
../tc.cpp 

OBJS += \
./ADTRI.o \
./ASP.o \
./Bigtravel.o \
./JUMP.o \
./KSPHERES.o \
./LOTERY.o \
./PERSHFTS.o \
./PRIME1.o \
./SUBINC.o \
./TIMEASR.o \
./TWTCLOSE.o \
./WDTBAM.o \
./he1.o \
./pc.o \
./tc.o 

CPP_DEPS += \
./ADTRI.d \
./ASP.d \
./Bigtravel.d \
./JUMP.d \
./KSPHERES.d \
./LOTERY.d \
./PERSHFTS.d \
./PRIME1.d \
./SUBINC.d \
./TIMEASR.d \
./TWTCLOSE.d \
./WDTBAM.d \
./he1.d \
./pc.d \
./tc.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


