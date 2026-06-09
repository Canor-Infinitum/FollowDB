/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_COMPOSITION_H
#define FOLLOWDB_COMPOSITION_H

#include "point.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Composition of spacetime points */
struct db_composition_t {
    size_t count;
    struct db_point_t *points;
};

#ifdef __cplusplus
}
#endif

#endif
