// std::_Tree<Traits>::insert(const_iterator, _Valty&&) from Visual C++ 2010's
// <xtree>, for the std::set<Element_82550E48> whose hinted
// _Insert(const_iterator, _Nodeptr) is func_82675040.cpp: builds a node for
// the value and links it in next to the hint. Element_82550E48 is a
// placeholder for the game's 32-byte value type, a string and an int (see
// func_82550E48.cpp). Converted from the Matching C version so that
// fn_82675040 can take its member name; it takes its own member name too, and
// its only caller, func_826753F0.cpp, calls it as the member.
//
// The inlined _Buynode(_Valty&&) keeps its two out-of-line parts as calls to
// the Matching C functions fn_8251F340 (the node allocator _Buynode(), which
// the linker folded with other trees' ones) and fn_82674F10 (the value
// construction _Cons_val), reached through __forceinline specialisations.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#include <string>
#undef _Xlength_error

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
typedef Tree::allocator_type Alloc;

extern "C" {
Node *fn_8251F340(Tree::_Mybase *self);
void fn_82674F10(Alloc *alval, Element_82550E48 *ptr, Element_82550E48 *val);
}

template <> __forceinline Tree::_Nodeptr Tree::_Mybase::_Buynode()
{
    return fn_8251F340(this);
}

template <> __forceinline void std::_Cons_val(Alloc &alval, Element_82550E48 *ptr, Element_82550E48 &&val)
{
    fn_82674F10(&alval, ptr, &val);
}

template <> Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);

template Tree::iterator Tree::insert<Element_82550E48>(const_iterator, Element_82550E48 &&);
