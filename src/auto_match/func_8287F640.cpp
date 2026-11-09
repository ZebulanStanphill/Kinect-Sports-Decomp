// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set<Element_8287EFA0> unless an equal value
// is already present, in which case the node's value is destroyed and the node
// freed (as func_82880A10.cpp). Element_8287EFA0 is the placeholder of
// func_8287EFA0.cpp: 240 bytes, 8-byte aligned, ordered by its first word
// (unsigned), with a member at 0x8 whose destructor is fn_8287E918.
//
// _Insert is this tree's own (func_8287EFA0), so it stays a call. The iterator
// decrement stays a call to fn_8287CAA8; the game was built with link-time code
// generation, which knew that the decrement only changes the iterator it is
// given; __declspec(noalias) tells the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_8287E918(void *self);
}

struct __declspec(align(8)) Element_8287EFA0 {
    unsigned key;
    int unk4;
    struct Unk8 {
        ~Unk8() { fn_8287E918(this); }
        int data[58];
    } unk8;
};

inline bool operator<(const Element_8287EFA0 &a, const Element_8287EFA0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8287EFA0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) void fn_8287CAA8(Unchecked *it);
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8287CAA8(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
