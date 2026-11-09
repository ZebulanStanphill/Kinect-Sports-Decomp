// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>
// for the std::set whose _Insert is func_82F57E00.cpp: links an allocated node
// into the tree unless an equal value is already present, in which case the
// value is destroyed (fn_82F57D98) and the node freed (fn_824B4280).
// Element_82F57E00 is the placeholder for the game's 20-byte value type,
// ordered by its unsigned first word.
//
// The iterator decrement stays a call to the folded fn_82830D60; the game's
// link-time code generation knew it only changes the iterator it is given,
// which __declspec(noalias) tells the compiler here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" void *fn_82F57D98(void *self, int flags);

struct Element_82F57E00 {
    unsigned int data[5];
    ~Element_82F57E00() { fn_82F57D98(this, 0); }
};

inline bool operator<(const Element_82F57E00 &a, const Element_82F57E00 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82F57E00> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_824B4280(void *ptr);
__declspec(noalias) void fn_82830D60(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_82830D60(this);
    return *this;
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_824B4280(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
