/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_ATOM_H
#define FOLLOWDB_ATOM_H

#include "structure.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Value primitive type (ATOM) */
struct db_atom_t {
    struct db_structure_t structure;
};

#ifdef __cplusplus
}
#endif

#endif
