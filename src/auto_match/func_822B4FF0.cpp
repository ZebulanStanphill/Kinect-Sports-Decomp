// std::set<Element_822B4FF0>::erase(const_iterator) (VC10 <xtree>), as func_823656A8.cpp.
// The 12-byte element releases its pointer member in its destructor.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" void fn_822315A0(void *p);

struct Element_822B4FF0 {
    unsigned int key;
    unsigned int value;
    void *object;
    ~Element_822B4FF0()
    {
        if (object != 0)
            fn_822315A0(object);
    }
};

inline bool operator<(const Element_822B4FF0 &a, const Element_822B4FF0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_822B4FF0> Set;
typedef Set::_Mybase Tree;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822B5400(Tree *self, Tree::_Nodeptr node);
void fn_824C0808(Tree *self, Tree::_Nodeptr node);
}

template <> void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_822B5400(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_824C0808(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
