// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_824A32F8 is a placeholder for the game's
// 36-byte value type, which has a std::string at 0x0.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_822CA028 and fn_822CA090, and
// std::string's _Tidy to fn_82230300; they, operator delete and
// std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#include <string>
#undef _Xlength_error

extern "C" {
void fn_82230300(std::string *self, bool built, unsigned int newsize);
}

template <> __forceinline void std::string::_Tidy(bool built, std::string::size_type newsize)
{
    fn_82230300(this, built, newsize);
}

struct Element_824A32F8 {
    std::string unk0;
    int unk1C[2];
};

typedef std::set<Element_824A32F8> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822CA028(Tree *self, Node *node);
void fn_822CA090(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_822CA028(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_822CA090(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
