#ifndef GAME_ELEMENT_828960C0_H
#define GAME_ELEMENT_828960C0_H

// Placeholder for the element type of a std::set whose range erase is func_828960C0.
// Only the node pointers matter to the code; named after an address until the
// real element type is known. The name appears in the mangled symbols.

struct Element_828960C0 {
    unsigned key;
};

inline bool operator<(const Element_828960C0 &a, const Element_828960C0 &b)
{
    return a.key < b.key;
}

#endif
