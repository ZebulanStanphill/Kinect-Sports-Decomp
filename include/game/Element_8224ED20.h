#ifndef GAME_ELEMENT_8224ED20_H
#define GAME_ELEMENT_8224ED20_H

// Placeholder for the element type of the network library's std::set whose range erase is
// func_8224ED20: 12 bytes (the tree's _Isnil flag is at node + 0x19), with a destructor that
// only erase(const_iterator) calls. Only the node pointers matter to the code that uses this
// header; named after an address until the real element type is known. The name appears in
// the mangled symbols.

struct Element_8224ED20 {
    int data[3];
};

inline bool operator<(const Element_8224ED20 &a, const Element_8224ED20 &b)
{
    return a.data[0] < b.data[0];
}

#endif
