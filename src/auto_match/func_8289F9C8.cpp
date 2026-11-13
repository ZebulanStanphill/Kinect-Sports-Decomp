// std::_Tree<Traits>::erase(const key_type&) from Visual C++ 2010's <xtree> for the
// std::set<Element_8289F4C8> whose range erase is func_8289F4C8: finds the equal range
// of the key (fn_828A1C98), counts it (_Distance2, fn_8289EDA0), erases it and returns
// the count. The equal_range and _Distance2 instances are out-of-line calls.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_8289F4C8.h"

typedef std::set<Element_8289F4C8> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

extern "C" {
struct Range_8289F9C8 { __forceinline Range_8289F9C8() {} Tree::_Nodeptr first, second; };
Range_8289F9C8 fn_828A1C98(Tree *t, const Element_8289F4C8 &key);
void fn_8289EDA0(Tree::iterator first, Tree::iterator last, unsigned int *off, std::bidirectional_iterator_tag tag);
}

template <> __forceinline Tree::_Pairii Tree::equal_range(const key_type &key)
{
    Range_8289F9C8 r = fn_828A1C98(this, key);
    return _Pairii(iterator(r.first, this), iterator(r.second, this));
}

namespace std {
template <> __forceinline void _Distance2(Tree::iterator first, Tree::iterator last, unsigned int &off,
                                          bidirectional_iterator_tag tag)
{
    fn_8289EDA0(first, last, &off, tag);
}
}

extern "C" unsigned int fn_8289F9C8(Tree *t, const Element_8289F4C8 &key)
{
    Tree::_Pairii w = t->equal_range(key);
    unsigned int n = 0;
    std::_Distance(w.first, w.second, n);
    t->erase(w.first, w.second);
    return n;
}
