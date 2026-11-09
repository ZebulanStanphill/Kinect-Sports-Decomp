// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>: links an allocated node into a std::set next to the hint _Where if
// it belongs there, and otherwise through _Linsert. Element_82550E48 is a
// placeholder for the game's 32-byte value type, a string and an int, ordered by
// the string (see func_82550E48.cpp).
//
// _Insert(bool, _Nodeptr, _Nodeptr) is defined by func_82550E48.cpp. _Linsert,
// the iterator decrement and increment and the string comparison stay calls to
// fn_82674D78, fn_8251F2B0, fn_825503E0 and fn_8260D428 (the linker folded the
// increment with other trees' ones). The game was built with link-time code
// generation, which knew that the iterator functions only change the iterator
// they are given; __declspec(noalias) tells the compiler the same.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
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

struct Element_82550E48 {
    std::string unk0;
    int unk1C;
};

inline bool operator<(const Element_82550E48 &a, const Element_82550E48 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_82550E48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

// The pair _Linsert returns, as fn_82674D78 fills it in.
struct Linserted {
    Node *node;
    bool inserted;
};

extern "C" {
Linserted *fn_82674D78(Linserted *result, Tree *self, Node *node, bool leftish);
__declspec(noalias) void fn_8251F2B0(Unchecked *it);
__declspec(noalias) void fn_825503E0(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8251F2B0(this);
    return *this;
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_825503E0(this);
    return *this;
}

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish)
{
    Linserted result;
    Linserted *done = fn_82674D78(&result, this, node, leftish);
    return _Pairib(iterator(done->node, this), done->inserted);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);
