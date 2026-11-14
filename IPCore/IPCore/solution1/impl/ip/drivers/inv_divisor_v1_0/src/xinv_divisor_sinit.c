// ==============================================================
// File generated on Tue May 06 15:21:47 +0330 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xinv_divisor.h"

extern XInv_divisor_Config XInv_divisor_ConfigTable[];

XInv_divisor_Config *XInv_divisor_LookupConfig(u16 DeviceId) {
	XInv_divisor_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XINV_DIVISOR_NUM_INSTANCES; Index++) {
		if (XInv_divisor_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XInv_divisor_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XInv_divisor_Initialize(XInv_divisor *InstancePtr, u16 DeviceId) {
	XInv_divisor_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XInv_divisor_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XInv_divisor_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

