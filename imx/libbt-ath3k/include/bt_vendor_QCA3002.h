/*
 * Copyright 2012 The Android Open Source Project
 * Copyright (C) 2013 Freescale Semiconductor, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BT_VENDOR_QCA3002_H
#define BT_VENDOR_QCA3002_H

#include "bt_vendor_lib.h"
#include "vnd_buildcfg.h"
#include "userial_vendor_QCA3002.h"
#include "utils.h"

#ifndef FALSE
#define FALSE  0
#endif

#ifndef TRUE
#define TRUE   (!FALSE)
#endif
/*
#ifdef ppoll
#undef ppoll
#endif

//typedef unsigned long nfds_t;

#define ppoll compat_ppoll

static inline int compat_ppoll(struct pollfd *fds, nfds_t nfds,
		const struct timespec *timeout, const sigset_t *sigmask)
{
	if (timeout == NULL)
		return poll(fds, nfds, -1);
	else if (timeout->tv_sec == 0)
		return poll(fds, nfds, 500);
	else
		return poll(fds, nfds, timeout->tv_sec * 1000);
}
*/
// File discriptor using Transport
extern int fd;

//extern bt_hci_transport_device_type bt_hci_transport_device;

extern bt_vendor_callbacks_t *bt_vendor_cbacks;

/* HW_NEED_END_WITH_HCI_RESET

    code implementation of sending a HCI_RESET command during the epilog
    process. It calls back to the callers after command complete of HCI_RESET
    is received.

    Default TRUE .
*/
#ifndef HW_NEED_END_WITH_HCI_RESET
#define HW_NEED_END_WITH_HCI_RESET TRUE
#endif

#define HCI_RESET  0x0C03
#define HCI_CMD_PREAMBLE_SIZE 3
#define HCI_EVT_CMD_CMPL_STATUS_RET_BYTE   5
#define HCI_EVT_CMD_CMPL_OPCODE        3
#endif /* BT_VENDOR_QCA3002_H */

