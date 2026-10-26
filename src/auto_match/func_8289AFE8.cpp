// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_8289AFE8 is a placeholder for the game's
// 16-byte value type; fn_8289AF80, which destroys a value, unlinks a member at
// 0x4 from a list when the word at 0xc isn't null. The tree allocates through
// the object fn_825089A0 returns (see game/Allocator_825089A0.h); this code
// only frees, so the allocation constant doesn't matter and 0 stands in for it.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator's destroy stays a call to fn_8289AF80 and the tree's
// rotations to fn_8289E0B0 and fn_8289DEB8; they and std::_Xlength_error keep
// the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8289AFE8 {
    int data[4];
};

typedef Allocator_825089A0<Element_8289AFE8, 0> Alloc;
typedef std::set<Element_8289AFE8, std::less<Element_8289AFE8>, Alloc> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8289AF80(Alloc *self, Element_8289AFE8 *ptr);
void fn_8289E0B0(Tree *self, Node *node);
void fn_8289DEB8(Tree *self, Node *node);
}

template <> __forceinline void Alloc::destroy(pointer ptr)
{
    fn_8289AF80(this, ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8289E0B0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8289DEB8(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
