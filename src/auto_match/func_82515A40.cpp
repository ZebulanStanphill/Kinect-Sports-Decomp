// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>:
// unlinks one node of a std::set, rebalances the tree, destroys the value and
// frees the node. Element_82515A40 is a placeholder for the game's 60-byte
// value type, with a string at offset 8 (its destructor is the string's
// cleanup, fn_82230300).
//
// The iterator increment stays a call to fn_822509A0, which the linker folded
// with other trees' increments, and the rotations stay calls to fn_823D6300 and
// fn_822508C0. The game was built with link-time code generation, which knew
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

struct Element_82515A40 {
    unsigned char data[60];
    ~Element_82515A40() { fn_82230300(data + 8, 1, 0); }
};

bool operator<(const Element_82515A40 &a, const Element_82515A40 &b);

typedef std::set<Element_82515A40> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_823D6300(Tree *self, Tree::_Nodeptr node);
void fn_822508C0(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_822509A0(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_822509A0(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_823D6300(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_822508C0(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
