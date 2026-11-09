// std::set<Element_8265C818>::erase(const_iterator) (VC10 <xtree>), as func_828A57C0.cpp.
// The element really holds a std::string at +4 (its in-place destruction is the
// out-of-line fn_8265C338, called with &_Alval); the shared placeholder header keeps
// the element trivial, so the destroy is forwarded to that function here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_8265C818.h"

typedef std::set<Element_8265C818> Set;
typedef Set::_Mybase Tree;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8265BD58(Tree *self, Tree::_Nodeptr node);
void fn_8265B9B0(Tree *self, Tree::_Nodeptr node);
void fn_8265C338(std::allocator<Element_8265C818> *al, Element_8265C818 *ptr);
}

template <> void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::allocator<Element_8265C818>::destroy(pointer ptr)
{
    fn_8265C338(this, ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8265BD58(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8265B9B0(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
