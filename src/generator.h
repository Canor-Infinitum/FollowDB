/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_GENERATOR_H
#define FOLLOWDB_GENERATOR_H

#include "markov.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Generator mapping state transitions to output sequences */
struct db_generator_t {
    struct db_markov_t model;
    uint64_t seed;
};

#ifdef __cplusplus
}
#endif

#endif
