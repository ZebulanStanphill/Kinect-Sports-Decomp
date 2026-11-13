// std::_Tree<Traits>::erase(const_iterator) from <xtree>, for the
// std::set<Element_82887890> whose range erase is func_82887890.cpp. The node
// allocator frees through the name C units use for operator delete; the
// rotations and the iterator ++ are the original's out-of-line helpers (the ++,
// fn_828EA790, is shared with other containers and keeps its name).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_82887890.h"

typedef std::set<Element_82887890> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_82880698(Tree *self, Tree::_Nodeptr node);
void fn_82880620(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) Unchecked *fn_828EA790(Unchecked *self);
}

template <> void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828EA790(this);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_82880698(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_82880620(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
