#ifndef _CHIPOP_H
#define _CHIPOP_H

#include "ChipInstFunc.h"

typedef struct ChipOp_s {
    ChipInstFunc func;
    ChipInstClass cls;
} ChipOp;

#endif
