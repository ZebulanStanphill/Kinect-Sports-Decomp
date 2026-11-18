// std::_Tree<Traits>::erase(const_iterator) from <xtree> for a std::set<Element_828B45A8>.
// Element_828B45A8 is a placeholder of the element's size (0xc bytes, trivially destructible);
// the rotations, iterator ++ and node free are the original's out-of-line helpers.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_828B45A8 {
    unsigned key;
    unsigned char pad[0x8];
};

inline bool operator<(const Element_828B45A8 &a, const Element_828B45A8 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828B45A8> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828A1A70(Tree *self, Tree::_Nodeptr node);
void fn_828B3008(Tree *self, Tree::_Nodeptr node);
}

// The original calls the (identical, folded) ++ of Element_828A57C0's iterator.
#include "game/Element_828A57C0.h"
typedef std::set<Element_828A57C0> OtherSet;
typedef std::_Tree_unchecked_const_iterator<OtherSet::_Mybase::_Mybase> OtherUnchecked;

template <> __declspec(noalias) OtherUnchecked &OtherUnchecked::operator++();
template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *(Unchecked *)&++*(OtherUnchecked *)this;
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
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
