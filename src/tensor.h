/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_TENSOR_H
#define FOLLOWDB_TENSOR_H

#include "tensorial.h"

#ifdef __cplusplus
extern "C" {
#endif

struct db_expr_t {
    const char *func;
    const char *params;
    const char *ret_val;
};

/* TENSOR: {expr : EXPR, covariant : TENSORIAL, contravariant : TENSORIAL} */
struct db_tensor_t {
    struct db_expr_t expr;
    
    size_t covariant_count;
    struct db_tensorial_t *covariant;
    
    size_t contravariant_count;
    struct db_tensorial_t *contravariant;
};

#ifdef __cplusplus
}
#endif

#endif
