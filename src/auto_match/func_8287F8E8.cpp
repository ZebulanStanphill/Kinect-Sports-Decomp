// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>: links an allocated node into a std::set next to the hint _Where if
// it belongs there, and otherwise through _Linsert. Element_8287EFA0 is a
// placeholder for the game's 240-byte value type, ordered by its first word.
//
// _Insert(bool, _Nodeptr, _Nodeptr), _Linsert and the iterator increment are
// called out of line, as the original does (func_8287EFA0, func_8287F640 and
// func_8287CA18 define them); the decrement stays a call to fn_8287CAA8. The
// game was built with link-time code generation, which knew that the iterator
// functions only change the iterator they are given; __declspec(noalias) tells
// the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct __declspec(align(8)) Element_8287EFA0 {
    unsigned key;
    int data[59];
};

inline bool operator<(const Element_8287EFA0 &a, const Element_8287EFA0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8287EFA0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" __declspec(noalias) void fn_8287CAA8(Unchecked *it);

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8287CAA8(this);
    return *this;
}


// Out-of-line members the original calls.
template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
template <> __declspec(noalias) Unchecked &Unchecked::operator++();

template Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
