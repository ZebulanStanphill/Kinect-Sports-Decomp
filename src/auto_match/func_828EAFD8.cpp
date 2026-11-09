// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set unless an equal value is already
// present, in which case the node is freed. Element_828EA970 is a placeholder
// for the game's value type, ordered by its first word.
//
// _Insert is defined by func_828EA970.cpp; the iterator decrement stays a call
// to fn_8288A4B0, which the linker folded with other trees' decrements. The
// game was built with link-time code generation, which knew that the decrement
// only changes the iterator it is given; __declspec(noalias) tells the compiler
// the same, so the iterator can stay in a register and share its stack slot
// with the iterators _Insert returns.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_828EA970 {
    unsigned int key;
    unsigned int value;
};

inline bool operator<(const Element_828EA970 &a, const Element_828EA970 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828EA970, std::less<Element_828EA970>, Allocator_825089A0<Element_828EA970, 0> > Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" __declspec(noalias) void fn_8288A4B0(Unchecked *it);

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8288A4B0(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
