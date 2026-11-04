namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range
#include "game/Allocator_825089A0.h"

#include "game/Element_828EAB70.h"

typedef std::set<Element_828EAB70, std::less<Element_828EAB70>, Allocator_825089A0<Element_828EAB70, 0> > Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_82880698(Tree *self, Tree::_Nodeptr node);
void fn_82880620(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_828EA790(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828EA790(this);
    return *this;
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
