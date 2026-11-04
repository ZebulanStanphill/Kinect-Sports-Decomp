// std::_Tree_unchecked_const_iterator::operator++ from <xtree>: steps to the next node of a
// std::set<Element_8265C818>. Only that set's erase functions call it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

// game/Element_8265C818.h (inlined)
#ifndef GAME_ELEMENT_8265C818_H
#define GAME_ELEMENT_8265C818_H

// Placeholder for the element type of a std::set whose range erase is func_8265C818.
// A 0x20-byte value: the tree node layout (and so the iterator ++) depends on its size.
// Named after an address until the real element type is known. The name appears in
// the mangled symbols.

struct Element_828EF040 {
    unsigned char data[0x3d];
};

inline bool operator<(const Element_828EF040 &a, const Element_828EF040 &b)
{
    return a.data[0] < b.data[0];
}

#endif


typedef std::set<Element_828EF040> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

template Unchecked &Unchecked::operator++();
