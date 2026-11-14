// ==============================================================
// File generated on Mon May 05 12:04:45 +0330 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XINV_DIVISOR_H
#define XINV_DIVISOR_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xinv_divisor_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Ctrl_bus_BaseAddress;
} XInv_divisor_Config;
#endif

typedef struct {
    u32 Ctrl_bus_BaseAddress;
    u32 IsReady;
} XInv_divisor;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XInv_divisor_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XInv_divisor_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XInv_divisor_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XInv_divisor_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XInv_divisor_Initialize(XInv_divisor *InstancePtr, u16 DeviceId);
XInv_divisor_Config* XInv_divisor_LookupConfig(u16 DeviceId);
int XInv_divisor_CfgInitialize(XInv_divisor *InstancePtr, XInv_divisor_Config *ConfigPtr);
#else
int XInv_divisor_Initialize(XInv_divisor *InstancePtr, const char* InstanceName);
int XInv_divisor_Release(XInv_divisor *InstancePtr);
#endif

void XInv_divisor_Start(XInv_divisor *InstancePtr);
u32 XInv_divisor_IsDone(XInv_divisor *InstancePtr);
u32 XInv_divisor_IsIdle(XInv_divisor *InstancePtr);
u32 XInv_divisor_IsReady(XInv_divisor *InstancePtr);
void XInv_divisor_EnableAutoRestart(XInv_divisor *InstancePtr);
void XInv_divisor_DisableAutoRestart(XInv_divisor *InstancePtr);
u32 XInv_divisor_Get_return(XInv_divisor *InstancePtr);

void XInv_divisor_Set_C0(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C0(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C1(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C1(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C2(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C2(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C3(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C3(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C4(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C4(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C5(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C5(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C6(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C6(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C7(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C7(XInv_divisor *InstancePtr);
void XInv_divisor_Set_C8(XInv_divisor *InstancePtr, u32 Data);
u32 XInv_divisor_Get_C8(XInv_divisor *InstancePtr);

void XInv_divisor_InterruptGlobalEnable(XInv_divisor *InstancePtr);
void XInv_divisor_InterruptGlobalDisable(XInv_divisor *InstancePtr);
void XInv_divisor_InterruptEnable(XInv_divisor *InstancePtr, u32 Mask);
void XInv_divisor_InterruptDisable(XInv_divisor *InstancePtr, u32 Mask);
void XInv_divisor_InterruptClear(XInv_divisor *InstancePtr, u32 Mask);
u32 XInv_divisor_InterruptGetEnabled(XInv_divisor *InstancePtr);
u32 XInv_divisor_InterruptGetStatus(XInv_divisor *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
