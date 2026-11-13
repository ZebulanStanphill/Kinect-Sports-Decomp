// Checked element access of the vector in game/Vec_82F8EEE0.h: breaks into
// the debugger when the index is out of range.
#include "game/Vec_82F8EEE0.h"

extern "C" void **fn_82F8EE90(Vec_82F8EEE0 *self, unsigned int index)
{
    if (!(index < self->size())) {
        __debugbreak();
    }
    return self->first + index;
}
