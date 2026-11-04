#ifndef GAME_ELEMENT_828CE758_H
#define GAME_ELEMENT_828CE758_H

// Placeholder for the element type of a std::set (28-byte value) whose entries hold
// an inner std::set<Element_828A57C0> at 0xc (include <set> and
// "game/Element_828A57C0.h" first). The name appears in the mangled symbols.

typedef std::set<Element_828A57C0> InnerSet_828CE758;

struct Element_828CE758 {
    int unk0[3];
    InnerSet_828CE758 unkC;
};

#endif
