// std::_Tree<Traits>::erase(const_iterator, const_iterator) from Visual C++
// 2010's <xtree>, for the std::set of Element_82825AD0 (an 8-byte placeholder
// value) whose erase(const_iterator) is func_82825AD0.cpp: clears the whole
// tree when the range covers it, and otherwise erases the range node by node.
// Its caller is func_823866C0.cpp.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The first level of clear()'s _Erase is inline and its recursion stays a
// call to fn_8243DD58; the iterator increment stays a call to the folded
// fn_82381BC0.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_82825AD0 {
    int data[2];
};

inline bool operator<(const Element_82825AD0 &a, const Element_82825AD0 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82825AD0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8243DD58(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_82381BC0(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82381BC0(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Erase(_Nodeptr root)
{
    for (_Nodeptr node = root; !node->_Isnil; root = node) {
        fn_8243DD58(this, node->_Right);
        node = node->_Left;
        this->_Alnod.deallocate(root, 1);
    }
}

template <> Tree::iterator Tree::erase(const_iterator);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
