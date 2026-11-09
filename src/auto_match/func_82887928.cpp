// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's <xtree>
// for the std::set<Element_828DF458> of func_82887688/func_828DF458, as func_8287F8E8:
// hinted insert, otherwise through _Linsert. The iterator increment and decrement are
// the out-of-line fn_828EA790/fn_8288A4B0 (shared by several sets, kept as fn_ names).
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
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_8288A4B0(Unchecked *it);
__declspec(noalias) void fn_828EA790(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8288A4B0(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828EA790(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
