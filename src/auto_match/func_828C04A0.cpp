// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_828C04A0 is a placeholder for the game's
// 16-byte value type, which is 8-byte aligned. The tree allocates through the
// object fn_825089A0 returns (see game/Allocator_825089A0.h); this code only
// frees, so the allocation constant doesn't matter and 0 stands in for it.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_828C0218 and fn_8288B838; they
// and std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct __declspec(align(8)) Element_828C04A0 {
    int data[4];
};

typedef std::set<Element_828C04A0, std::less<Element_828C04A0>, Allocator_825089A0<Element_828C04A0, 0> > Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_828C0218(Tree *self, Node *node);
void fn_8288B838(Tree *self, Node *node);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828C0218(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8288B838(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
