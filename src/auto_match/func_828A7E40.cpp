// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828A73E8>, clearing the whole tree when the range covers it.
// clear, iterator ++ and erase(const_iterator) are the original's out-of-line helpers.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A57C0.h"
#include "game/Element_828A73E8.h"

// A std::set whose entries hold an inner set: its erase(const_iterator) is func_828A73E8.
typedef std::set<Element_828A73E8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) Unchecked *fn_828A10C8(Unchecked *self);
void fn_828A7D90(Tree *self);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828A10C8(this);
}

template <> __forceinline void Tree::clear()
{
    fn_828A7D90(this);
}

// out of line: func_828A73E8
template <> Tree::iterator Tree::erase(const_iterator where);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
