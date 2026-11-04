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

struct Str_82250398 {
    unsigned char data[28];
};

struct Element_82250398 {
    Str_82250398 a;
    Str_82250398 b;
    int extra[1];
};

inline bool operator<(const Element_82250398 &a, const Element_82250398 &b)
{
    return a.a.data[0] < b.a.data[0];
}

typedef std::set<Element_82250398> Set;
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

template <> __forceinline void std::_Dest_val(std::allocator<Element_82250398> &al, Element_82250398 *p)
{
    fn_82230300(&p->b, 1, 0);
    fn_82230300(&p->a, 1, 0);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
