// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>:
// unlinks one node of a std::set, rebalances the tree, destroys the value and
// frees the node. Element_8258E838 is a placeholder for the game's 44-byte
// value type, with a string at offset 0 (its destructor is the string's
// cleanup, fn_82230300).
//
// The iterator increment stays a call to fn_8258E7C0, which the linker folded
// with other trees' increments, and the rotations stay calls to fn_8258EDA0 and
// fn_8258EE08. The game was built with link-time code generation, which knew
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

struct Element_8258E838 {
    unsigned char data[44];
    ~Element_8258E838() { fn_82230300(this, 1, 0); }
};

bool operator<(const Element_8258E838 &a, const Element_8258E838 &b);

typedef std::set<Element_8258E838> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8258EDA0(Tree *self, Tree::_Nodeptr node);
void fn_8258EE08(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_8258E7C0(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_8258E7C0(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_8258EDA0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_8258EE08(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
