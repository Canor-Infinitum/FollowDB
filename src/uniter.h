/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNITER_H
#define FOLLOWDB_UNITER_H

#include "unit.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Uniter: helper for merging units or handling operations */
struct db_uniter_t {
    struct db_unit_t left;
    struct db_unit_t right;
    int32_t mode;
};

#ifdef __cplusplus
}
#endif

#endif
