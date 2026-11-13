// capacity of the vector in game/Vec_82F8EEE0.h.
#include "game/Vec_82F8EEE0.h"

unsigned int Vec_82F8EEE0::capacity() const
{
    return first == 0 ? 0 : limit - first;
}
