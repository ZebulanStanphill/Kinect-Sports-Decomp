// std::_Tree<Traits>::_Insert(const_iterator _Where, _Nodeptr _Node) of std::set<Element_828EF040>
// (insert a prepared node using _Where as a hint), Visual C++ 2010's <xtree>.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828EF040 {
    char data[61];
};

extern "C" bool fn_828A0C20(const Element_828EF040 &a, const Element_828EF040 &b);

inline bool operator<(const Element_828EF040 &a, const Element_828EF040 &b)
{
    return fn_828A0C20(a, b);
}

typedef std::set<Element_828EF040> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828EE930(Tree *self, Node *node);
void fn_828EE9A8(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828EE930(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_828EE9A8(this, node);
}

template Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);
