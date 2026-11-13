// std::set<Element_824CC2A0>::_Linsert(_Node, false) from Visual C++ 2010's <xtree>:
// the insert-unique step after the node is built. Link-time code generation
// folded _Leftish to false, so the function takes only the tree and the node.
// The element type is the one func_824CC2A0.cpp defines (std::string key at 0,
// member at 0x20 whose destructor is fn_824C9CB8); its operator< compares the
// strings. basic_string::compare(off, n0, ptr, count), the iterator's
// operator--, _Insert and string _Tidy stay calls to the fn_ / mangled names.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#include <string>
#undef _Xlength_error

extern "C" {
void fn_824C9CB8(void *self);
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

struct __declspec(align(8)) Element_824CC2A0 {
    std::string unk0;
    int unk1C;
    struct Unk20 {
        ~Unk20() { fn_824C9CB8(this); }
        int data[34];
    } unk20;
};

inline bool operator<(const Element_824CC2A0 &a, const Element_824CC2A0 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_824CC2A0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef Tree::const_iterator ConstIter;

extern "C" __declspec(noalias) void fn_824CC510(ConstIter *it);

template <> __forceinline ConstIter &ConstIter::operator--()
{
    fn_824CC510(this);
    return *this;
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

struct Pair_824CC150 {
    Tree::iterator first;
    bool second;
    Pair_824CC150(const Tree::iterator &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_824CC150 fn_824CC150(Tree *tree, Node *node);

struct Access_824CC150 : Tree {
    friend Pair_824CC150 fn_824CC150(Tree *tree, Node *node);
};

extern "C" Pair_824CC150 fn_824CC150(Tree *tree, Node *node)
{
    Access_824CC150 *t = static_cast<Access_824CC150 *>(tree);
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
        return Pair_824CC150(t->_Insert(true, wherenode, node), true);
    else
        --where;

    if (t->comp(t->_Key(where._Mynode()), t->_Kfn(val)))
        return Pair_824CC150(t->_Insert(addleft, wherenode, node), true);
    std::_Dest_val(t->_Alval, &t->_Myval(node));
    t->_Alnod.deallocate(node, 1);
    return Pair_824CC150(where, false);
}
