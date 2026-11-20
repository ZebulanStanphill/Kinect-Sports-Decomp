// std::_Tree::find from Visual C++ 2010's <xtree>, for the map of
// game/Value_8284B810.h.
//
// This library calls the iterator's empty _Adopt out of line, at fn_82BA02A8
// (an empty function the linker shares between many); the unchecked iterator's
// constructor is specialised to make that call. The call takes the iterator as
// its _Iterator_base0 base, as the member call in the header does: with that
// conversion the compiler expands the constructor in both end() calls and
// calls it out of line (fn_8284A410) for lower_bound, as the original does.
//
// std::string::compare is declared without a body before <string> uses it:
// with the header's body visible the compiler tries to expand it here, gives
// up, and leaves an unused stack slot behind that the original does not have.
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

template Tree::iterator Tree::find(const std::string &);
