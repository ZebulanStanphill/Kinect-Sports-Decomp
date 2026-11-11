// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree> for the std::set<Element_8288A658> (Allocator_825089A0) of
// func_8288A658.cpp: hinted insert, otherwise through _Linsert. Element_8288A658
// is ordered by its first word (unsigned). The iterator decrement and increment
// are the out-of-line, shared fn_8288A4B0/fn_82381BC0 (kept as fn_ names).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8288A658 {
    unsigned int data[2];
};

inline bool operator<(const Element_8288A658 &a, const Element_8288A658 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_8288A658, std::less<Element_8288A658>, Allocator_825089A0<Element_8288A658, 0> > Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_8288A4B0(Unchecked *it);
__declspec(noalias) void fn_82381BC0(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8288A4B0(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82381BC0(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
