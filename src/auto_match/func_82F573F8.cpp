namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_82F573F8 {
    unsigned char data[60];
};

inline bool operator<(const Element_82F573F8 &a, const Element_82F573F8 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82F573F8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_824B4280(void *ptr);
void fn_823D6300(Tree *self, Tree::_Nodeptr node);
void fn_822508C0(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_822509A0(Unchecked *it);
void fn_82359C18(void *self);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_822509A0(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_824B4280(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_823D6300(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_822508C0(this, node);
}

template <> __forceinline void std::_Dest_val(std::allocator<Element_82F573F8> &al, Element_82F573F8 *p)
{
    char *q = (char *)p + 12;
    fn_82359C18(q + 24);
    fn_82359C18(q);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
