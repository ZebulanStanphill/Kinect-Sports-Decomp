// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>: links an allocated node into a std::set next to the hint _Where if
// it belongs there, and otherwise through _Linsert. Element_828BBD90 is a
// placeholder for the game's value type, a string and a shared_ptr, ordered by
// the string (see func_828BBD90.cpp).
//
// _Insert(bool, _Nodeptr, _Nodeptr) is defined by func_828BBD90.cpp. _Linsert,
// the iterator decrement and increment and the string comparison stay calls to
// fn_828BC5D0, fn_828BA968, fn_828A1958 and fn_8260D428 (the linker folded the
// increment with other trees' ones). The game was built with link-time code
// generation, which knew that the iterator functions only change the iterator
// they are given; __declspec(noalias) tells the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <set>
#include <string>
#undef _Xlength_error

extern "C" int fn_8260D428(const std::string *self, unsigned int off, unsigned int n0, const char *ptr,
                           unsigned int count);

template <> __forceinline int std::string::compare(std::string::size_type off, std::string::size_type n0,
                                                   const char *ptr, std::string::size_type count) const
{
    return fn_8260D428(this, off, n0, ptr, count);
}

struct Element_828BBD90 {
    struct Object;
    std::string unk0;
    std::tr1::shared_ptr<Object> unk1C;
};

inline bool operator<(const Element_828BBD90 &a, const Element_828BBD90 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_828BBD90> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

// The pair _Linsert returns, as fn_828BC5D0 fills it in.
struct Linserted {
    Node *node;
    bool inserted;
};

extern "C" {
Linserted *fn_828BC5D0(Linserted *result, Tree *self, Node *node, bool leftish);
__declspec(noalias) void fn_828BA968(Unchecked *it);
__declspec(noalias) void fn_828A1958(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_828BA968(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_828A1958(this);
    return *this;
}

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish)
{
    Linserted result;
    Linserted *done = fn_828BC5D0(&result, this, node, leftish);
    return _Pairib(iterator(done->node, this), done->inserted);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);
