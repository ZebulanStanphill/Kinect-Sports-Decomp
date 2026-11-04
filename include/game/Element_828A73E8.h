#ifndef GAME_ELEMENT_828A73E8_H
#define GAME_ELEMENT_828A73E8_H

// Placeholder for the element type of a std::set whose erase(const_iterator) is
// func_828A73E8 and whose entries hold an inner std::set<Element_828A57C0>
// (include <set> and "game/Element_828A57C0.h" first).

typedef std::set<Element_828A57C0> InnerSet_828A73E8;

struct Element_828A73E8 {
    unsigned char pad[12];
    InnerSet_828A73E8 inner;
};

inline bool operator<(const Element_828A73E8 &a, const Element_828A73E8 &b)
{
    return a.pad[0] < b.pad[0];
}

#endif
