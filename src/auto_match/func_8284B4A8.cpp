// std::_Tree::_Erase from Visual C++ 2010's <xtree>, for the map of
// game/Value_8284B810.h: frees a subtree, recursing to the right and walking
// to the left. The specializations call the out-of-line std::_Dest_val for the
// map's value (fn_8284A910) and operator delete (fn_8265CA20) by the names
// that C units use.
#include <map>
#include "game/Value_8284B810.h"

typedef Map_8284B810::_Mybase Tree;
typedef Map_8284B810::value_type Pair;

extern "C" {
void fn_8284A910(std::allocator<Pair> *al, Pair *value);
void fn_8265CA20(void *ptr);
}

template <> __forceinline void std::_Dest_val<std::allocator<Pair>, Pair>(std::allocator<Pair> &al, Pair *value)
{
    fn_8284A910(&al, value);
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template void Tree::_Erase(Tree::_Nodeptr);
