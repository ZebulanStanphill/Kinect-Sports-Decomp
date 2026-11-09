// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>, for the std::set<Element_82F57E00> whose _Linsert is
// func_82F583E0.cpp and _Insert(bool, _Nodeptr, _Nodeptr) func_82F57E00.cpp:
// links an allocated node into the set next to the hint _Where if it belongs
// there, and otherwise through _Linsert(node, false). Element_82F57E00 is a
// placeholder for the game's 20-byte value type, ordered by its first word.
//
// The iterator decrement and increment stay calls to fn_82830D60 and
// fn_82518FF0 (the linker folded them with other trees' ones). The game was
// built with link-time code generation, which knew that the iterator functions
// only change the iterator they are given; __declspec(noalias) tells the
// compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" void *fn_82F57D98(void *self, int flags);

struct Element_82F57E00 {
    unsigned int data[5];
    ~Element_82F57E00() { fn_82F57D98(this, 0); }
};

inline bool operator<(const Element_82F57E00 &a, const Element_82F57E00 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82F57E00> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_82830D60(Unchecked *it);
__declspec(noalias) void fn_82518FF0(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_82830D60(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82518FF0(this);
    return *this;
}

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);
