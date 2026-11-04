// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_828CE758 is a placeholder for the game's
// 28-byte value type, which has a std::set at 0xc. When the tree is too big,
// destroying the new node's value erases everything in that inner set and
// frees its head node.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The inner set's erase(first, last) is the std::_Tree member of func_828A6130,
// and the tree's rotations stay calls to fn_828A1AE8 and fn_8288BA70. They,
// operator delete and std::_Xlength_error keep the names that C units use. This copy of
// _Insert was compiled with /O2.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

// The inner set's 12-byte value type (a placeholder; it holds a
// std::tr1::shared_ptr at 0x8, which the inner set's erase destroys).
#include "game/Element_828A57C0.h"

#include "game/Element_828CE758.h"

typedef InnerSet_828CE758 InnerSet;
typedef InnerSet::_Mybase InnerTree;

typedef std::set<Element_828CE758> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828A1AE8(Tree *self, Node *node);
void fn_8288BA70(Tree *self, Node *node);
}

// out of line: func_828A6130
template <> InnerTree::iterator InnerTree::erase(const_iterator, const_iterator);

template <> void std::allocator<InnerTree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
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

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
