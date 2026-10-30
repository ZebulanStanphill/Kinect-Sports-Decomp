namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" void fn_822315A0(void *rep);

struct Element_828A57C0 {
    int a;
    int b;
    void *rep;
    ~Element_828A57C0() { if (rep != 0) fn_822315A0(rep); }
};

inline bool operator<(const Element_828A57C0 &a, const Element_828A57C0 &b)
{
    return a.a < b.a;
}

typedef std::set<Element_828A57C0> Set;
typedef Set::_Mybase Tree;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828A1A70(Tree *self, Tree::_Nodeptr node);
void fn_828B3008(Tree *self, Tree::_Nodeptr node);
}

template <> void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_828A1A70(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_828B3008(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
