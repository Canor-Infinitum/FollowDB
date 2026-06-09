/*
 * Copyright (c) 2026 Canor Aether Infinitum
 *
 * SPDX-License-Identifier: GNU AGPL v3.0-or-later
 */

#ifndef FOLLOWDB_LENGTH_H
#define FOLLOWDB_LENGTH_H

#include "../../Follow/.shared/novus.h"
#include "../../Follow/.shared/tempus.h"

#ifdef __cplusplus
extern "C" {
#endif

enum db_length_op_t {
    LENGTH_OP_NONE = 0,
    LENGTH_OP_EDGES,
    LENGTH_OP_SEGMENT,
    LENGTH_OP_LEFTRAY,
    LENGTH_OP_RIGHTRAY,
    LENGTH_OP_LINE,
    LENGTH_OP_WHOLE
};

/* (Real, (Start, Stop), Base, Op)-Lengths */
struct db_length_t {
    struct novus_t real;
    struct novus_t start;
    struct novus_t stop;
    struct tempus_basum_t base;
    enum db_length_op_t op;
};

#ifdef __cplusplus
}
#endif

#endif
