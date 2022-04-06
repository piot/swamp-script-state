#ifndef SWAMP_SCRIPT_STATE_H
#define SWAMP_SCRIPT_STATE_H

#include <stddef.h>

struct SwtiType;

typedef struct SwampScriptState {
    const void* state;
    size_t stateOctetCount;
    size_t align;
    const struct SwtiType* debugType;
} SwampScriptState;

#endif
