#ifndef GAME_ELEMENT_828EF040_H
#define GAME_ELEMENT_828EF040_H

// Placeholder for the element type of a std::set whose range erase is
// func_828EF4E8 and single-element erase func_828EEC18: a trivially
// destructible, byte-aligned 0x3d-byte value (the node's colour and nil flags
// follow it), ordered by its first byte as in func_828EDEE0.
// Named after an address until the real element type is known. The name
// appears in the mangled symbols.

struct Element_828EF040 {
    unsigned char data[0x3d];
};

inline bool operator<(const Element_828EF040 &a, const Element_828EF040 &b)
{
    return a.data[0] < b.data[0];
}

#endif
