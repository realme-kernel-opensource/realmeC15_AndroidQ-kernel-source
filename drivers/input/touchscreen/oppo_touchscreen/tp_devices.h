/***************************************************
 * File:tp_devices.h
 * VENDOR_EDIT
 * Copyright (c)  2008- 2030  Oppo Mobile communication Corp.ltd.
 * Description:
 *             tp dev
 * Version:1.0:
 * Date created:2016/09/02
 * Author: Tong.han@Bsp.Driver
 * TAG: BSP.TP.Init
 *
 * -------------- Revision History: -----------------
 *  <author >  <data>  <version>  <desc>
 ***************************************************/
#ifndef OPPO_TP_DEVICES_H
#define OPPO_TP_DEVICES_H
//device list define
typedef enum tp_dev{
    TP_BOE_B3,
	TP_CDOT,
    TP_INNOLUX,
    TP_BOE_B8,
    TP_TRULY,
    TP_BOE_90HZ,
	//TP_INNOLUX_90HZ,
    TP_HLT_90HZ,
    TP_TIANMA,
    TP_SAMSUNG,
    TP_UNKNOWN,
}tp_dev;

struct tp_dev_name {
    tp_dev type;
    char name[32];
};

#endif

