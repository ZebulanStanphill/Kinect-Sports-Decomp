// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree> for the std::set<Element_828961F0> of func_828961F0.cpp: hinted
// insert, otherwise through _Linsert. Element_828961F0 is ordered by its first
// word (unsigned). The iterator decrement and increment are the out-of-line,
// shared fn_828C00A0/fn_8288B4F8 (kept as fn_ names).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Inner_828961F0 {
    int data[3];
};

typedef std::set<Inner_828961F0> InnerSet;

struct Element_828961F0 {
    unsigned int unk0;
    InnerSet unk4;
};

inline bool operator<(const Element_828961F0 &a, const Element_828961F0 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_828961F0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_828C00A0(Unchecked *it);
__declspec(noalias) void fn_8288B4F8(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_828C00A0(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_8288B4F8(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
