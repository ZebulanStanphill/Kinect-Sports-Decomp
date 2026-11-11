// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's <xtree>
// for a std::set<Element_828CE758> (28-byte value ordered by its first word), as
// func_8287F8E8: hinted insert, otherwise through _Linsert (fn_828CE968). The iterator
// decrement fn_828CCB18 and increment fn_828A10C8 are out-of-line functions shared by
// several sets (kept as fn_ names: Matching units call them).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828CE758 {
    unsigned int key;
    int data[6];
};

inline bool operator<(const Element_828CE758 &a, const Element_828CE758 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828CE758> Set;
typedef Set::_Mybase Tree;
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
template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
