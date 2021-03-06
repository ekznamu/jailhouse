/*
 * Jailhouse, a Linux-based partitioning hypervisor
 *
 * Copyright (c) Siemens AG, 2013
 *
 * Authors:
 *  Jan Kiszka <jan.kiszka@siemens.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2.  See
 * the COPYING file in the top-level directory.
 */

#include <asm/types.h>

extern volatile unsigned long panic_in_progress;
extern unsigned int panic_cpu;

void printk(const char *fmt, ...);

void panic_printk(const char *fmt, ...);

void arch_dbg_write_init(void);
void arch_dbg_write(const char *msg);
