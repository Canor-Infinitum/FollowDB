/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_MARKOV_H
#define FOLLOWDB_MARKOV_H

#include "expression.h"
#include "../../Follow/.shared/novus.h"

#ifdef __cplusplus
extern "C" {
#endif

struct db_markov_transition_t {
    struct db_expression_t *from_expr;
    struct db_expression_t *to_expr;
    struct novus_t probability;
};

/* Markov Chain structure over symbolic expressions */
struct db_markov_t {
    size_t states_count;
    struct db_expression_t **states;
    size_t transitions_count;
    struct db_markov_transition_t *transitions;
};

#ifdef __cplusplus
}
#endif

#endif
