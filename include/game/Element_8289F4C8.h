#ifndef GAME_ELEMENT_8289F4C8_H
#define GAME_ELEMENT_8289F4C8_H

// Placeholder for the element type of a std::set whose range erase is
// func_8289F4C8 and single-element erase func_8289E440: a trivially
// destructible 8-byte value (the node's colour and nil flags follow it)
// ordered by its first word. Named after an address until the real element
// type is known. The name appears in the mangled symbols.

struct Element_8289F4C8 {
    unsigned key;
    unsigned char unk4[0x4];
};

inline bool operator<(const Element_8289F4C8 &a, const Element_8289F4C8 &b)
{
    return a.key < b.key;
}

#endif
