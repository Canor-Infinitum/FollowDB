/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNITY_H
#define FOLLOWDB_UNITY_H

#include "unit.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Unity: collection or single unit configurations */
struct db_unity_t {
    struct db_unit_t unit;
    uint32_t flags;
};

#ifdef __cplusplus
}
#endif

#endif
