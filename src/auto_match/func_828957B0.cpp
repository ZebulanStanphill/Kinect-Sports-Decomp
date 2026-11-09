// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828957B0>, clearing the whole tree when the range covers it.
// clear and iterator ++ are the original's out-of-line helpers; erase(const_iterator)
// is the real member, func_82893138.cpp.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828957B0.h"

typedef std::set<Element_828957B0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) Unchecked *fn_828A10C8(Unchecked *self);
void fn_82894B30(Tree *self);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828A10C8(this);
}

template <> __forceinline void Tree::clear()
{
    fn_82894B30(this);
}

template <> Tree::iterator Tree::erase(const_iterator where);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
