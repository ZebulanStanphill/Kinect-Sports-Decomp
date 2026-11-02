// std::_Tree<Traits>::erase(const_iterator, const_iterator) from Visual C++
// 2010's <xtree>: erases a range of a std::set, clearing the whole tree when the
// range covers it. Element_823656A8 is a placeholder for the game's 8-byte value
// type (see func_823656A8.cpp).
//
// erase(const_iterator) is defined by func_823656A8.cpp. The game was built with
// link-time code generation, which inlined the first level of _Erase (from
// clear()) and left its recursion a call to fn_8243DD58, which the linker folded
// with other trees' _Erase; the specialization below spells out that first level.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_823656A8 {
    unsigned char data[8];
};

inline bool operator<(const Element_823656A8 &a, const Element_823656A8 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_823656A8> Set;
typedef Set::_Mybase Tree;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8243DD58(Tree *self, Tree::_Nodeptr node);
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
