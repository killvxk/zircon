// Copyright 2018 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#define HAS_DEVICE_TREE 1

static const bootdata_cpu_config_t cpu_config = {
    .cluster_count = 1,
    .clusters = {
        {
            .cpu_count = 4,
        },
    },
};

static const bootdata_mem_range_t mem_config[] = {
    {
        .type = BOOTDATA_MEM_RANGE_RAM,
        .length = 0x80000000, // 2GB
    },
    {
        .type = BOOTDATA_MEM_RANGE_PERIPHERAL,
        .vaddr = 0xfffffffff5800000,
        .paddr = 0xf5800000,
        .length = 0x0a800000,
    },
    {
        // linux,secmon
        .type = BOOTDATA_MEM_RANGE_RESERVED,
        .paddr = 0,
        .length = 0x400000,
    },
    {
    // linux,secos
        .type = BOOTDATA_MEM_RANGE_RESERVED,
        .paddr = 0x05300000,
        .length = 0x2000000,
    },
};
