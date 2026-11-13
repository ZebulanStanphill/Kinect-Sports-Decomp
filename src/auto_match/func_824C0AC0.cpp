// std::set<Element_824C0C30>::_Linsert(_Node, false) from Visual C++ 2010's <xtree>:
// the insert-unique step after the node is built (func_8258EF28 recipe). Link-time
// code generation folded _Leftish to false, so the function takes only the tree and
// the node. The element type is the one func_824C0C30.cpp defines (int key at 0,
// std::tr1::shared_ptr at 0x4); its operator< compares the int keys.
// _Insert and the shared_ptr's _Decref stay calls; the iterator's operator-- is inlined.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <set>
#undef _Xlength_error

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
void fn_8265CA20(void *ptr);
}

struct Element_824C0C30 {
    struct Object;
    int unk0;
    std::tr1::shared_ptr<Object> unk4;
};

inline bool operator<(const Element_824C0C30 &a, const Element_824C0C30 &b)
{
    return a.unk0 < b.unk0;
}

template <> __forceinline void std::tr1::_Ptr_base<Element_824C0C30::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef std::set<Element_824C0C30> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Pair_824C0AC0 {
    Tree::iterator first;
    bool second;
    Pair_824C0AC0(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_824C0AC0 fn_824C0AC0(Tree *tree, Node *node);

struct Access_824C0AC0 : Tree {
    friend Pair_824C0AC0 fn_824C0AC0(Tree *tree, Node *node);
};

extern "C" Pair_824C0AC0 fn_824C0AC0(Tree *tree, Node *node)
{
    Access_824C0AC0 *t = static_cast<Access_824C0AC0 *>(tree);
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
        return Pair_824C0AC0(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_824C0AC0(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_824C0AC0(where, false);
}
