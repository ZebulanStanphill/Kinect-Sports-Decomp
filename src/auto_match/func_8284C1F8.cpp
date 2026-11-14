// Empties the std::map of game/Value_8284B810.h with erase(begin(), end()),
// the first step of Visual C++ 2010's std::_Tree::_Tidy. erase(first, last)
// is func_8284C020.cpp. This library calls the iterator's empty _Adopt out of
// line, at fn_82BA02A8 (an empty function the linker shares between many); the
// iterator's constructor is specialised to make that call.
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

template <> Tree::iterator Tree::erase(Tree::const_iterator, Tree::const_iterator);

extern "C" void fn_8284C1F8(Tree *tree)
{
    tree->erase(tree->begin(), tree->end());
}
