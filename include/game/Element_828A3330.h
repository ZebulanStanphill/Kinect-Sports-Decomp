#ifndef GAME_ELEMENT_828A3330_H
#define GAME_ELEMENT_828A3330_H

// Placeholder for the element type of a std::set whose range erase is
// func_828A3330 and single-element erase func_828A2560: a trivially
// destructible 0x44-byte value (the node's colour and nil flags follow it)
// ordered by its first word. Named after an address until the real element
// type is known. The name appears in the mangled symbols.

struct Element_828A3330 {
    unsigned key;
    unsigned char unk4[0x40];
};

inline bool operator<(const Element_828A3330 &a, const Element_828A3330 &b)
{
    return a.key < b.key;
}

#endif
