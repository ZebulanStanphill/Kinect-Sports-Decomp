// std::set<Element_82550E48>::_Linsert(_Node, _Leftish) from Visual C++ 2010's <xtree>: the
// insert-unique step after the node is built (the func_8251BFC0 recipe, here with the _Leftish
// argument kept). Element_82550E48 is the 32-byte value type of func_82550E48.cpp / func_82675040.cpp
// (a string and an int, ordered by the string). The Matching caller func_82675040.cpp calls this
// function by its fn_ name, so it stays extern "C". basic_string::compare(off, n0, ptr, count),
// the iterator's operator-- (fn_8251F2B0), _Insert and string _Tidy stay calls.
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

struct Element_82550E48 {
    std::string unk0;
    int unk1C;
};

inline bool operator<(const Element_82550E48 &a, const Element_82550E48 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_82550E48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef Tree::const_iterator ConstIter;

extern "C" __declspec(noalias) void fn_8251F2B0(ConstIter *it);

template <> __forceinline ConstIter &ConstIter::operator--()
{
    fn_8251F2B0(this);
    return *this;
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Pair_82674D78 {
    Tree::iterator first;
    bool second;
    Pair_82674D78(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82674D78 fn_82674D78(Tree *tree, Node *node, bool leftish);

struct Access_82674D78 : Tree {
    friend Pair_82674D78 fn_82674D78(Tree *tree, Node *node, bool leftish);
};

extern "C" Pair_82674D78 fn_82674D78(Tree *tree, Node *node, bool leftish)
{
    Access_82674D78 *t = static_cast<Access_82674D78 *>(tree);
    const Tree::value_type &val = t->_Myval(node);

    Tree::_Nodeptr trynode = t->_Root();
    Tree::_Nodeptr wherenode = t->_Myhead;
    bool addleft = true;
    while (!t->_Isnil(trynode)) {
        wherenode = trynode;
        if (leftish)
            addleft = !t->comp(t->_Key(trynode), t->_Kfn(val));
        else
            addleft = t->comp(t->_Kfn(val), t->_Key(trynode));
        trynode = addleft ? t->_Left(trynode) : t->_Right(trynode);
    }

    Tree::iterator where = Tree::iterator(wherenode, t);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_82674D78(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_82674D78(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_82674D78(where, false);
}
