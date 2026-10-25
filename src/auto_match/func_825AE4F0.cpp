// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_825AE4F0 is a placeholder for the game's
// 12-byte value type, which has a member at 0x0 whose destructor is
// fn_828B55B0.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_822B5400 and fn_824C0808; they,
// operator delete and std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_828B55B0(void *self);
}

struct Element_825AE4F0 {
    struct Unk0 {
        ~Unk0() { fn_828B55B0(this); }
        int data[3];
    } unk0;
};

typedef std::set<Element_825AE4F0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822B5400(Tree *self, Node *node);
void fn_824C0808(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_822B5400(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_824C0808(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
