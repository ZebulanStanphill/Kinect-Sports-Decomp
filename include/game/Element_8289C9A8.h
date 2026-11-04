#ifndef GAME_ELEMENT_8289C9A8_H
#define GAME_ELEMENT_8289C9A8_H

// Placeholder for the element type of a std::set whose range erase is func_8289C9A8.
// Only the node pointers matter to the code; named after an address until the
// real element type is known. The name appears in the mangled symbols.

struct Element_8289C9A8 {
    unsigned key;
};

inline bool operator<(const Element_8289C9A8 &a, const Element_8289C9A8 &b)
{
    return a.key < b.key;
}

#endif
