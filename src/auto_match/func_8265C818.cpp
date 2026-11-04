// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_8265C818>, clearing the whole tree when the range covers it.
// clear is the original's out-of-line helper; iterator ++ and erase(const_iterator) are the
// members of this set type (func_8265BA28, func_8265C388).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_8265C818.h"

typedef std::set<Element_8265C818> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" void fn_8265C7C0(Tree *self);

template <> __declspec(noalias) Unchecked &Unchecked::operator++();

template <> __forceinline void Tree::clear()
{
    fn_8265C7C0(this);
}

template <> Tree::iterator Tree::erase(const_iterator where);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
