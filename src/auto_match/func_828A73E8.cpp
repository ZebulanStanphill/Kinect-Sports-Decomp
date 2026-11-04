namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A57C0.h"
#include "game/Element_828A73E8.h"

typedef InnerSet_828A73E8 InnerSet;
typedef InnerSet::_Mybase InnerTree;

typedef std::set<Element_828A73E8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

// the inner set's range erase is func_828A6130
template <> InnerTree::iterator InnerTree::erase(const_iterator, const_iterator);

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828A1AE8(Tree *self, Tree::_Nodeptr node);
void fn_8288BA70(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_828A10C8(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828A10C8(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::allocator<InnerTree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828A1AE8(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8288BA70(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
