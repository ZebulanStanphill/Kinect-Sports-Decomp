// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_82828828 is a placeholder for the game's
// 4-byte value type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_82872990 and fn_82872928; they,
// operator delete and std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_82828828 {
    int data[1];
};

typedef std::set<Element_82828828> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_82872990(Tree *self, Node *node);
void fn_82872928(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_82872990(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_82872928(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
