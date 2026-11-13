// Placeholder for the game's 196-byte element type of a std::vector that
// allocates through Allocator_825089A0 with category 1 (the object fn_825089A0
// returns). Named after the address of the vector's _Buy until the type is known;
// it is copied as plain memory.

#ifndef GAME_ELEMENT_828D0F58_H
#define GAME_ELEMENT_828D0F58_H

#include <vector>

#include "game/Allocator_825089A0.h"

struct Element_828D0F58 {
    int data[49];
};

typedef Allocator_825089A0<Element_828D0F58, 1> Allocator_828D0F58;
typedef std::vector<Element_828D0F58, Allocator_828D0F58> Vector_828D0F58;

#endif
