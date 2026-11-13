// std::set<Element_8258F168>::_Linsert(_Node, false) from Visual C++ 2010's <xtree>:
// the insert-unique step after the node is built (func_824CC150 recipe). Link-time
// code generation folded _Leftish to false, so the function takes only the tree and
// the node. The element type is the one func_8258F168.cpp defines (std::string key
// at 0, four ints at 0x1c); its operator< compares the strings.
// basic_string::compare(off, n0, ptr, count), _Insert and string _Tidy stay calls
// to the fn_ / mangled names; the iterator's operator-- is inlined here.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#include <string>
#undef _Xlength_error

extern "C" {
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

struct Element_8258F168 {
    std::string unk0;
    int unk1C[4];
};

inline bool operator<(const Element_8258F168 &a, const Element_8258F168 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_8258F168> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef Tree::const_iterator ConstIter;

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Pair_8258EF28 {
    Tree::iterator first;
    bool second;
    Pair_8258EF28(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_8258EF28 fn_8258EF28(Tree *tree, Node *node);

struct Access_8258EF28 : Tree {
    friend Pair_8258EF28 fn_8258EF28(Tree *tree, Node *node);
};

extern "C" Pair_8258EF28 fn_8258EF28(Tree *tree, Node *node)
{
    Access_8258EF28 *t = static_cast<Access_8258EF28 *>(tree);
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
        return Pair_8258EF28(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_8258EF28(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_8258EF28(where, false);
}
