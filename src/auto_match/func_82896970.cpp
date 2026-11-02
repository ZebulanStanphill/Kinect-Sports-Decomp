// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set unless an equal value is already
// present, in which case the value (which holds a set of its own) is destroyed
// and the node freed. Element_828961F0 and Inner_828961F0 are placeholders for
// the game's types (see func_828961F0.cpp); elements are ordered by their first
// word.
//
// _Insert is defined by func_828961F0.cpp. The iterator decrement and the inner
// set's erase stay calls to fn_828C00A0 and fn_8224ED20. The game was built with
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

struct Inner_828961F0 {
    int data[3];
};

typedef std::set<Inner_828961F0> InnerSet;
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
void fn_8224ED20(InnerTree::_Nodeptr *result, InnerTree *self, InnerTree::const_iterator first,
                 InnerTree::const_iterator last);
__declspec(noalias) void fn_828C00A0(Unchecked *it);
}

template <> __forceinline InnerTree::iterator InnerTree::erase(const_iterator first, const_iterator last)
{
    _Nodeptr result;
    fn_8224ED20(&result, this, first, last);
    return iterator(result, this);
}

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
