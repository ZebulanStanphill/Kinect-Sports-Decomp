// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_828C2EF8 is a placeholder for the game's
// 44-byte value type; fn_828A7378, which destroys a value, shows a std::string
// at 0x0 and another tree at 0x1c.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator's destroy stays a call to fn_828A7378 and the tree's
// rotations to fn_828A1438 and fn_828A0C88; they, operator delete and
// std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828C2EF8 {
    int data[11];
};

typedef std::set<Element_828C2EF8> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828A7378(std::allocator<Element_828C2EF8> *self, Element_828C2EF8 *ptr);
void fn_828A1438(Tree *self, Node *node);
void fn_828A0C88(Tree *self, Node *node);
}

template <> __forceinline void std::allocator<Element_828C2EF8>::destroy(pointer ptr)
{
    fn_828A7378(this, ptr);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828A1438(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_828A0C88(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
