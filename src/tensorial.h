/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_TENSORIAL_H
#define FOLLOWDB_TENSORIAL_H

#include "../../Follow/.shared/novus.h"
#include "../../Follow/.shared/tempus.h"

#ifdef __cplusplus
extern "C" {
#endif

struct db_modulation_t {
    struct novus_t real;
    struct novus_t bounds; /* INTERVAL */
    struct tempus_t base;
};

/* TENSORIAL: Array of MODULATION and symmetry-group flags */
struct db_tensorial_t {
    size_t count;
    struct db_modulation_t *data;
    bool regular;
    bool symmetric;
    bool antisymmetric;
    bool unknownsymmetric;
    size_t group_id;
};

#ifdef __cplusplus
}
#endif

#endif
