#ifndef GAME_ELEMENT_82896D88_H
#define GAME_ELEMENT_82896D88_H

// Placeholder for the element type of a std::set whose range erase is func_82896D88.
// Only the node pointers matter to the code; named after an address until the
// real element type is known. The name appears in the mangled symbols.

struct Element_82896D88 {
    unsigned key;
};

inline bool operator<(const Element_82896D88 &a, const Element_82896D88 &b)
{
    return a.key < b.key;
}

#endif
