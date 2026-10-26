// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_828961F0 is a placeholder for the game's
// 20-byte value type, which has a std::set at 0x4. When the tree is too big,
// destroying the new node's value erases everything in that inner set and
// frees its head node.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The inner set's erase(first, last) stays a call to fn_8224ED20 (it
// returns its iterator through a pointer that nothing reads), and the tree's
// rotations stay calls to fn_828C0218 and fn_8288B838. They, operator delete
// and std::_Xlength_error keep the names that C units use. This copy of
// _Insert was compiled with /O2.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

// The inner set's 12-byte value type (a placeholder; the member at 0x0 has a
// destructor, which only fn_8224ED20 calls).
struct Inner_828961F0 {
    int data[3];
};

typedef std::set<Inner_828961F0> InnerSet;
typedef InnerSet::_Mybase InnerTree;

struct Element_828961F0 {
    int unk0;
    InnerSet unk4;
};

typedef std::set<Element_828961F0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8224ED20(InnerTree::_Nodeptr *result, InnerTree *self, InnerTree::const_iterator first,
                 InnerTree::const_iterator last);
void fn_828C0218(Tree *self, Node *node);
void fn_8288B838(Tree *self, Node *node);
}

template <> __forceinline InnerTree::iterator InnerTree::erase(const_iterator first, const_iterator last)
{
    _Nodeptr result;
    fn_8224ED20(&result, this, first, last);
    return iterator(result, this);
}

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
    fn_828C0218(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8288B838(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
