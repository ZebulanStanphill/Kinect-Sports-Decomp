// Insert or erase an 8-byte key in a std::set member (Element_828B3758 is the
// placeholder value type of func_828B3F68.cpp, whose _Linsert this calls).
#include <set>

struct __declspec(align(8)) Element_828B3758 {
    unsigned __int64 key;

    bool operator<(const Element_828B3758 &other) const
    {
        return key < other.key;
    }
};

typedef std::set<Element_828B3758> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish);

struct Iter_828B4B00 {
    Node *node;
};

// The erase this calls is folded with the one of std::set<Element_828B45A8>.
struct Element_828B45A8 {
    unsigned key;
    unsigned char pad[0x8];
};

inline bool operator<(const Element_828B45A8 &a, const Element_828B45A8 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828B45A8>::_Mybase EraseTree;

template <> EraseTree::iterator EraseTree::erase(EraseTree::const_iterator where);

struct Owner_828B4B00 {
    char pad[0x54];
    Tree items;
};

extern "C" {
Iter_828B4B00 *fn_828B3DF8(Iter_828B4B00 *result, Tree *tree, const Element_828B3758 *key);
Node *fn_828B39D8(Tree *tree);
void *fn_828B2BF8(void);
void fn_828B25C8(void *registry);
}

extern "C" void fn_828B4B00(Owner_828B4B00 *self, unsigned char add, const Element_828B3758 *key)
{
    Tree *items = &self->items;
    Iter_828B4B00 it;

    fn_828B3DF8(&it, items, key);
    if (add) {
        if (it.node == self->items._Myhead) {
            Node *node = fn_828B39D8(items);
            ::new ((void *)&node->_Myval) Element_828B3758(*key);
            items->_Linsert(node, false);
            fn_828B25C8(fn_828B2BF8());
        }
    } else {
        if (it.node != self->items._Myhead) {
            EraseTree *tree = (EraseTree *)items;

            tree->erase(EraseTree::const_iterator((EraseTree::_Nodeptr)it.node, tree));
            fn_828B25C8(fn_828B2BF8());
        }
    }
}
