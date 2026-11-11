// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>: hinted insert into a std::set, otherwise through _Linsert.
// Element_828CA708 is a placeholder for the game's 56-byte value type (8-byte
// aligned: the value sits at node + 0x10, _Isnil at + 0x49), ordered by its
// first word (unsigned). _Insert(bool, _Nodeptr, _Nodeptr) and _Linsert are
// fn_828C9DB8 and fn_828CA450 (renamed with this unit); the iterator decrement
// and increment are the out-of-line, shared fn_828C8D20/fn_828C8C90.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct __declspec(align(8)) Element_828CA708 {
    unsigned int key;
    int data[13];
};

inline bool operator<(const Element_828CA708 &a, const Element_828CA708 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828CA708> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_828C8D20(Unchecked *it);
__declspec(noalias) void fn_828C8C90(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_828C8D20(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828C8C90(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
