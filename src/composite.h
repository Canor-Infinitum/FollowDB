/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_COMPOSITE_H
#define FOLLOWDB_COMPOSITE_H

#include "elementary.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Array representation of numbers, arbitraries, and lengths */
struct db_composite_t {
    size_t count;
    struct db_elementary_t *elements;
};

#ifdef __cplusplus
}
#endif

#endif
