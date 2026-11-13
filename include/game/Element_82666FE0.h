// Placeholder for the 12-byte element type of a std::vector in the XLip
// library (XLipComponent.cpp walks it with a const_iterator and asserts
// "LONG(g_vecRoots.size()) > iter[0].iRoot", which names the second member).
// Named after the address of its const_iterator's operator+= until the type
// is known.

#ifndef GAME_ELEMENT_82666FE0_H
#define GAME_ELEMENT_82666FE0_H

#include <vector>

struct Element_82666FE0 {
    int culture;
    int iRoot;
    int unknown8;
};

typedef std::vector<Element_82666FE0> Vector_82666FE0;

#endif
