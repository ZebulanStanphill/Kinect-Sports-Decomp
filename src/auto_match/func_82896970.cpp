// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set unless an equal value is already
// present, in which case the value (which holds a set of its own) is destroyed
// and the node freed. Element_828961F0 and Element_8224ED20 are placeholders for
// the game's types (see func_828961F0.cpp); elements are ordered by their first
// word.
//
// _Insert is defined by func_828961F0.cpp. The iterator decrement and the inner
// set's erase(first, last) (func_8224ED20) stay calls. The game was built with
// link-time code generation, which knew that the decrement only changes the
// iterator it is given; __declspec(noalias) tells the compiler the same, so the
// iterator can stay in a register and share its stack slot with the iterators
// _Insert returns.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Element_8224ED20.h"


typedef std::set<Element_8224ED20> InnerSet;
typedef InnerSet::_Mybase InnerTree;

struct Element_828961F0 {
    int unk0;
    InnerSet unk4;
};

inline bool operator<(const Element_828961F0 &a, const Element_828961F0 &b)
{
    return (unsigned int)a.unk0 < (unsigned int)b.unk0;
}

typedef std::set<Element_828961F0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) void fn_828C00A0(Unchecked *it);
}

template <> InnerTree::iterator InnerTree::erase(const_iterator first, const_iterator last);

template <> __forceinline void std::allocator<InnerTree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_828C00A0(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
