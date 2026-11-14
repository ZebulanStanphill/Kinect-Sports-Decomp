// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>, for the tree of game/Element_8251C118.h: links an allocated node in
// next to the hint _Where if it belongs there, and otherwise through _Linsert.
//
// _Insert(bool, _Nodeptr, _Nodeptr) is func_8251C118.cpp. _Linsert
// (fn_8251BFC0, whose _Leftish argument link-time code generation removed),
// the iterator's decrement (fn_8251C300) and increment (fn_82250928, which the
// linker folded with other trees' ones) and the string comparison stay calls.
// Link-time code generation knew that the increment only changes the iterator
// it is given; __declspec(noalias) tells the compiler the same.
#include "game/Element_8251C118.h"

typedef Set_8251C118::_Mybase Tree;
typedef Tree::_Node Node;
typedef Tree::const_iterator ConstIter;

// The pair _Linsert returns, as fn_8251BFC0 fills it in.
struct Linserted_8251BD48 {
    Node *node;
    bool inserted;
};

extern "C" {
int fn_8260D428(const std::string *self, unsigned int off, unsigned int n0, const char *ptr,
                unsigned int count);
ConstIter *fn_8251C300(ConstIter *it);
__declspec(noalias) ConstIter *fn_82250928(ConstIter *it);
Linserted_8251BD48 *fn_8251BFC0(Linserted_8251BD48 *result, Tree *self, Node *node);
}

template <> __forceinline int std::string::compare(std::string::size_type off, std::string::size_type n0,
                                                   const char *ptr, std::string::size_type count) const
{
    return fn_8260D428(this, off, n0, ptr, count);
}

template <> __forceinline ConstIter &ConstIter::operator--()
{
    return *fn_8251C300(this);
}

template <> __forceinline ConstIter &ConstIter::operator++()
{
    return *fn_82250928(this);
}

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool)
{
    Linserted_8251BD48 result;
    return _Pairib(iterator(fn_8251BFC0(&result, this, node)->node, this), false);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(Tree::const_iterator, Tree::_Nodeptr);
