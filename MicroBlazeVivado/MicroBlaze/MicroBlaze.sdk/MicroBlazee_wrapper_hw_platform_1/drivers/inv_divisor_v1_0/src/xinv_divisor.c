// ==============================================================
// File generated on Mon May 05 12:04:45 +0330 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xinv_divisor.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XInv_divisor_CfgInitialize(XInv_divisor *InstancePtr, XInv_divisor_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_bus_BaseAddress = ConfigPtr->Ctrl_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XInv_divisor_Start(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL) & 0x80;
    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XInv_divisor_IsDone(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XInv_divisor_IsIdle(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XInv_divisor_IsReady(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XInv_divisor_EnableAutoRestart(XInv_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL, 0x80);
}

void XInv_divisor_DisableAutoRestart(XInv_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL, 0);
}

u32 XInv_divisor_Get_return(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_AP_RETURN);
    return Data;
}
void XInv_divisor_Set_C0(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C0_DATA, Data);
}

u32 XInv_divisor_Get_C0(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C0_DATA);
    return Data;
}

void XInv_divisor_Set_C1(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C1_DATA, Data);
}

u32 XInv_divisor_Get_C1(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C1_DATA);
    return Data;
}

void XInv_divisor_Set_C2(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C2_DATA, Data);
}

u32 XInv_divisor_Get_C2(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C2_DATA);
    return Data;
}

void XInv_divisor_Set_C3(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C3_DATA, Data);
}

u32 XInv_divisor_Get_C3(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C3_DATA);
    return Data;
}

void XInv_divisor_Set_C4(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C4_DATA, Data);
}

u32 XInv_divisor_Get_C4(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C4_DATA);
    return Data;
}

void XInv_divisor_Set_C5(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C5_DATA, Data);
}

u32 XInv_divisor_Get_C5(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C5_DATA);
    return Data;
}

void XInv_divisor_Set_C6(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C6_DATA, Data);
}

u32 XInv_divisor_Get_C6(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C6_DATA);
    return Data;
}

void XInv_divisor_Set_C7(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C7_DATA, Data);
}

u32 XInv_divisor_Get_C7(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C7_DATA);
    return Data;
}

void XInv_divisor_Set_C8(XInv_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C8_DATA, Data);
}

u32 XInv_divisor_Get_C8(XInv_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_C8_DATA);
    return Data;
}

void XInv_divisor_InterruptGlobalEnable(XInv_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_GIE, 1);
}

void XInv_divisor_InterruptGlobalDisable(XInv_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_GIE, 0);
}

void XInv_divisor_InterruptEnable(XInv_divisor *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_IER);
    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_IER, Register | Mask);
}

void XInv_divisor_InterruptDisable(XInv_divisor *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_IER);
    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_IER, Register & (~Mask));
}

void XInv_divisor_InterruptClear(XInv_divisor *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInv_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_ISR, Mask);
}

u32 XInv_divisor_InterruptGetEnabled(XInv_divisor *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_IER);
}

u32 XInv_divisor_InterruptGetStatus(XInv_divisor *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XInv_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINV_DIVISOR_CTRL_BUS_ADDR_ISR);
}

