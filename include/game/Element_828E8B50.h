#ifndef GAME_ELEMENT_828E8B50_H
#define GAME_ELEMENT_828E8B50_H

#include <memory>

// Placeholder for the element type of a std::set whose range erase is
// func_828E8B50 and single-element erase func_828E8078: a 16-byte value
// ordered by its first word, holding a std::tr1::shared_ptr at offset 8 (the
// erase destroys it). Named after an address until the real element type is
// known. The name appears in the mangled symbols.

struct Element_828E8B50 {
    struct Object;
    unsigned key;
    int unk4;
    std::tr1::shared_ptr<Object> unk8;
};

inline bool operator<(const Element_828E8B50 &a, const Element_828E8B50 &b)
{
    return a.key < b.key;
}

#endif
