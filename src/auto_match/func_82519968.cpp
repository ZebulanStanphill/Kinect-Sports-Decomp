// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_82519968 is a placeholder for the game's
// 20-byte value type, which has a std::set at 0x4. When the tree is too big,
// destroying the new node's value erases everything in that inner set and
// frees its head node.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The inner set's erase(first, last) stays a call to fn_825188C8 (it
// returns its iterator through a pointer that nothing reads), and the tree's
// rotations stay calls to fn_82829BE0 and fn_82825658. They, operator delete
// and std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

// The inner set's 92-byte value type (a placeholder; it holds a std::string at
// 0xc and another member at 0x44, which only fn_825188C8 destroys).
struct Inner_82519968 {
    int data[23];
};

typedef std::set<Inner_82519968> InnerSet;
typedef InnerSet::_Mybase InnerTree;

struct Element_82519968 {
    int unk0;
    InnerSet unk4;
};

typedef std::set<Element_82519968> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_825188C8(InnerTree::_Nodeptr *result, InnerTree *self, InnerTree::const_iterator first,
                 InnerTree::const_iterator last);
void fn_82829BE0(Tree *self, Node *node);
void fn_82825658(Tree *self, Node *node);
}

template <> __forceinline InnerTree::iterator InnerTree::erase(const_iterator first, const_iterator last)
{
    _Nodeptr result;
    fn_825188C8(&result, this, first, last);
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
    fn_82829BE0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_82825658(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
