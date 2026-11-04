// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828EF040>, clearing the whole tree when the range covers it.
// clear, iterator ++ and erase(const_iterator) are the original's out-of-line helpers.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828EF040.h"

typedef std::set<Element_828EF040> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Iter_828EF4E8 {
    Tree::_Nodeptr node;
};

extern "C" {
void fn_828EF230(Tree *self);
Iter_828EF4E8 *fn_828EEC18(Iter_828EF4E8 *out, Tree *self, Tree::_Nodeptr node);
}

template <> __declspec(noalias) Unchecked &Unchecked::operator++();

template <> __forceinline void Tree::clear()
{
    fn_828EF230(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Iter_828EF4E8 out;
    Iter_828EF4E8 *r = fn_828EEC18(&out, this, where._Ptr);
    return iterator(r->node, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
