// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>:
// links an allocated node into a std::set unless an equal value is already
// present, in which case the node is freed. Element_82880A10 is a placeholder
// for the game's 8-byte value type, ordered by its first word (unsigned).
//
// The linker folded this tree's _Insert with the one func_828DF458.cpp defines
// for Element_828DF458 (a signed key; the code does not compare), so _Insert
// forwards to that one. The iterator decrement stays a call
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

struct Element_82880A10 {
    unsigned int key;
    void *object;
    Element_82880A10(unsigned int k, void *o) : key(k), object(o) {}
    Element_82880A10(const Element_82880A10 &o) : key(o.key), object(o.object) {}
};

inline bool operator<(const Element_82880A10 &a, const Element_82880A10 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828DF458>::_Mybase FoldedTree;
typedef std::set<Element_82880A10> Set;
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

template <> FoldedTree::iterator FoldedTree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Folded : FoldedTree {
    using FoldedTree::_Insert;
};

template <> __forceinline Tree::iterator Tree::_Insert(bool addleft, _Nodeptr where, _Nodeptr node)
{
    Folded *folded = (Folded *)this;
    return iterator((_Nodeptr)folded->_Insert(addleft, (Folded::_Nodeptr)where, (Folded::_Nodeptr)node)._Mynode(), this);
}

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
