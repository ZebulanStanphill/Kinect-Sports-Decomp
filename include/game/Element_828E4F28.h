#ifndef GAME_ELEMENT_828E4F28_H
#define GAME_ELEMENT_828E4F28_H

// Placeholder for the element type of a std::set whose range erase is
// func_828E4F28 and single-element erase func_828A64E0: a 16-byte value, an
// unsigned key and an optional-like member whose destructor clears its flag at
// offset 4 of the value. Named after an address until the real element type is
// known. The name appears in the mangled symbols.

struct Optional_828A64E0 {
    bool init;
    unsigned data[2];
    ~Optional_828A64E0()
    {
        if (init) {
            init = false;
        }
    }
};

struct Element_828E4F28 {
    unsigned key;
    Optional_828A64E0 value;
};

inline bool operator<(const Element_828E4F28 &a, const Element_828E4F28 &b)
{
    return a.key < b.key;
}

#endif
