// std::_Tree<Traits>::_Linsert(_Nodeptr, bool) from Visual C++ 2010's <xtree>
// for the std::set<Element_8289E128> of func_8289E128.cpp: links an allocated
// node into the set unless an equal value is already present, in which case the
// node is freed. Element_8289E128 is ordered by its only word (signed).
// _Insert is defined by func_8289E128.cpp; the iterator decrement stays a call
// to fn_8289DC80 (a C unit). The game was built with link-time code generation,
// which knew that the decrement only changes the iterator it is given;
// __declspec(noalias) tells the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_8289E128 {
    int data[1];
};

inline bool operator<(const Element_8289E128 &a, const Element_8289E128 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_8289E128> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noalias) void fn_8289DC80(Unchecked *it);
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8289DC80(this);
    return *this;
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
