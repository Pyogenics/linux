// SPDX-License-Identifier: GPL-2.0
// Copyright (C) 2023 Pyogenics <https://www.github.com/Pyogenics>

#include <asm/mach/arch.h>
#include <asm/v7m.h>

static const char* const rp2040_compat[] = {
	"rp,rp2040",
	NULL
};

DT_MACHINE_START(RP2040DT, "rp2040")
	.dt_compat = rp2040_compat,
	.restart = armv7m_restart,
MACHINE_END
