/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNIQUE_H
#define FOLLOWDB_UNIQUE_H

#include "elementary.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Unique representation */
struct db_unique_t {
    uint64_t id;
    struct db_elementary_t value;
};

#ifdef __cplusplus
}
#endif

#endif
