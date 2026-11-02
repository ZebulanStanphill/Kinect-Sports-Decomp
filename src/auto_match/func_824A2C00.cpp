// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>:
// unlinks one node of a std::set, rebalances the tree, destroys the value and
// frees the node. Element_824A2C00 is a placeholder for the game's 36-byte
// value type, which begins with a string (its destructor is the string's
// cleanup, fn_82230300).
//
// The iterator increment stays a call to fn_824A30C8, which the linker folded
// with other trees' increments, and the rotations stay calls to fn_822CA028 and
// fn_822CA090. The game was built with link-time code generation, which knew
// that the increment only changes the iterator it is given;
// __declspec(noalias) tells the compiler the same. <xtree> calls
// std::_Xlength_error and std::_Xout_of_range directly, so their names are
// replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" void fn_82230300(void *self, int a, int b);

struct Element_824A2C00 {
    unsigned char data[36];
    ~Element_824A2C00() { fn_82230300(this, 1, 0); }
};

inline bool operator<(const Element_824A2C00 &a, const Element_824A2C00 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_824A2C00> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822CA028(Tree *self, Tree::_Nodeptr node);
void fn_822CA090(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_824A30C8(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_824A30C8(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
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

template Tree::iterator Tree::erase(Tree::const_iterator);
