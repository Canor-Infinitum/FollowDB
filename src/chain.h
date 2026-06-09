/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_CHAIN_H
#define FOLLOWDB_CHAIN_H

#include "expression.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Chain of sequential expressions */
struct db_chain_t {
    size_t length;
    struct db_expression_t **sequence;
};

#ifdef __cplusplus
}
#endif

#endif
