/*
 * Copyright (C) 2020, Xilinx Inc - All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */
// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================


// control
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
// 0x10 : Data signal of a
//        bit 31~0 - a[31:0] (Read/Write)
// 0x14 : Data signal of a
//        bit 31~0 - a[63:32] (Read/Write)
// 0x18 : reserved
// 0x1c : Data signal of output_r
//        bit 31~0 - output_r[31:0] (Read/Write)
// 0x20 : Data signal of output_r
//        bit 31~0 - output_r[63:32] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of repeat_r
//        bit 31~0 - repeat_r[31:0] (Read/Write)
// 0x2c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//base addr 	0x1870000
//in_r		0x10
//outscore	0x1c
//outindex	0x28
//outsize	0x34
//classsize	0x40

#define XSORT_CONTROL_ADDR_AP_CTRL       0x00
#define XSORT_CONTROL_ADDR_GIE           0x04
#define XSORT_CONTROL_ADDR_IER           0x08
#define XSORT_CONTROL_ADDR_ISR           0x0c
#define XSORT_CONTROL_ADDR_inConf_DATA        0x10
#define XSORT_CONTROL_BITS_inConf_DATA        64
#define XSORT_CONTROL_ADDR_inBox_DATA        0x1c
#define XSORT_CONTROL_BITS_inBox_DATA        64
#define XSORT_CONTROL_ADDR_priors_DATA        0x28
#define XSORT_CONTROL_BITS_priors_DATA        64
#define XSORT_CONTROL_ADDR_outBoxes_DATA        0x34
#define XSORT_CONTROL_BITS_outBoxes_DATA        64
#define XSORT_CONTROL_ADDR_SCALAR_DATA1 0x40
#define XSORT_CONTROL_BITS_SCALAR_DATA1 32
#define XSORT_CONTROL_ADDR_SCALAR_DATA 0x48
#define XSORT_CONTROL_BITS_SCALAR_DATA 32

