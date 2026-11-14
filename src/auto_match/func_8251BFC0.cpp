// std::set<Element_8251C118>::_Linsert(_Node, false) from Visual C++ 2010's <xtree>:
// the insert-unique step after the node is built (func_824CC150 recipe). Link-time
// code generation folded _Leftish to false, so the function takes only the tree and
// the node. The element type is the one of game/Element_8251C118.h (a std::string
// key, then a std::tr1::shared_ptr and a flag); its operator< compares the
// strings. basic_string::compare(off, n0, ptr, count), the iterator's operator--
// (fn_8251C300), _Insert, string _Tidy and the shared_ptr _Decref stay calls.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <set>
#include <string>
#undef _Xlength_error
#include "game/Element_8251C118.h"

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
void fn_82230300(std::string *self, bool built, unsigned int newsize);
int fn_8260D428(const std::string *self, unsigned int off, unsigned int n0, const char *ptr,
                unsigned int count);
void fn_8265CA20(void *ptr);
}

template <> __forceinline void std::string::_Tidy(bool built, std::string::size_type newsize)
{
    fn_82230300(this, built, newsize);
}

template <> __forceinline int std::string::compare(std::string::size_type off, std::string::size_type n0,
                                                   const char *ptr, std::string::size_type count) const
{
    return fn_8260D428(this, off, n0, ptr, count);
}

template <> __forceinline void std::tr1::_Ptr_base<Mapped_8251C118::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef Set_8251C118::_Mybase Tree;
typedef Tree::_Node Node;
typedef Tree::const_iterator ConstIter;

extern "C" __declspec(noalias) void fn_8251C300(ConstIter *it);

template <> __forceinline ConstIter &ConstIter::operator--()
{
    fn_8251C300(this);
    return *this;
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Pair_8251BFC0 {
    Tree::iterator first;
    bool second;
    Pair_8251BFC0(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_8251BFC0 fn_8251BFC0(Tree *tree, Node *node);

struct Access_8251BFC0 : Tree {
    friend Pair_8251BFC0 fn_8251BFC0(Tree *tree, Node *node);
};

extern "C" Pair_8251BFC0 fn_8251BFC0(Tree *tree, Node *node)
{
    Access_8251BFC0 *t = static_cast<Access_8251BFC0 *>(tree);
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
        return Pair_8251BFC0(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_8251BFC0(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_8251BFC0(where, false);
}
