// std::_Tree_unchecked_const_iterator<...>::operator++() from Visual C++ 2010's
// <xtree>, for the map of game/Value_8284B810.h: moves the iterator to the
// tree's next node in order.
#include <map>
#include "game/Value_8284B810.h"

typedef std::_Tree_unchecked_const_iterator<Map_8284B810::_Mybase::_Mybase> Unchecked;

template Unchecked &Unchecked::operator++();
