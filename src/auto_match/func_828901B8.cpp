// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>
// for the set of Element_8288E618 (see func_8288E618.cpp, which defines its
// _Insert). The element's operator< is fn_828B5650 and its member's destructor
// fn_828B55B0; the iterator's operator-- is the folded fn_828CCA70, declared
// noalias like the other _Tree iterator helpers (tree1). Matches only under the
// forward rename of fn_828901B8 to the member (renames/func_828901B8.txt).
#include <set>

extern "C" {
void fn_828B55B0(void *self);
bool fn_828B5650(const void *a, const void *b);
}

struct Element_8288E618 {
    struct Unk0 {
        ~Unk0() { fn_828B55B0(this); }
        int data[3];
    } unk0;

    bool operator<(const Element_8288E618 &other) const
    {
        return fn_828B5650(this, &other);
    }
};

typedef std::set<Element_8288E618> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) void fn_828CCA70(Tree::iterator *it);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template <> __forceinline Tree::iterator &Tree::iterator::operator--()
{
    fn_828CCA70(this);
    return *this;
}

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
