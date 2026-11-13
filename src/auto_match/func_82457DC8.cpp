// std::set<Element_82457F28>::_Linsert(_Node, false) from Visual C++ 2010's <xtree>:
// the insert-unique step after the node is built (func_8258EF28 recipe). Link-time
// code generation folded _Leftish to false, so the function takes only the tree and
// the node. The element type is the one func_82457F28.cpp defines (36 bytes); its
// operator< compares the first int.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_8265CA20(void *ptr);
}

struct Element_82457F28 {
    int data[9];
};

inline bool operator<(const Element_82457F28 &a, const Element_82457F28 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82457F28> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Pair_82457DC8 {
    Tree::iterator first;
    bool second;
    Pair_82457DC8(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82457DC8 fn_82457DC8(Tree *tree, Node *node);

struct Access_82457DC8 : Tree {
    friend Pair_82457DC8 fn_82457DC8(Tree *tree, Node *node);
};

extern "C" Pair_82457DC8 fn_82457DC8(Tree *tree, Node *node)
{
    Access_82457DC8 *t = static_cast<Access_82457DC8 *>(tree);
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
        return Pair_82457DC8(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_82457DC8(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_82457DC8(where, false);
}
