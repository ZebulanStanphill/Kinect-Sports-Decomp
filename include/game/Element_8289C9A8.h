#ifndef GAME_ELEMENT_8289C9A8_H
#define GAME_ELEMENT_8289C9A8_H

// Placeholder for the element type of a std::set whose range erase is
// func_8289C9A8 and single-element erase func_8289B6F8: a 16-byte value, a key
// word and a link (previous, next, owner) that destroying the value unhooks
// from its owner's list (see the _Dest_val specialisation in
// func_8289B6F8.cpp). Named after an address until the real element type is
// known. The name appears in the mangled symbols.

struct Link_8289B6F8 {
    Link_8289B6F8 *prev;
    Link_8289B6F8 *next;
    int *owner;
};

struct Element_8289C9A8 {
    unsigned key;
    Link_8289B6F8 link;
};

inline bool operator<(const Element_8289C9A8 &a, const Element_8289C9A8 &b)
{
    return a.key < b.key;
}

#endif
