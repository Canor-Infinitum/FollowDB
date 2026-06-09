/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_EXPRESSION_H
#define FOLLOWDB_EXPRESSION_H

#include "tensor.h"
#include "unit.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EXPRESSION: {input : EXPR, output : Array of specialized UNIT} */
struct db_expression_t {
    struct db_expr_t input;
    size_t output_count;
    struct db_unit_t *output;
};

#ifdef __cplusplus
}
#endif

#endif
