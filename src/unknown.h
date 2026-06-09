/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_UNKNOWN_H
#define FOLLOWDB_UNKNOWN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Unknown representation */
struct db_unknown_t {
    size_t size;
    void *placeholder;
};

#ifdef __cplusplus
}
#endif

#endif
