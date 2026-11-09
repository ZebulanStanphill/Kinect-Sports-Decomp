// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>, for
// the std::set<Element_828E4F28> whose range erase is func_828E4F28.cpp:
// unlinks the node, rebalances the tree, destroys the value (clearing its
// optional member's flag) and frees the node. The iterator increment
// (fn_828E5F60) and the rotations (fn_8289E0B0, fn_8289DEB8) stay calls to the
// out-of-line helpers the linker folded with other trees' ones.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828E4F28.h"

typedef std::set<Element_828E4F28> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) Unchecked *fn_828E5F60(Unchecked *self);
void fn_8289E0B0(Tree *self, Tree::_Nodeptr node);
void fn_8289DEB8(Tree *self, Tree::_Nodeptr node);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828E5F60(this);
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
