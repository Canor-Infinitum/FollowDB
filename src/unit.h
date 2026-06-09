/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNIT_H
#define FOLLOWDB_UNIT_H

#include "../../Follow/.shared/novus.h"
#include "length.h"

#ifdef __cplusplus
extern "C" {
#endif

struct db_tensor_t;

/* UNIT: {REAL[ ], INTERVAL[ ], TENSOR[ ], OPERATOR} */
struct db_unit_t {
    size_t reals_count;
    struct novus_t *reals;
    
    size_t intervals_count;
    struct novus_t *intervals;
    
    size_t tensors_count;
    struct db_tensor_t **tensors;
    
    enum db_length_op_t op;
};

#ifdef __cplusplus
}
#endif

#endif
