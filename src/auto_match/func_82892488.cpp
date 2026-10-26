// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_82892488 is a placeholder for the game's
// 28-byte value type, which has a std::deque at 0x4. Item_82892488 stands in
// for the deque's element type, which this code doesn't touch. The tree and the
// deque allocate through the object fn_825089A0 returns (see
// game/Allocator_825089A0.h); this code only frees, so the allocation constant
// doesn't matter and 0 stands in for it.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The deque's _Tidy stays a call to fn_8288C358 and the tree's rotations
// to fn_828A1AE8 and fn_8288BA70; they and std::_Xlength_error keep the names
// that C units use.

// The headers call std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Item_82892488 {
    char data;
};

typedef std::deque<Item_82892488, Allocator_825089A0<Item_82892488, 0> > Deque;

struct Element_82892488 {
    int key;
    Deque items;
};

typedef std::set<Element_82892488, std::less<Element_82892488>, Allocator_825089A0<Element_82892488, 0> > Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8288C358(Deque *self);
void fn_828A1AE8(Tree *self, Node *node);
void fn_8288BA70(Tree *self, Node *node);
}

template <> __forceinline void Deque::_Tidy()
{
    fn_8288C358(this);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828A1AE8(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8288BA70(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
