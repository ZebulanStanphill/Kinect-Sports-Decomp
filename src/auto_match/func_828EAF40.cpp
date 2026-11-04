// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828EA970>, clearing the whole tree when the range covers it.
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

#include "game/Allocator_825089A0.h"
#include "game/Element_828EA970.h"
#include "game/Element_828EAB70.h"

typedef std::set<Element_828EA970> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

// erase(const_iterator) is the member of the set type with the game allocator
// (Element_828EAB70); the range erase above is the same code for either allocator.
typedef std::set<Element_828EAB70, std::less<Element_828EAB70>, Allocator_825089A0<Element_828EAB70, 0> > OtherSet;
typedef OtherSet::_Mybase OtherTree;
template <> OtherTree::iterator OtherTree::erase(const_iterator where);

extern "C" {
__declspec(noalias) Unchecked *fn_828EA790(Unchecked *self);
void fn_828EA918(Tree *self);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828EA790(this);
}

template <> __forceinline void Tree::clear()
{
    fn_828EA918(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    OtherTree *t = (OtherTree *)this;
    OtherTree::iterator r = t->erase(OtherTree::const_iterator((OtherTree::_Nodeptr)where._Ptr, t));
    return iterator((Tree::_Nodeptr)r._Ptr, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
