#ifndef GAME_ELEMENT_82887890_H
#define GAME_ELEMENT_82887890_H

// Placeholder for the element type of a std::set whose range erase is func_82887890.
// Only the node pointers matter to the code; named after an address until the
// real element type is known. The name appears in the mangled symbols.

struct Element_82887890 {
    unsigned key;
};

inline bool operator<(const Element_82887890 &a, const Element_82887890 &b)
{
    return a.key < b.key;
}

#endif
