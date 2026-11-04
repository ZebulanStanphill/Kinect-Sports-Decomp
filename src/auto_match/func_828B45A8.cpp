// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828B45A8>, clearing the whole tree when the range covers it.
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

#include "game/Element_828B45A8.h"

typedef std::set<Element_828B45A8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Iter_828B45A8 {
    Tree::_Nodeptr node;
};

extern "C" {
void fn_828B40E8(Tree *self);
Iter_828B45A8 *fn_828B30E8(Iter_828B45A8 *out, Tree *self, Tree::_Nodeptr node);
}

// The original calls the (identical) ++ of Element_828A57C0's iterator.
#include "game/Element_828A57C0.h"
typedef std::set<Element_828A57C0> OtherSet;
typedef std::_Tree_unchecked_const_iterator<OtherSet::_Mybase::_Mybase> OtherUnchecked;
template <> __declspec(noalias) OtherUnchecked &OtherUnchecked::operator++();
template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *(Unchecked *)&++*(OtherUnchecked *)this;
}

template <> __forceinline void Tree::clear()
{
    fn_828B40E8(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Iter_828B45A8 out;
    Iter_828B45A8 *r = fn_828B30E8(&out, this, where._Ptr);
    return iterator(r->node, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
