#ifndef GAME_ELEMENT_828E7248_H
#define GAME_ELEMENT_828E7248_H

// Placeholder for the element type of a std::set whose single-element erase is
// func_828E7248 and range erase func_828E8448: a 16-byte value, a key word and
// a 12-byte member destroyed by fn_828B55B0 (func_828E91A8 builds such a key
// from an object's id and name). Named after an address until the real element
// type is known. The name appears in the mangled symbols.

extern "C" void fn_828B55B0(void *self);

struct Value_828E7248 {
    int data[3];
    ~Value_828E7248() { fn_828B55B0(this); }
};

struct Element_828E7248 {
    int key;
    Value_828E7248 value;
};

inline bool operator<(const Element_828E7248 &a, const Element_828E7248 &b)
{
    return a.key < b.key;
}

#endif
