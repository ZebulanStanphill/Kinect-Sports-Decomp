// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>, for
// the std::set<Element_828E8B50> whose range erase is func_828E8B50.cpp: unlinks
// the node, rebalances the tree, destroys the value's shared_ptr and frees the
// node. The shared_ptr's release stays a call to fn_822315A0, the iterator
// increment a call to the folded fn_828E5F60 and the tree's rotations calls to
// fn_8289E0B0 and fn_8289DEB8; they and operator delete keep the names that C
// units use.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <memory>
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828E8B50.h"

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
}

template <> __forceinline void std::tr1::_Ptr_base<Element_828E8B50::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef std::set<Element_828E8B50> Set;
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
