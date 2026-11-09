// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>, for
// the std::set<Element_828957B0> whose range erase is func_828957B0.cpp: unlinks
// the node, rebalances the tree, destroys the value and frees the node. The
// value's destruction (_Dest_val) runs fn_8288C358 on its member at offset 4
// and releases that member's block through the allocator object fn_825089A0
// returns (virtual slot 0x28), which also frees the node. The rotations
// (fn_828A1AE8, fn_8288BA70) and the iterator increment (fn_828A10C8) stay
// out-of-line calls.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828957B0.h"

typedef std::set<Element_828957B0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct AllocVt_82893138 {
    void *s[10];
    void (*release)(void *self, void *p);
};
struct Alloc_82893138 { AllocVt_82893138 *vt; };

extern "C" {
void fn_8288BA70(Tree *self, Tree::_Nodeptr node);
void fn_828A1AE8(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_828A10C8(Unchecked *it);
void fn_8288C358(Sub_82893138 *p);
Alloc_82893138 *fn_825089A0(void);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828A10C8(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    Alloc_82893138 *a = fn_825089A0();
    a->vt->release(a, ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828A1AE8(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8288BA70(this, node);
}

template <> __forceinline void std::_Dest_val(std::allocator<Element_828957B0> &al, Element_828957B0 *p)
{
    Sub_82893138 *sp = &p->sub;
    fn_8288C358(sp);
    void *q = sp->ptr;
    Alloc_82893138 *a = fn_825089A0();
    a->vt->release(a, q);
    sp->ptr = 0;
}

template Tree::iterator Tree::erase(Tree::const_iterator);
