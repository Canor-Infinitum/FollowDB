/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_ELEMENTARY_H
#define FOLLOWDB_ELEMENTARY_H

#include "number.h"
#include "arbitrary.h"
#include "length.h"

#ifdef __cplusplus
extern "C" {
#endif

enum db_elementary_type_t {
    ELEMENTARY_NUMBER,
    ELEMENTARY_ARBITRARY,
    ELEMENTARY_LENGTH
};

/* Scalar representation of numbers, arbitraries, and lengths */
struct db_elementary_t {
    enum db_elementary_type_t type;
    union {
        struct db_number_t number;
        struct db_arbitrary_t arbitrary;
        struct db_length_t length;
    } value;
};

#ifdef __cplusplus
}
#endif

#endif
