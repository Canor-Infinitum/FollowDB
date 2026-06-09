/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_ARBITRARY_H
#define FOLLOWDB_ARBITRARY_H

#include "../../Follow/.shared/novus.h"
#include "../../Follow/.shared/tempus.h"

#ifdef __cplusplus
extern "C" {
#endif

/* (Real, (Start, Stop), Base)-Arbitraries */
struct db_arbitrary_t {
    struct novus_t real;
    struct novus_t start;
    struct novus_t stop;
    struct tempus_basum_t base;
};

#ifdef __cplusplus
}
#endif

#endif
