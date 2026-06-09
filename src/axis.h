/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_AXIS_H
#define FOLLOWDB_AXIS_H

#include "point.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Axis in spacetime */
struct db_axis_t {
    struct db_point_t origin;
    struct db_point_t direction;
};

#ifdef __cplusplus
}
#endif

#endif
