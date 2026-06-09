/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_STRUCTURE_H
#define FOLLOWDB_STRUCTURE_H

#include "elementary.h"
#include "composite.h"
#include "unique.h"
#include "unknown.h"
#include "unit.h"
#include "unity.h"
#include "uniter.h"
#include "unital.h"
#include "point.h"
#include "axis.h"
#include "composition.h"
#include "unbeknownst.h"

#ifdef __cplusplus
extern "C" {
#endif

enum db_structure_type_t {
    STRUCTURE_ELEMENTARY,
    STRUCTURE_COMPOSITE,
    STRUCTURE_UNIQUE,
    STRUCTURE_UNKNOWN,
    STRUCTURE_UNIT,
    STRUCTURE_UNITY,
    STRUCTURE_UNITER,
    STRUCTURE_UNITAL,
    STRUCTURE_POINT,
    STRUCTURE_AXIS,
    STRUCTURE_COMPOSITION,
    STRUCTURE_UNBEKNOWNST
};

/* Super-type storing all database primitives */
struct db_structure_t {
    enum db_structure_type_t type;
    union {
        struct db_elementary_t elementary;
        struct db_composite_t composite;
        struct db_unique_t unique;
        struct db_unknown_t unknown;
        struct db_unit_t unit;
        struct db_unity_t unity;
        struct db_uniter_t uniter;
        struct db_unital_t unital;
        struct db_point_t point;
        struct db_axis_t axis;
        struct db_composition_t composition;
        struct db_unbeknownst_t unbeknownst;
    } value;
};

#ifdef __cplusplus
}
#endif

#endif
