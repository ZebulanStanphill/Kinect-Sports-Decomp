#ifndef GAME_ELEMENT_828896C8_H
#define GAME_ELEMENT_828896C8_H

// Placeholder for the element type of a std::set whose range erase is func_828896C8.
// Only the node pointers matter to the code; named after an address until the
// real element type is known. The name appears in the mangled symbols.

struct Element_828896C8 {
    unsigned key;
};

inline bool operator<(const Element_828896C8 &a, const Element_828896C8 &b)
{
    return a.key < b.key;
}

#endif
