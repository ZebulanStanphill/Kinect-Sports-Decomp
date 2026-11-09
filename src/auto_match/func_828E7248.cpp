// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>, for
// the std::set<Element_828E7248> whose range erase is func_828E8448.cpp:
// unlinks one node, rebalances the tree, destroys the value and frees the
// node. Element_828E7248 is a placeholder for the game's value type (a key and
// a 12-byte value whose destructor is fn_828B55B0).
//
// The iterator increment stays a call to fn_828E5F60, which the linker folded
// with other trees' increments, and the rotations stay calls to fn_8289E0B0 and
// fn_8289DEB8. <xtree> calls std::_Xlength_error and std::_Xout_of_range
// directly, so their names are replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828E7248.h"

typedef std::set<Element_828E7248> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8289E0B0(Tree *self, Tree::_Nodeptr node);
void fn_8289DEB8(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_828E5F60(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828E5F60(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8289E0B0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8289DEB8(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
