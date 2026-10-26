// Destroys a tree and frees its sentinel through the system allocator.
// The value type is a placeholder because this routine never accesses it.
#include <set>
#include "game/Allocator_825089A0.h"
struct Element_82231B60 { int value; };
typedef std::set<Element_82231B60, std::less<Element_82231B60>, Allocator_825089A0<Element_82231B60, 0> > Set;
typedef Set::_Mybase Tree;
extern "C" void fn_82231AD8(Tree::iterator *, Tree *, Tree::const_iterator, Tree::const_iterator);
template <> __forceinline Tree::iterator Tree::erase(const_iterator first, const_iterator last)
{ _Nodeptr result; fn_82231AD8((iterator *)&result, this, first, last); return iterator(result, this); }
extern "C" void fn_82231B60(Tree *self)
{ self->~Tree(); }
