// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's <xtree>
// for the std::set<Element_828CDD30> of func_828CE388, as func_8287F8E8: hinted insert,
// otherwise through _Linsert (fn_828CDFB8). The iterator decrement is the out-of-line
// fn_828CCA70 (kept as an fn_ name: Matching units call it); the increment is the folded
// set<Element_828A57C0> iterator operator++ the original calls.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828CDD30 {
    unsigned int key;
    int data[2];
};

inline bool operator<(const Element_828CDD30 &a, const Element_828CDD30 &b)
{
    return a.key < b.key;
}

struct Element_828A57C0;

typedef std::set<Element_828CDD30> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tset_traits<Element_828A57C0,
    std::less<Element_828A57C0>, std::allocator<Element_828A57C0>, false> > > Unchecked_828A57C0;

extern "C" __declspec(noalias) void fn_828CCA70(Unchecked *it);

template <> __declspec(noalias) Unchecked_828A57C0 &Unchecked_828A57C0::operator++();

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_828CCA70(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    ++*reinterpret_cast<Unchecked_828A57C0 *>(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
