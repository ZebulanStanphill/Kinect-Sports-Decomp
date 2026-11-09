#ifndef GAME_ELEMENT_828957B0_H
#define GAME_ELEMENT_828957B0_H

// Placeholder for the element type of a std::set whose range erase is
// func_828957B0 and single-element erase func_82893138: a 0x1c-byte value
// ordered by its first word, with a member at offset 4 that owns a block (see
// the _Dest_val specialisation in func_82893138.cpp). Named after an address
// until the real element type is known. The name appears in the mangled
// symbols.

struct Sub_82893138 {
    void *ptr;
    int rest[3];
};

struct Element_828957B0 {
    unsigned key;
    Sub_82893138 sub;
    int tail[2];
};

inline bool operator<(const Element_828957B0 &a, const Element_828957B0 &b)
{
    return a.key < b.key;
}

#endif
