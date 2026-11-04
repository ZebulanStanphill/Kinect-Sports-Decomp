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

struct Str_824CB080 {
    unsigned char data[28];
};

struct Element_824CB080 {
    Str_824CB080 a;
    Str_824CB080 b;
    int extra[3];
};

inline bool operator<(const Element_824CB080 &a, const Element_824CB080 &b)
{
    return a.a.data[0] < b.a.data[0];
}

typedef std::set<Element_824CB080> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_824CB5D0(Tree *self, Tree::_Nodeptr node);
void fn_824CB638(Tree *self, Tree::_Nodeptr node);
__declspec(noalias) void fn_823E1618(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_823E1618(this);
    return *this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_824CB5D0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_824CB638(this, node);
}

template <> __forceinline void std::_Dest_val(std::allocator<Element_824CB080> &al, Element_824CB080 *p)
{
    fn_82230300(&p->b, 1, 0);
    fn_82230300(&p->a, 1, 0);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
