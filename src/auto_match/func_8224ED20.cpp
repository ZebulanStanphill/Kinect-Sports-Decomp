// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree> for the network
// library's std::set<Element_8224ED20>: clear() when the range is the whole set, otherwise a
// loop of iterator ++ and erase(const_iterator). Every caller works on that one container type
// (the library itself, and game code that erases a local copy of one of its sets). clear,
// erase(const_iterator) and the iterator ++ are the original's out-of-line helpers; they keep
// the names that C units use.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range
#include "game/Element_8224ED20.h"

typedef std::set<Element_8224ED20> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct IterPod_8224ED20 {
    Tree::_Nodeptr node;
};

extern "C" {
void fn_8224EEE0(Tree *self);
void fn_825ACF50(IterPod_8224ED20 *out, Tree *self, Tree::_Nodeptr where);
__declspec(noalias) void fn_82248B90(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82248B90(this);
    return *this;
}

template <> __forceinline void Tree::clear()
{
    fn_8224EEE0(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    IterPod_8224ED20 r;
    fn_825ACF50(&r, this, where._Ptr);
    return *(iterator *)&r;
}

template Tree::iterator Tree::erase(Tree::const_iterator, Tree::const_iterator);
