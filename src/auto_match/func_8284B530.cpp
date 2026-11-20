// std::_Tree::_Linsert(_Nodeptr, bool), the insert of a node without a hint, from Visual C++ 2010's
// <xtree>, for the map of game/Value_8284B810.h.
//
// As in the map's find: this library calls the iterator's empty _Adopt out of
// line (fn_82BA02A8), so the unchecked iterator's constructor is specialised to
// make that call on the iterator's _Iterator_base0 base, and
// std::string::compare is declared without a body so that no failed inline
// attempt leaves an unused stack slot.
#include <xstring>

template <> int std::string::compare(const std::string &) const;

#include <map>
#include "game/Value_8284B810.h"

typedef Map_8284B810::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" void fn_82BA02A8(const void *it, const void *cont);

template <>
inline Unchecked::_Tree_unchecked_const_iterator(Tree::_Nodeptr node, const Tree::_Mybase *cont) : _Ptr(node)
{
    fn_82BA02A8(static_cast<std::_Iterator_base0 *>(this), cont);
}

template Tree::_Pairib Tree::_Linsert(Tree::_Nodeptr, bool);
