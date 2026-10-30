namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" void *fn_82F57D98(void *self, int flags);

struct Element_82F57E00 {
    int data[5];
    ~Element_82F57E00() { fn_82F57D98(this, 0); }
    bool operator<(const Element_82F57E00 &o) const { return data[0] < o.data[0]; }
};

typedef std::set<Element_82F57E00> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_824B4280(void *ptr);
void fn_82825658(Tree *self, Node *node);
void fn_82829BE0(Tree *self, Node *node);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_824B4280(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_82829BE0(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_82825658(this, node);
}

template Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
