// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>, for
// the std::set<Element_828EF040> whose range erase is func_828EF4E8.cpp: unlinks
// the node, rebalances the tree and frees the node. The rotations (fn_828EE930,
// fn_828EE9A8), the iterator increment and operator delete (fn_8265CA20) are
// the original's out-of-line helpers.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828EF040.h"

typedef std::set<Element_828EF040> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828EE930(Tree *self, Tree::_Nodeptr node);
void fn_828EE9A8(Tree *self, Tree::_Nodeptr node);
}

template <> __declspec(noalias) Unchecked &Unchecked::operator++();

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828EE930(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_828EE9A8(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
