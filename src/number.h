/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_NUMBER_H
#define FOLLOWDB_NUMBER_H

#include "../../Follow/.shared/novus.h"
#include "../../Follow/.shared/tempus.h"

#ifdef __cplusplus
extern "C" {
#endif

/* (Real, Base)-Numbers */
struct db_number_t {
    struct novus_t real;
    struct tempus_basum_t base;
};

#ifdef __cplusplus
}
#endif

#endif
