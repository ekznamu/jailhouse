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

#define JAILHOUSE_SIGNATURE	"JAILHOUS"

struct jailhouse_header {
	/* filled at build time */
	char signature[8];
	unsigned long bss_start;
	unsigned long bss_end;
	unsigned long percpu_size;
	unsigned long entry;

	/* filled by loader */
	unsigned long size;
	unsigned long page_offset;
	unsigned int possible_cpus;
	unsigned int online_cpus;
};

typedef int (*entry_func)(unsigned int);
