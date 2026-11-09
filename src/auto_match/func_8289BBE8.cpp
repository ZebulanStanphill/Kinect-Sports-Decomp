// Erases from the std::set<Element_8289C9A8> every element in [*first, *last)
// whose link has no owner, through the real _Tree::erase(const_iterator)
// member, func_8289B6F8.cpp. The iterator increment stays a call to
// fn_828E5F60 (the linker folded it with other trees' ones). Converted from the
// Matching C version so that fn_8289B6F8 can take its member name; it keeps its
// fn_ name, as C units call it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_8289C9A8.h"

typedef std::set<Element_8289C9A8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" Unchecked *fn_828E5F60(Unchecked *self);

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828E5F60(this);
}

template <> Tree::iterator Tree::erase(const_iterator where);

extern "C" void fn_8289BBE8(Tree *tree, Tree::iterator *first, Tree::iterator *last)
{
    Tree::iterator it = *first;
    while (it != *last) {
        // The original tests the owner word as a signed int (cmpwi).
        if ((int)it->link.owner == 0)
            tree->erase(it++);
        else
            ++it;
    }
}
