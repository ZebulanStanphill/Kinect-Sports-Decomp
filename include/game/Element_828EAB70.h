#ifndef GAME_ELEMENT_828EAB70_H
#define GAME_ELEMENT_828EAB70_H

// Placeholder for the element type of a std::set (custom game allocator) whose
// erase(const_iterator) is func_828EAB70. Only the node layout matters to the code;
// named after an address until the real element type is known. The name appears in
// the mangled symbols.

struct Element_828EAB70 {
    unsigned char data[8];
};

inline bool operator<(const Element_828EAB70 &a, const Element_828EAB70 &b)
{
    return a.data[0] < b.data[0];
}

#endif
