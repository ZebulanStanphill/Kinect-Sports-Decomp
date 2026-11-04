#ifndef GAME_ELEMENT_8265C818_H
#define GAME_ELEMENT_8265C818_H

// Placeholder for the element type of a std::set whose range erase is func_8265C818.
// A 0x20-byte value: the tree node layout (and so the iterator ++) depends on its size.
// Named after an address until the real element type is known. The name appears in
// the mangled symbols.

struct Element_8265C818 {
    unsigned char data[0x20];
};

inline bool operator<(const Element_8265C818 &a, const Element_8265C818 &b)
{
    return a.data[0] < b.data[0];
}

#endif
