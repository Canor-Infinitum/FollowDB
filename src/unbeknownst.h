/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNBEKNOWNST_H
#define FOLLOWDB_UNBEKNOWNST_H

#ifdef __cplusplus
extern "C" {
#endif

/* Unbeknownst: Unresolved coordinate/moduli slots */
struct db_unbeknownst_t {
    uint32_t unresolved_bits;
    void *opaque_data;
};

#ifdef __cplusplus
}
#endif

#endif
