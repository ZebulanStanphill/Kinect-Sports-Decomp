// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_825B8CA0 is a placeholder for the game's
// 4-byte value type. The game's link-time code generation made a copy of
// _Insert for the tree at lbl_83297034, so this version doesn't take the tree,
// and copies of the tree's rotations, fn_825B8A60 and fn_825B8AD0, which take
// only the node.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The rotations, operator delete and std::_Xlength_error keep the names
// that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_825B8CA0 {
    int data;
};

typedef std::set<Element_825B8CA0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_825B8A60(Node *node);
void fn_825B8AD0(Node *node);
extern Set lbl_83297034;
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_825B8A60(node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_825B8AD0(node);
}

// _Insert is protected
struct Access : Set {
    using Tree::_Insert;
};

// A C function can't return a class template, so the iterator is returned as
// this class. Like the iterator, it isn't a POD type, so it is returned
// through a hidden pointer.
struct Iterator_825B8CA0 {
    Node *node;
    Iterator_825B8CA0(Set::iterator it) : node(it._Mynode()) {}
};

extern "C" Iterator_825B8CA0 fn_825B8CA0(bool addleft, Node *where, Node *node)
{
    return static_cast<Access &>(lbl_83297034)._Insert(addleft, where, node);
}
