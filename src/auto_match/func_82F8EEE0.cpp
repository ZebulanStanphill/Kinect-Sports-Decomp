// push_back of the vector in game/Vec_82F8EEE0.h: fills the next free slot,
// or inserts at the end when the buffer is full.
#include "game/Vec_82F8EEE0.h"

void Vec_82F8EEE0::push_back(void *const &val)
{
    if (size() < capacity()) {
        last = _Ufill(last, 1, val);
    } else {
        insert(end(), val);
    }
}
