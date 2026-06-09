/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_CHANGE_H
#define FOLLOWDB_CHANGE_H

#include "structure.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Reference primitive type (CHANGE) */
struct db_change_t {
    struct db_structure_t *reference;
};

#ifdef __cplusplus
}
#endif

#endif
