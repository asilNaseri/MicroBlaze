// ==============================================================
// File generated on Mon May 05 12:04:45 +0330 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// CTRL_BUS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of C0
//        bit 7~0 - C0[7:0] (Read/Write)
//        others  - reserved
// 0x1c : reserved
// 0x20 : Data signal of C1
//        bit 7~0 - C1[7:0] (Read/Write)
//        others  - reserved
// 0x24 : reserved
// 0x28 : Data signal of C2
//        bit 7~0 - C2[7:0] (Read/Write)
//        others  - reserved
// 0x2c : reserved
// 0x30 : Data signal of C3
//        bit 7~0 - C3[7:0] (Read/Write)
//        others  - reserved
// 0x34 : reserved
// 0x38 : Data signal of C4
//        bit 7~0 - C4[7:0] (Read/Write)
//        others  - reserved
// 0x3c : reserved
// 0x40 : Data signal of C5
//        bit 7~0 - C5[7:0] (Read/Write)
//        others  - reserved
// 0x44 : reserved
// 0x48 : Data signal of C6
//        bit 7~0 - C6[7:0] (Read/Write)
//        others  - reserved
// 0x4c : reserved
// 0x50 : Data signal of C7
//        bit 7~0 - C7[7:0] (Read/Write)
//        others  - reserved
// 0x54 : reserved
// 0x58 : Data signal of C8
//        bit 7~0 - C8[7:0] (Read/Write)
//        others  - reserved
// 0x5c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XINV_DIVISOR_CTRL_BUS_ADDR_AP_CTRL   0x00
#define XINV_DIVISOR_CTRL_BUS_ADDR_GIE       0x04
#define XINV_DIVISOR_CTRL_BUS_ADDR_IER       0x08
#define XINV_DIVISOR_CTRL_BUS_ADDR_ISR       0x0c
#define XINV_DIVISOR_CTRL_BUS_ADDR_AP_RETURN 0x10
#define XINV_DIVISOR_CTRL_BUS_BITS_AP_RETURN 32
#define XINV_DIVISOR_CTRL_BUS_ADDR_C0_DATA   0x18
#define XINV_DIVISOR_CTRL_BUS_BITS_C0_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C1_DATA   0x20
#define XINV_DIVISOR_CTRL_BUS_BITS_C1_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C2_DATA   0x28
#define XINV_DIVISOR_CTRL_BUS_BITS_C2_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C3_DATA   0x30
#define XINV_DIVISOR_CTRL_BUS_BITS_C3_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C4_DATA   0x38
#define XINV_DIVISOR_CTRL_BUS_BITS_C4_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C5_DATA   0x40
#define XINV_DIVISOR_CTRL_BUS_BITS_C5_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C6_DATA   0x48
#define XINV_DIVISOR_CTRL_BUS_BITS_C6_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C7_DATA   0x50
#define XINV_DIVISOR_CTRL_BUS_BITS_C7_DATA   8
#define XINV_DIVISOR_CTRL_BUS_ADDR_C8_DATA   0x58
#define XINV_DIVISOR_CTRL_BUS_BITS_C8_DATA   8

