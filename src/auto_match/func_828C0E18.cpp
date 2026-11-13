// std::_Tree<Traits>::_Insert(const_iterator _Where, _Nodeptr _Node) of the
// std::set<Element_828C04A0> with the heap allocator (insert a prepared node using
// _Where as a hint), Visual C++ 2010's <xtree>. The iterator steps stay calls to
// the folded fn_828C00A0 (--) and fn_8288B4F8 (++).
#include <set>
#include "game/Allocator_825089A0.h"

struct Element_828C04A0 {
    unsigned __int64 key, value;

    bool operator<(const Element_828C04A0 &other) const
    {
        return key < other.key;
    }
};

typedef std::set<Element_828C04A0, std::less<Element_828C04A0>,
    Allocator_825089A0<Element_828C04A0, 0> > Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

extern "C" __declspec(noalias) void fn_828C00A0(Tree::const_iterator *);
extern "C" __declspec(noalias) void fn_8288B4F8(Tree::const_iterator *);

template <> __forceinline Tree::const_iterator &Tree::const_iterator::operator--()
{
    fn_828C00A0(this);
    return *this;
}

template <> __forceinline Tree::const_iterator &Tree::const_iterator::operator++()
{
    fn_8288B4F8(this);
    return *this;
}

template Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);
