// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>: links an allocated node into a std::set next to the hint _Where if
// it belongs there, and otherwise through _Linsert. Element_8251F0E8 is a
// placeholder for the game's 32-byte value type, ordered by its first word.
//
// _Insert(bool, _Nodeptr, _Nodeptr) is defined by func_8251F0E8.cpp. _Linsert
// and the iterator decrement and increment stay calls to fn_8251EFD0,
// fn_8251F2B0 and fn_825503E0 (the linker folded the iterator functions with
// other trees' ones). The game was built with link-time code generation, which
// knew that the iterator functions only change the iterator they are given;
// __declspec(noalias) tells the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_82F57E00 {
    unsigned int data[5];
};

inline bool operator<(const Element_82F57E00 &a, const Element_82F57E00 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82F57E00> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

// The pair _Linsert returns, as fn_8251EFD0 fills it in.
struct Linserted {
    Node *node;
    bool inserted;
};

extern "C" {
Linserted *fn_82F583E0(Linserted *result, Tree *self, Node *node, bool leftish);
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

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish)
{
    Linserted result;
    Linserted *done = fn_82F583E0(&result, this, node, leftish);
    return _Pairib(iterator(done->node, this), done->inserted);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);
