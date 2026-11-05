// std::_Tree<Traits>::erase(const_iterator, const_iterator) for the set of
// Element_82319130 (see func_82319130.cpp for erase(const_iterator)).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_82319130 {
    int data[6];
};

inline bool operator<(const Element_82319130 &a, const Element_82319130 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82319130> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_823194E0(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_82319610(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82319610(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Erase(_Nodeptr root)
{
    for (_Nodeptr node = root; !node->_Isnil; root = node) {
        fn_823194E0(this, node->_Right);
        node = node->_Left;
        this->_Alnod.deallocate(root, 1);
    }
}

template <> Tree::iterator Tree::erase(const_iterator);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
