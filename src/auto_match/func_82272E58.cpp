// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>:
// unlinks one node of a std::set, rebalances the tree and frees the node.
// Element_8225EC58 is a placeholder for the game's 12-byte value type.
//
// The iterator increment stays a call to fn_82248B90, which the linker folded
// with the increments of many other trees, and the rotations stay calls to
// fn_822B5400 and fn_824C0808. The game was built with link-time code
// generation, which knew that the increment only changes the iterator it is
// given; __declspec(noalias) tells the compiler the same. <xtree> calls std::_Xlength_error and
// std::_Xout_of_range directly, so their names are replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_82272E58 {
    int data[21];
};

inline bool operator<(const Element_82272E58 &a, const Element_82272E58 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82272E58> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822732F8(Tree *self, Tree::_Nodeptr node);
void fn_82273360(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_82273428(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82273428(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_822732F8(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_82273360(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
