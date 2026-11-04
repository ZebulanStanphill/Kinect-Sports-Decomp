// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828E48F0>, clearing the whole tree when the range covers it.
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

struct Element_828E48F0 {
    unsigned key;
};

inline bool operator<(const Element_828E48F0 &a, const Element_828E48F0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828E48F0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Iter_828E48F0 {
    Tree::_Nodeptr node;
};

extern "C" {
__declspec(noalias) Unchecked *fn_828E26F0(Unchecked *self);
void fn_828E4710(Tree *self);
Iter_828E48F0 *fn_828E4160(Iter_828E48F0 *out, Tree *self, Tree::_Nodeptr node);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828E26F0(this);
}

template <> __forceinline void Tree::clear()
{
    fn_828E4710(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Iter_828E48F0 out;
    Iter_828E48F0 *r = fn_828E4160(&out, this, where._Ptr);
    return iterator(r->node, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
