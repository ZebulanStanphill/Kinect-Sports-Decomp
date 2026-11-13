// std::map<std::string, T>::clear (std::_Tree::clear) from Visual C++ 2010's
// <xtree>, for the map of game/Value_8284B810.h: erases every node and resets
// the head. _Erase (func_8284B4A8.cpp) is called out of line, but its body has
// to be visible here: the compiler tries to inline it, gives up because it
// recurses, and leaves an unused stack slot behind as the original did.
#include <map>
#include "game/Value_8284B810.h"

typedef Map_8284B810::_Mybase Tree;

template void Tree::clear();
