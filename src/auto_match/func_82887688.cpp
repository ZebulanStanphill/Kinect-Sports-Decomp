// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set unless an equal value is already
// present, in which case the node is freed. Element_828DF458 is a placeholder
// for the game's 8-byte value type, ordered by its first word (signed).
//
// _Insert is defined by func_828DF458.cpp; the iterator decrement stays a call
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

struct Element_828DF458 {
    int data[2];
};

inline bool operator<(const Element_828DF458 &a, const Element_828DF458 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_828DF458> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) void fn_8288A4B0(Unchecked *it);
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8288A4B0(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
