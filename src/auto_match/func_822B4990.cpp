// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_822B4990 is a placeholder for the game's
// 64-byte value type, which is 8-byte aligned. It has a member at 0x10 whose
// destructor is fn_822B4040.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_824CB5D0 and fn_824CB638; they,
// operator delete and std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_822B4040(void *self);
}

struct __declspec(align(8)) Element_822B4990 {
    int unk0[4];
    struct Unk10 {
        ~Unk10() { fn_822B4040(this); }
        int data[12];
    } unk10;
};

typedef std::set<Element_822B4990> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_824CB5D0(Tree *self, Node *node);
void fn_824CB638(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_824CB5D0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_824CB638(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
