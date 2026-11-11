// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree> for the std::set<Element_82892488> (Allocator_825089A0) of
// func_82892488.cpp: hinted insert, otherwise through _Linsert. Element_82892488
// is ordered by its key (unsigned). _Linsert and the iterator decrement and
// increment stay calls to fn_82893850, fn_828CCB18 and fn_828A10C8.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Item_82892488 {
    char data;
};

typedef std::deque<Item_82892488, Allocator_825089A0<Item_82892488, 0> > Deque;

struct Element_82892488 {
    unsigned int key;
    Deque items;
};

inline bool operator<(const Element_82892488 &a, const Element_82892488 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_82892488, std::less<Element_82892488>, Allocator_825089A0<Element_82892488, 0> > Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

// The pair _Linsert returns, as fn_82893850 fills it in.
struct Linserted {
    Node *node;
    bool inserted;
};

extern "C" Linserted *fn_82893850(Linserted *result, Tree *self, Node *node, bool leftish);

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish)
{
    Linserted result;
    Linserted *done = fn_82893850(&result, this, node, leftish);
    return _Pairib(iterator(done->node, this), done->inserted);
}

typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_828CCB18(Unchecked *it);
__declspec(noalias) void fn_828A10C8(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_828CCB18(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828A10C8(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
