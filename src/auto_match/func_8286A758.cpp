namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_8286A758 {
    unsigned char data[40];
};

inline bool operator<(const Element_8286A758 &a, const Element_8286A758 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_8286A758> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828696A0(Tree *self, Tree::_Nodeptr node);
void fn_822507E0(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_82250928(Unchecked *it);
void fn_82864898(void *self);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82250928(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828696A0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_822507E0(this, node);
}

template <> __forceinline void std::_Dest_val(std::allocator<Element_8286A758> &al, Element_8286A758 *p)
{
    fn_82864898((char *)p + 4);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
