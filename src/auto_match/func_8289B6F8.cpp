// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>, for
// the std::set<Element_8289C9A8> whose range erase is func_8289C9A8.cpp:
// unlinks the node, rebalances the tree, destroys the value and frees the node.
// Destroying the value unhooks its link from the owner's list under the guard
// fn_822B1B90 and clears a word of the guard's object after a memory barrier.
// Nodes are freed through the allocator object fn_825089A0 returns (virtual
// slot 0x28). The iterator increment (fn_828E5F60) and the rotations
// (fn_8289E0B0, fn_8289DEB8) stay calls to the out-of-line helpers.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" void __emit(unsigned int);
#define __lwsync() __emit(0x7C2004AC)

#include "game/Element_8289C9A8.h"

typedef std::set<Element_8289C9A8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Alloc_8289B6F8_vt {
    void *s[10];
    void (*release)(void *self, void *p);
};
struct Alloc_8289B6F8 { Alloc_8289B6F8_vt *vt; };

struct Guard_8289B6F8 {
    int *p;
};

extern "C" {
void fn_8289DEB8(Tree *self, Tree::_Nodeptr node);
void fn_8289E0B0(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_828E5F60(Unchecked *it);
void fn_822B1B90(Guard_8289B6F8 *g, int *p);
Alloc_8289B6F8 *fn_825089A0(void);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828E5F60(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    Alloc_8289B6F8 *a = fn_825089A0();
    a->vt->release(a, ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8289E0B0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8289DEB8(this, node);
}

template <> __forceinline void std::_Dest_val(std::allocator<Element_8289C9A8> &al, Element_8289C9A8 *p)
{
    Link_8289B6F8 *l = &p->link;
    if (l->owner != 0) {
        Guard_8289B6F8 g;
        fn_822B1B90(&g, l->owner + 1);
        l->prev->next = l->next;
        l->next->prev = l->prev;
        __lwsync();
        g.p[2] = 0;
    }
}

template Tree::iterator Tree::erase(Tree::const_iterator);
