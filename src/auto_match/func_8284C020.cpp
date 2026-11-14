// std::map<std::string, T>::erase(first, last) (std::_Tree::erase) from Visual
// C++ 2010's <xtree>, for the map of game/Value_8284B810.h: clears the whole
// tree when the range is all of it, and otherwise erases node by node.
//
// clear (func_8284B810.cpp), erase(where) (func_8284ADC8) and the unchecked
// iterator's operator++ (func_8284A128.cpp) are called out of line, but the
// headers' bodies have to be visible here: the compiler tries to inline them,
// gives up, and leaves unused stack slots behind as the original did. This
// library calls the iterator's empty _Adopt out of line, at fn_82BA02A8 (an
// empty function the linker shares between many); the iterator's constructor
// is specialised to make that call.
#include <map>
#include "game/Value_8284B810.h"

typedef Map_8284B810::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" void fn_82BA02A8(const void *it, const void *cont);

template <> __forceinline Unchecked::_Tree_unchecked_const_iterator(Tree::_Nodeptr node, const Tree::_Mybase *cont)
    : _Ptr(node)
{
    fn_82BA02A8(this, cont);
}

template Tree::iterator Tree::erase(Tree::const_iterator, Tree::const_iterator);
