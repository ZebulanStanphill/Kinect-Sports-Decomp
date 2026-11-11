// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set unless an equal value is already
// present, in which case the node is freed. Element_822AC640 is the placeholder
// func_822AC640.cpp uses for the game's 8-byte value type (this tree's _Insert);
// it is ordered by its first word (unsigned).
//
// The iterator decrement stays a call to fn_82829C48, which the linker folded
// with other trees' decrements. The game was built with link-time code
// generation, which knew that the decrement only changes the iterator it is
// given; __declspec(noalias) tells the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_822AC640 {
    int data[2];
};

inline bool operator<(const Element_822AC640 &a, const Element_822AC640 &b)
{
    return (unsigned int)a.data[0] < (unsigned int)b.data[0];
}

typedef std::set<Element_822AC640> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) void fn_82829C48(Unchecked *it);
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_82829C48(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
