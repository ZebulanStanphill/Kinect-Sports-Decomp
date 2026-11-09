// std::_Tree<Traits>::erase(const_iterator, const_iterator) from Visual C++
// 2010's <xtree>, for the std::set of Element_82386AB8 (a 36-byte placeholder
// value) whose erase(const_iterator) is func_82386AB8.cpp: clears the whole
// tree when the range covers it, and otherwise erases the range node by node.
// Its caller is func_823864B8.cpp.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The first level of clear()'s _Erase is inline and its recursion stays a
// call to fn_82457CC8; the iterator increment stays a call to the folded
// fn_824A30C8.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_82386AB8 {
    int data[9];
};

inline bool operator<(const Element_82386AB8 &a, const Element_82386AB8 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82386AB8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_82457CC8(Tree *self, Tree::_Nodeptr node);
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

template <> __forceinline void Tree::_Erase(_Nodeptr root)
{
    for (_Nodeptr node = root; !node->_Isnil; root = node) {
        fn_82457CC8(this, node->_Right);
        node = node->_Left;
        this->_Alnod.deallocate(root, 1);
    }
}

template <> Tree::iterator Tree::erase(const_iterator);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
