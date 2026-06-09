/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNITAL_H
#define FOLLOWDB_UNITAL_H

#include "unit.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Unital representation */
struct db_unital_t {
    struct db_unit_t base_unit;
    bool is_orthonormal;
};

#ifdef __cplusplus
}
#endif

#endif
