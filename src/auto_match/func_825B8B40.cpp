// std::set<Element_825B8CA0>::_Linsert(_Node, false) from Visual C++ 2010's <xtree>
// (func_8258EF28 recipe) for the tree at lbl_83297034. Link-time code generation
// folded _Leftish to false and made a copy for this one tree, so the function takes
// only the node; its _Insert is the tree-less copy fn_825B8CA0 (func_825B8CA0.cpp).
// The element is the 4-byte value type func_825B8CA0.cpp names; its operator<
// compares the values unsigned.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_825B8CA0 {
    unsigned int data;
};

inline bool operator<(const Element_825B8CA0 &a, const Element_825B8CA0 &b)
{
    return a.data < b.data;
}

typedef std::set<Element_825B8CA0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

struct Iterator_825B8CA0 {
    Node *node;
    Iterator_825B8CA0(Set::iterator it) : node(it._Mynode()) {}
};

extern "C" {
void fn_8265CA20(void *ptr);
Iterator_825B8CA0 fn_825B8CA0(bool addleft, Node *where, Node *node);
extern Set lbl_83297034;
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Tree::iterator Tree::_Insert(bool addleft, _Nodeptr where, _Nodeptr node)
{
    return iterator(fn_825B8CA0(addleft, where, node).node, this);
}

struct Pair_825B8B40 {
    Tree::iterator first;
    bool second;
    Pair_825B8B40(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_825B8B40 fn_825B8B40(Node *node);

struct Access_825B8B40 : Tree {
    friend Pair_825B8B40 fn_825B8B40(Node *node);
};

extern "C" Pair_825B8B40 fn_825B8B40(Node *node)
{
    Access_825B8B40 *t = static_cast<Access_825B8B40 *>(static_cast<Tree *>(&lbl_83297034));
    const Tree::value_type &val = t->_Myval(node);

    Tree::_Nodeptr trynode = t->_Root();
    Tree::_Nodeptr wherenode = t->_Myhead;
    bool addleft = true;
    while (!t->_Isnil(trynode)) {
        wherenode = trynode;
        addleft = t->comp(t->_Kfn(val), t->_Key(trynode));
        trynode = addleft ? t->_Left(trynode) : t->_Right(trynode);
    }

    Tree::iterator where = Tree::iterator(wherenode, t);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_825B8B40(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_825B8B40(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_825B8B40(where, false);
}
