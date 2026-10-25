// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_8287EFA0 is a placeholder for the game's
// 240-byte value type, which is 8-byte aligned. It has a member at 0x8 whose
// destructor is fn_8287E918.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_8287CE60 and fn_8287CB58; they,
// operator delete and std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_8287E918(void *self);
}

struct __declspec(align(8)) Element_8287EFA0 {
    int unk0[2];
    struct Unk8 {
        ~Unk8() { fn_8287E918(this); }
        int data[58];
    } unk8;
};

typedef std::set<Element_8287EFA0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8287CE60(Tree *self, Node *node);
void fn_8287CB58(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8287CE60(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8287CB58(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
