// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 */

#include <linux/kernel.h>
#include "board-dt.h"
#include <asm/mach/map.h>
#include <asm/mach/arch.h>

static const char *mdm9650_dt_match[] __initconst = {
       "qcom,mdm9650",
       NULL
};

static void __init mdm9650_init(void)
{
       board_dt_populate(NULL);
}

DT_MACHINE_START(MDM9650_DT,
       "Qualcomm Technologies, Inc. MDM9650 (Flattened Device Tree)")
       .init_machine           = mdm9650_init,
       .dt_compat              = mdm9650_dt_match,
MACHINE_END
