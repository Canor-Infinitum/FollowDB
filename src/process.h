/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_PROCESS_H
#define FOLLOWDB_PROCESS_H

#include "generator.h"
#include "chain.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Process managing generator and chain states */
struct db_process_t {
    struct db_generator_t generator;
    struct db_chain_t current_chain;
};

#ifdef __cplusplus
}
#endif

#endif
