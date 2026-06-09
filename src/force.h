/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_FORCE_H
#define FOLLOWDB_FORCE_H

#include "structure.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Functional primitive type (FORCE) */
struct db_force_t {
    /* Function pointer mapping inputs to outputs */
    struct db_structure_t (*functional)(const struct db_structure_t *input);
};

#ifdef __cplusplus
}
#endif

#endif
