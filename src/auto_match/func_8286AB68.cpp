// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>
// for the std::set whose _Insert is func_8286A528.cpp: links an allocated node
// into the tree unless an equal value is already present, in which case the
// value is destroyed (fn_82864898 on its member at +0x4) and the node freed.
// Element_8286A528 is the placeholder for the game's 40-byte value type,
// ordered by its unsigned first word.
//
// The iterator decrement stays a call to the folded fn_8251C300; the game's
// link-time code generation knew it only changes the iterator it is given,
// which __declspec(noalias) tells the compiler here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_82864898(void *self);
void fn_8265CA20(void *ptr);
}

struct Element_8286A528 {
    unsigned int unk0;
    struct Unk4 {
        ~Unk4() { fn_82864898(this); }
        int data[9];
    } unk4;
};

inline bool operator<(const Element_8286A528 &a, const Element_8286A528 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_8286A528> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" __declspec(noalias) void fn_8251C300(Unchecked *it);

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8251C300(this);
    return *this;
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
