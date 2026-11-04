#ifndef GAME_ELEMENT_828A57C0_H
#define GAME_ELEMENT_828A57C0_H

// Placeholder for the element type of a std::set (a map entry: key, value,
// std::tr1::shared_ptr count block) named after the address of its erase(const_iterator).
// The name appears in the mangled symbols.

extern "C" void fn_822315A0(void *rep);

struct Element_828A57C0 {
    int a;
    int b;
    void *rep;
    ~Element_828A57C0() { if (rep != 0) fn_822315A0(rep); }
};

inline bool operator<(const Element_828A57C0 &a, const Element_828A57C0 &b)
{
    return a.a < b.a;
}

#endif
