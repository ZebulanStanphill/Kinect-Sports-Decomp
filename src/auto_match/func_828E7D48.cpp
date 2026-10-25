// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_828E7D48 is a placeholder for the game's
// 16-byte value type, which has a std::tr1::shared_ptr at 0x8.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_8289E0B0 and fn_8289DEB8, and
// std::tr1::_Ref_count_base::_Decref to fn_822315A0; they, operator delete and
// std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <set>
#undef _Xlength_error

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
}

struct Element_828E7D48 {
    struct Object;
    int unk0[2];
    std::tr1::shared_ptr<Object> unk8;
};

template <> __forceinline void std::tr1::_Ptr_base<Element_828E7D48::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef std::set<Element_828E7D48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8289E0B0(Tree *self, Node *node);
void fn_8289DEB8(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8289E0B0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8289DEB8(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
