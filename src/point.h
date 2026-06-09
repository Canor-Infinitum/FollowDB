/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_POINT_H
#define FOLLOWDB_POINT_H

#include "../../Follow/.shared/novus.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Point in spacetime coordinates */
struct db_point_t {
    struct novus_t t;
    struct novus_t x;
    struct novus_t y;
    struct novus_t z;
};

#ifdef __cplusplus
}
#endif

#endif
