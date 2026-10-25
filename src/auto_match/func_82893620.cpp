// std::_Tree<Traits>::_Insert(bool, _Nodeptr, _Nodeptr) from Visual C++ 2010's
// <xtree>, which std::set and std::map share. It links a new node into the tree
// and rebalances the tree. Element_82893620 is a placeholder for the game's
// 64-byte value type, which has a std::string at 0x4 and a std::tr1::shared_ptr
// at 0x34.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The tree's rotations stay calls to fn_8288B980 and fn_8288B9F8, and
// std::tr1::_Ref_count_base::_Decref to fn_822315A0; they, operator delete and
// std::_Xlength_error keep the names that C units use.

// <xtree> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <set>
#include <string>
#undef _Xlength_error

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822315A0(std::tr1::_Ref_count_base *rep);
}

template <> void std::allocator<char>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

struct Element_82893620 {
    struct Object;
    int unk0;
    struct Unk4 {
        std::string unk0;
        int unk1C[5];
        std::tr1::shared_ptr<Object> unk30;
        int unk38;
    } unk4;
};

template <> __forceinline void std::tr1::_Ptr_base<Element_82893620::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef std::set<Element_82893620> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8288B980(Tree *self, Node *node);
void fn_8288B9F8(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8288B980(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8288B9F8(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
