// std::set<Element_825368B0>::erase(const_iterator) (VC10 <xtree>), as func_823656A8.cpp.
// The 0x24-byte element is polymorphic (virtual destructor called in place).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_825368B0 {
    virtual ~Element_825368B0();
    unsigned int key;
    unsigned int data[7];
};

inline bool operator<(const Element_825368B0 &a, const Element_825368B0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_825368B0> Set;
typedef Set::_Mybase Tree;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822CA028(Tree *self, Tree::_Nodeptr node);
void fn_822CA090(Tree *self, Tree::_Nodeptr node);
}

template <> void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
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
